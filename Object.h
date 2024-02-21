#ifndef OBJECT_H
#define OBJECT_H
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <string>
#include <SFML/Graphics/RenderWindow.hpp>
using namespace sf;

class Object {
public:
	Object(std::string n_archivo);
	void Dibujar(RenderWindow &ventana);
	bool Colisiona(const Object &o)const ;
protected:
	Texture textura_base;
	Sprite sprite_base;
};

#endif

