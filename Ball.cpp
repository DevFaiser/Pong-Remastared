#include "Ball.h"

Ball::Ball() : Object("Texture/Pelota.png") {  ///le digo al objeto que textura utilizar
	///inicilizar del sprite de la pelota (ponerlo en pantalla)
	
	sprite_base.setPosition(425,250);
	sprite_base.setScale(0.05,0.05);
	
	
}
void Ball::Actualizar(){
	
	sprite_base.move(velx,vely);
	
	///colision de pelota con limites del juego
	
	if(sprite_base.getPosition().x+20>850 or sprite_base.getPosition().x<0){
		
	}
	if(sprite_base.getPosition().y+20>500 or sprite_base.getPosition().y<60){
		
		vely*=-1;
	}

}


void Ball::Rebotar(){
	velx*=-1;
	
	
}

int Ball::ObtenerPosP1(){
	
	if(sprite_base.getPosition().x>850){
		sprite_base.setPosition(425,250);
		velx*=-1;

		return  850;
		
	}
	
}


int Ball::ObtenerPosP2(){
	
	if(sprite_base.getPosition().x<0){
		sprite_base.setPosition(425,250);
		velx*=-1;
		return  0;
		
	}
}
