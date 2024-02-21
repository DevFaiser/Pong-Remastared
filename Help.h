#ifndef HELP_H
#define HELP_H
#include "Scene.h"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class Help : public Scene {
public:
	Help();
	void Actualizar (Game & juego);
	void Dibujar (RenderWindow & ventana);
private:
	Font fuente;
	Text t1,outline,outline2,mensaje,mensaje2,mensaje3,mensaje4,mensaje5,mensaje6,t2;
	Texture textura_m;
	Texture textura_c1;
	Texture textura_c2;
	Sprite sprite_m;
	Sprite control1;
	Sprite control2;
	
};

#endif

