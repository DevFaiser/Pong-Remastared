#include "Scores.h"
#include "Game.h"
#include "Menu.h"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

bool Ordenar(puntajes A,puntajes B){

	if(A.pto>B.pto){
		return true;
	}
	if(B.pto>A.pto){
		return false;
	}
	
}


Scores::Scores(int dif,char a,char b,char c,char d) {
	
	fuente.loadFromFile("Font/Symtext.ttf");
	
	outline.setFont(fuente);
	outline.setString("---------  ---- ----------------------");
	outline.setCharacterSize(20);
	outline.setPosition(225,60);
	
	mensaje.setFont(fuente);
	mensaje.setString("Tabla de Puntuaciones");
	mensaje.setCharacterSize(30);
	mensaje.setPosition(225,75);
	mensaje.setFillColor({150,150,150});
	
	
	outline2.setFont(fuente);
	outline2.setString("---------  ---- ----------------------");
	outline2.setCharacterSize(20);
	outline2.setPosition(225,105);
	
	mensaje3.setFont(fuente);
	mensaje3.setString("Nombre | Dif ptos");
	mensaje3.setCharacterSize(20);
	mensaje3.setPosition(80,140);
	mensaje3.setFillColor({150,150,150});
	
	
	tabla.setFont(fuente);
	tabla.setCharacterSize(20);
	
	
	mensaje2.setFont(fuente);
	mensaje2.setString("presione M para salir al Menu");
	mensaje2.setCharacterSize(20);
	mensaje2.setPosition(225,400);
	mensaje2.setFillColor({150,150,150});
	
	ifstream archi("Data/Scores.dat",ios::binary);
	puntajes p;
	for(size_t i=0;i<5;i++){
		
		archi.read(reinterpret_cast<char*>(&p),sizeof(puntajes));
		v_puntajes.push_back(p);
		
	}
	archi.close();
	
	puntajes p2;
	
	p2.pto=dif;
	p2.a=a;
	p2.b=b;
	p2.c=c;
	p2.d=d;
	
	v_puntajes.push_back(p2);
	
	sort(v_puntajes.begin(),v_puntajes.end(),Ordenar); ///funcion sort para ordenar vector
	
	ofstream archi2("Data/Scores.dat",ios::binary);
	puntajes p3;
	for(size_t i=0;i<5;i++){
		
		p3.pto=v_puntajes[i].pto;
		p3.a=v_puntajes[i].a;
		p3.b=v_puntajes[i].b;
		p3.c=v_puntajes[i].c;
		p3.d=v_puntajes[i].d;
		archi2.write(reinterpret_cast<char*>(&p3),sizeof(puntajes));
		
	}
	
	archi2.close();
}

void Scores::Actualizar (Game & juego) {
	
	unsigned char r= rand();
	outline.setFillColor({r,0,0});
	outline2.setFillColor({r,0,0});
	mensaje3.setFillColor({r,0,0});

	
	if(Keyboard::isKeyPressed(Keyboard::Key::M)){
		juego.CambiarEscena(new Menu());
	}
}

void Scores::Dibujar (RenderWindow & ventana) {
	
	ventana.clear(Color{1,1,1});
	ventana.draw(mensaje);
	ventana.draw(outline);
	ventana.draw(outline2);
	ventana.draw(mensaje2);
	ventana.draw(mensaje3);
	
	int y=170;
	for(size_t i=0;i<5;i++){
		
		
		tabla.setString(v_puntajes[i].a);
		tabla.setPosition(100,y);
		ventana.draw(tabla);
		
		tabla.setString(v_puntajes[i].b);
		tabla.setPosition(120,y);
		ventana.draw(tabla);
		
		tabla.setString(v_puntajes[i].c);
		tabla.setPosition(140,y);
		ventana.draw(tabla);
		
		tabla.setString(v_puntajes[i].d);
		tabla.setPosition(160,y);
		ventana.draw(tabla);
		
		string txt=to_string(v_puntajes[i].pto);
		tabla.setString(txt);
		tabla.setPosition(200,y);
		ventana.draw(tabla);
		
		y+=30;
		
	}
	
	ventana.display();
}

