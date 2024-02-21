#ifndef GAME_H
#define GAME_H
#include "Scene.h"
#include <SFML/Graphics/RenderWindow.hpp>
using namespace sf;


class Game {
public:
	Game();
	void Ejecutar();///run();
	void ProcesarEventos();
	void Actualizar();
	void Dibujar();
	void CambiarEscena(Scene *sig_escena);
private:
	RenderWindow ventana; ///el atributo ventana es para que se pueda usar en toda la clase
	Scene *escena;  ///escena actual
	Scene *siguiente_escena=nullptr; //siguiente escena
	
};

#endif

