#ifndef MATCH_H
#define MATCH_H
#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "Player.h"
#include "Scene.h"
#include "Game.h"
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/System/Clock.hpp>
#include <sstream>
using namespace std;
using namespace sf;

class Match :public Scene {
public:
	Match();
	void Actualizar(Game &juego) override;
	void Dibujar(RenderWindow &ventana) override;

private:
	Sprite cancha;
	Texture imagen;
	Ball pelota;
	Player p1;
	Player p2;
	Font Fuente;
	Text Contador_P1;
	Text Contador_P2;
	int cont_p1=0;
	int cont_p2=0;
	Time tiempo;
	Clock reloj;
	stringstream texto;
	int s=0;
	int m=0;
	int h=0;
	Text reloj_p;
	int diferencia_gol;
	
	
	
	
	


};
#endif

