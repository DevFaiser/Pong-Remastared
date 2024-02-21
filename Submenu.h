#ifndef SUBMENU_H
#define SUBMENU_H
#include "Scene.h"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Game.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class Submenu : public Scene {
public:
	Submenu(int dif);
	void Actualizar (Game & juego);
	void Dibujar (RenderWindow & ventana);
private:	
	int pto;
	char a='x';
	char b='x';
	char c='x';
	char d='x';
	Text t1;
	Text t2;
	Text t3;
	Text t4;
	Text t5;
	Font fuente;
	
	Text mensaje;
	Text mensaje2;
	Text mensaje3;
	Text mensaje4;
	Text outline;
	Text outline2;
	
	
};

#endif

