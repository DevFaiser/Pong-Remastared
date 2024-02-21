#include "Match.h"
#include "Menu.h"
#include "Ball.h"
#include <SFML/Graphics/Text.hpp>
#include <iostream>
#include "Submenu.h"
#include <windows.h> 
using namespace std;
using namespace sf;

Match::Match(): p1(true),p2(false){
	
	
	///carga de la cancha
	
	imagen.loadFromFile("Texture/cancha.jpg");
	cancha.setTexture(imagen);
	
	
	
	///carga de la fuente para los contadores

	Fuente.loadFromFile("Font/Symtext.ttf");
	Contador_P1.setFont(Fuente);
	Contador_P1.setCharacterSize(40);
	Contador_P1.setPosition(212,10);
	
	
	
	Contador_P2.setFont(Fuente);
	Contador_P2.setCharacterSize(40);
	Contador_P2.setPosition(637,10);
	
	
	reloj_p.setFont(Fuente);
	reloj_p.setCharacterSize(40);
	reloj_p.setPosition(350,10);
	reloj_p.setFillColor(sf::Color::Red);
	
	
	
	
}

void Match::Actualizar(Game &juego){
	
	if(Keyboard::isKeyPressed(Keyboard::Key::Escape)){
		juego.CambiarEscena(new Menu());
	}

	///colision pelota con player
	
	if (pelota.Colisiona(p1) || pelota.Colisiona(p2)){
		pelota.Rebotar();
	}
	///marcadores
	
	if(pelota.ObtenerPosP1()== 850 ){
		
		cont_p1++;
		
	}
	
	if(pelota.ObtenerPosP2()== 0){
		
		cont_p2++;
		
	}
	
	Contador_P1.setString(to_string(cont_p1));
	Contador_P2.setString(to_string(cont_p2));
	
	///controla el time
	

	texto.str("");
	tiempo=reloj.getElapsedTime();
	s=tiempo.asSeconds();
	h=s/3600;
	m=(s-(h*3600))/60;
	s=s-(h*3600+m*60);
	
	
	if(m<10){
		
		texto<<"0"<<m;
	}else{
		texto<<":"<<m;
	}
	
	if(s<10)
	{
		texto<<"0"<<s;
	}else{
		texto<<":"<<s;
	}
	
	reloj_p.setString(texto.str());
	int tiempolimite=20;
	
	///Tiempo limite
	
	if(s>tiempolimite and cont_p1==cont_p2){
		
		if(s>tiempolimite and pelota.ObtenerPosP1()== 850 ){
			diferencia_gol=cont_p1-cont_p2;
			Sleep(50);
			juego.CambiarEscena(new Submenu(diferencia_gol));
			
			
		}
		
		if(s>tiempolimite and pelota.ObtenerPosP2()== 0){
			diferencia_gol=cont_p2-cont_p1;
			Sleep(50);
			juego.CambiarEscena(new Submenu(diferencia_gol));
			
		}
		
		
	}else{
		
		if(s>tiempolimite and cont_p1>cont_p2){
			
			diferencia_gol=cont_p1-cont_p2;
			Sleep(50);
			juego.CambiarEscena(new Submenu(diferencia_gol)); 
		}else{
			
			if(s>tiempolimite and cont_p2>cont_p1){
				diferencia_gol=cont_p2-cont_p1;
				Sleep(50);
				juego.CambiarEscena(new Submenu(diferencia_gol)); 
				
				
			}
			
			
		}
		
		
	}
	
	
	
	
	pelota.Actualizar();
	p1.Actualizar();
	p2.Actualizar();

}

void Match::Dibujar(RenderWindow &ventana){
	
	ventana.clear(Color(0,0,0));
	ventana.draw(cancha);
	pelota.Dibujar(ventana);
	p1.Dibujar(ventana);
	p2.Dibujar(ventana);
	ventana.draw(Contador_P1);
	ventana.draw(Contador_P2);
	ventana.draw(reloj_p);
	ventana.display();
	
}
