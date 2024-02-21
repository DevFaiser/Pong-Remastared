#include "Game.h"
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include <SFML/Graphics/Text.hpp>
using namespace std;
using namespace sf;

Game::Game(): ventana(VideoMode(850,500),"Pong Remastered"){
	///inicializacion
	ventana.setFramerateLimit(75);
	escena = new Menu();
}


void Game::Ejecutar(){ ///run();
	///bucle de evento
	while(ventana.isOpen()) {
		ProcesarEventos();
		Actualizar();
		Dibujar();
		if(siguiente_escena){
			delete escena;
			escena=siguiente_escena;
			siguiente_escena=nullptr;
		}
	}
}

void Game::Actualizar(){ 

	escena->Actualizar(*this);
}

void Game::Dibujar(){ ///mostrar
	
	escena->Dibujar(ventana);
}

void Game::ProcesarEventos(){
	Event e;
	while(ventana.pollEvent(e)) {
		if(e.type == Event::Closed)
			ventana.close();
	}
	
	
}


void Game::CambiarEscena(Scene * sig_escena){
	siguiente_escena = sig_escena;
	
}
