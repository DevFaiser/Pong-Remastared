#include "Object.h"

Object::Object(std::string n_archivo) {
	///cargo textura apartir del nombre y le asocio al sprite
	
	textura_base.loadFromFile(n_archivo);
	sprite_base.setTexture(textura_base);
}

void Object::Dibujar(RenderWindow &ventana){
	ventana.draw(sprite_base);
	
}

bool Object::Colisiona(const Object &o)const{
	
	auto r1= sprite_base.getGlobalBounds();
	auto r2=o.sprite_base.getGlobalBounds();
	return r1.intersects(r2);
	
}
