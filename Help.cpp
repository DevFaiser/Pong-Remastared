#include "Help.h"
#include <SFML/Window/Keyboard.hpp>
#include "Game.h"
#include "Menu.h"

Help::Help() {
	fuente.loadFromFile("Font/Symtext.ttf");
	t1.setFont(fuente);
	mensaje.setFont(fuente);
	mensaje2.setFont(fuente);
	mensaje3.setFont(fuente);
	mensaje4.setFont(fuente);
	mensaje5.setFont(fuente);
	mensaje6.setFont(fuente);
	t2.setFont(fuente);
	
	outline.setFont(fuente);
	outline.setString("-------------------------------------");
	outline.setCharacterSize(20);
	outline.setPosition(220,15);
	
	t1.setFillColor({150,150,150});
	t1.setString("Instrucciones");
	t1.setPosition(220,30);
	t1.setCharacterSize(50);
	
	outline2.setFont(fuente);
	outline2.setString("-------------------------------------");
	outline2.setCharacterSize(20);
	outline2.setPosition(220,80);
	
	mensaje.setFillColor({150,150,150});
	mensaje.setString("Es un juego 1 vs 1 , donde el objetivo es hacer que la pelota traspase el area del contario.");
	mensaje.setPosition(10,150);
	mensaje.setCharacterSize(12);
	
	mensaje2.setFillColor({150,150,150});
	mensaje2.setString("La duracion del partido sera de 1 minuto, el que gane mas puntos sera el ganador");
	mensaje2.setPosition(10,180);
	mensaje2.setCharacterSize(12);
	
	mensaje3.setFillColor({150,150,150});
	mensaje3.setString("Al finalizar se pedira al ganador su nombre de 4 digitos, con su puntuacion respectiva");
	mensaje3.setPosition(10,210);
	mensaje3.setCharacterSize(12);
	
	mensaje4.setFillColor({150,150,150});
	mensaje4.setString("La tabla de puntuaciones registra los 5 mejores puntajes:");
	mensaje4.setPosition(10,240);
	mensaje4.setCharacterSize(12);
	
	mensaje5.setFillColor({150,150,150});
	mensaje5.setString("La puntuacion se basa en la diferencia de puntos que tenga entre el ganador y el perdedor de una partida");
	mensaje5.setPosition(10,270);
	mensaje5.setCharacterSize(11);
	
	mensaje6.setFillColor({150,150,150});
	mensaje6.setString("Controles:    Player 1     -      Player 2 ");
	mensaje6.setPosition(10,300);
	mensaje6.setCharacterSize(12);
	
	textura_c1.loadFromFile("Texture/player1-c.png");
	control1.setTexture(textura_c1);
	control1.setPosition(100,330);
	control1.setScale(0.20,0.20);
	
	textura_c2.loadFromFile("Texture/player2-c.png");
	control2.setTexture(textura_c2);
	control2.setPosition(250,330);
	control2.setScale(0.20,0.20);
	
	
	textura_m.loadFromFile("Texture/icono.png");
	sprite_m.setTexture(textura_m);
	sprite_m.setPosition(50,420);
	sprite_m.setScale(0.10,0.10);
	
	t2.setFillColor({150,150,150});
	t2.setString("Presione M para salir al Menu");
	t2.setPosition(250,450);
	t2.setCharacterSize(20);
	
	
}


void Help::Actualizar (Game & juego) {
	
	unsigned char r= rand();
	outline.setFillColor({r,0,0});
	outline2.setFillColor({r,0,0});

	
	if(Keyboard::isKeyPressed(Keyboard::Key::M)){
		juego.CambiarEscena(new Menu());
	}
	
}

void Help::Dibujar (RenderWindow & ventana) {
	
	
	ventana.clear(Color{1,1,1});
	ventana.draw(t1);
	ventana.draw(mensaje);
	ventana.draw(outline);
	ventana.draw(outline2);
	ventana.draw(mensaje2);
	ventana.draw(mensaje3);
	ventana.draw(mensaje4);
	ventana.draw(mensaje5);
	ventana.draw(mensaje6);
	ventana.draw(control1);
	ventana.draw(control2);
	ventana.draw(sprite_m);
	ventana.draw(t2);
	ventana.display();
}


