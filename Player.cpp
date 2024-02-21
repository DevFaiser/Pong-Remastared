#include "Player.h"
#include <SFML/Window/Keyboard.hpp>

Player::Player(bool seleccion_jugador) : Object("Texture/Paleta.png") {
	///declaro una variable bool para elegir cada jugador con su sprite y su seleccion
	if(seleccion_jugador){
		
		
		
		sprite_base.setPosition(25,250);
		sprite_base.setScale(0.18,0.18);
		p1_subir = Keyboard::W;
		p1_bajar= Keyboard::S;
		p1_der=Keyboard::D;
		p1_izq=Keyboard::A;
		
	}else{
		sprite_base.setPosition(825,250);
		sprite_base.setScale(0.18,0.18);
		p2_subir = Keyboard::Up;
		p2_bajar = Keyboard::Down;
		p2_der=Keyboard::Right;
		p2_izq=Keyboard::Left;
	}
	
	
	
	
	
	
}

void Player::Actualizar(){
	
	///movimiento player 1
	if(Keyboard::isKeyPressed(p1_subir)and sprite_base.getPosition().y>60) {
		sprite_base.move(0,-4);
		
	}
	if(Keyboard::isKeyPressed(p1_bajar)and sprite_base.getPosition().y<400){
		sprite_base.move(0,4);
	}
	if(Keyboard::isKeyPressed(p1_der) and sprite_base.getPosition().x<400){
		sprite_base.move(4,0);
	}
	if(Keyboard::isKeyPressed(p1_izq) and sprite_base.getPosition().x>0){
		sprite_base.move(-4,0);
	}
	
	
	
	
	///movimiento player 2
	if(Keyboard::isKeyPressed(p2_subir) and sprite_base.getPosition().y>60) {
		sprite_base.move(0,-4);
		
	}
	if(Keyboard::isKeyPressed(p2_bajar) and sprite_base.getPosition().y<400){
		sprite_base.move(0,4);
	}
	
	if(Keyboard::isKeyPressed(p2_der) and sprite_base.getPosition().x<800){
		sprite_base.move(4,0);
	}
	if(Keyboard::isKeyPressed(p2_izq) and sprite_base.getPosition().x>440){
		sprite_base.move(-4,0);
	}
	
	
	
	
	
	
}

