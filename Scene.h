#ifndef SCENE_H
#define SCENE_H
#include <SFML/Graphics/RenderWindow.hpp>
using namespace sf;

class Game;

class Scene {
public:
	Scene();
	virtual void Actualizar(Game &juego)=0;
	virtual void Dibujar(RenderWindow &ventana)=0;
private:
};

#endif

