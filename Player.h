#ifndef PLAYER_H
#define PLAYER_H
#include "Object.h"
#include <SFML/Window/Keyboard.hpp>

class Player : public Object {
public:
	Player(bool selecccion_jugador);
	void Actualizar();
private:
	bool seleccion_jugador;
	Keyboard::Key p1_subir;
	Keyboard::Key p1_bajar;
	Keyboard::Key p1_der;
	Keyboard::Key p1_izq;
	Keyboard::Key p2_subir;
	Keyboard::Key p2_bajar;
	Keyboard::Key p2_der;
	Keyboard::Key p2_izq;
	
	
};

#endif

