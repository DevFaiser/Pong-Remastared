#ifndef BALL_H
#define BALL_H
#include "Object.h"
#include <SFML/Graphics/Text.hpp>

class Ball : public Object{
public:
	Ball();
	void Actualizar();
	void Rebotar();
	int ObtenerPosP1();
	int ObtenerPosP2();
private:
	int velx=8;
	int vely=2;

};

#endif

