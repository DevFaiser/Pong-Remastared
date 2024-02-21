#include "Menu.h"
#include "Game.h"
#include <SFML/Window/Keyboard.hpp>
#include "Match.h"
#include "Scores.h"
#include "Help.h"

Menu::Menu() {
	fuente.loadFromFile("Font/Symtext.ttf");
	m_t1.setFont(fuente);
	m_t2.setFont(fuente);
	m_t3.setFont(fuente);
	m_t4.setFont(fuente);
	m_t5.setFont(fuente);
	outline.setFont(fuente);
	
	m_t1.setFillColor({255,255,255});
	m_t1.setString("Pong Remastered");
	m_t1.setPosition(175,150);
	m_t1.setCharacterSize(50);
	
	
	m_t2.setFillColor({150,150,150});
	m_t2.setString("Iniciar Juego [ENTER]");
	m_t2.setPosition(300,300);
	m_t2.setCharacterSize(20);
	
	
	m_t3.setFillColor({150,155,150});
	m_t3.setString("Tabla de puntuaciones [P]");
	m_t3.setPosition(275,350);
	m_t3.setCharacterSize(20);
	
	m_t5.setFillColor({150,155,150});
	m_t5.setString("Ayuda [H]");
	m_t5.setPosition(380,400);
	m_t5.setCharacterSize(20);
	
	
	
	
	m_t4.setFillColor({150,155,150});
	m_t4.setString("Salir [E]");
	m_t4.setPosition(380,450);
	m_t4.setCharacterSize(20);
	
	
	
	outline.setString("-------------  -------------------------------");
	outline.setPosition(175,210);
	outline.setCharacterSize(20);
	
	
}

void Menu::Actualizar(Game &juego){
	
	if(Keyboard::isKeyPressed(Keyboard::Key::Return)){
		juego.CambiarEscena(new Match()); 
	}
	
	if(Keyboard::isKeyPressed(Keyboard::Key::P)){
		juego.CambiarEscena(new Scores(-1,'x','x','x','x')); 
	}
	
	
	unsigned char r = rand();
	unsigned char g = rand();
	unsigned char b = rand();
	outline.setFillColor({r,0,0});
	
	if(Keyboard::isKeyPressed(Keyboard::Key::H)){
		juego.CambiarEscena(new Help()); 
	}
	
	
	
	if(Keyboard::isKeyPressed(Keyboard::E)){
		exit(0);
	}
	
}

void Menu::Dibujar(RenderWindow &ventana){

	
	ventana.clear(Color{1,1,1});
	ventana.draw(m_t1);
	ventana.draw(m_t2);
	ventana.draw(m_t3);
	ventana.draw(m_t4);
	ventana.draw(m_t5);
	ventana.draw(outline);
	ventana.display();
}

