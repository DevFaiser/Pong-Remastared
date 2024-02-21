#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Scene.h"
using namespace sf;

class Menu : public Scene {
public:
	Menu();
	virtual void Actualizar(Game &juego) override;
	virtual void Dibujar(RenderWindow &ventana) override;
private:
	Text m_t1,m_t2,m_t3,m_t4,m_t5,outline;
	Font fuente;
};

#endif

