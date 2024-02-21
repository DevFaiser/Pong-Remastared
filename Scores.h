#ifndef SCORES_H
#define SCORES_H
#include "Scene.h"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics.hpp>
#include "Scene.h"
#include <vector>
using namespace std;

struct puntajes{
	int pto;
	char a;
	char b;
	char c;
	char d;
};

class Scores : public Scene {
public:
	Scores(int dif,char a,char b,char c,char d);
	void Actualizar (Game & juego) override;
	void Dibujar (RenderWindow & ventana) override;
private:
	Font fuente;
	Text mensaje;
	Text mensaje2;
	Text mensaje3;
	Text outline;
	Text outline2;
	Text tabla;
	vector<puntajes>v_puntajes;
	
	
};

#endif

