#include "Submenu.h"
#include <windows.h> 
#include<iostream>
#include "Scores.h"

Submenu::Submenu(int dif) {
	
	pto=dif;  ///guardo en una var a la dif
	string N = to_string(dif);  ///lo convierto en string  para poder usar en text
	
	fuente.loadFromFile("Font/Symtext.ttf");
	
	
	
	outline.setFont(fuente);
	outline.setString("-------------   --------------------");
	outline.setPosition(300,130);
	outline.setCharacterSize(15);
	
	mensaje.setFont(fuente);
	mensaje.setFillColor({150,150,150});
	mensaje.setString("JUEGO FINALIZADO");
	mensaje.setPosition(300,100);
	mensaje.setCharacterSize(30);
	
	outline2.setFont(fuente);
	outline2.setString("-------------   --------------------");
	outline2.setPosition(300,90);
	outline2.setCharacterSize(15);
	
	
	mensaje2.setFont(fuente);
	mensaje2.setFillColor({150,150,150});
	mensaje2.setString("Has ganado por una diferencia de:    punto/s  ");
	mensaje2.setPosition(100,180);
	mensaje2.setCharacterSize(20);
	
	
	mensaje3.setFont(fuente);
	mensaje3.setFillColor({150,150,150});
	mensaje3.setString("Ingrese nombre: ");
	mensaje3.setPosition(100,260);
	mensaje3.setCharacterSize(20);
	
	
	mensaje4.setFont(fuente);
	mensaje4.setFillColor({150,150,150});
	mensaje4.setString("Presione Enter para salir");
	mensaje4.setPosition(150,450);
	mensaje4.setCharacterSize(20);
	
	
	t1.setFont(fuente);
	t1.setCharacterSize(20);
	t1.setPosition(300,260);
	
	t2.setFont(fuente);
	t2.setCharacterSize(20);
	t2.setPosition(330,260);
	
	t3.setFont(fuente);
	t3.setCharacterSize(20);
	t3.setPosition(360,260);
	
	t4.setFont(fuente);
	t4.setCharacterSize(20);
	t4.setPosition(390,260);
	
	
	t5.setFont(fuente);
	t5.setCharacterSize(25);
	t5.setPosition(550,175);
	t5.setString(N);   ///recibo el N como text para t4

	
	
}

void Submenu::Actualizar (Game & juego) {
	
	
	unsigned char r = rand();
	outline.setFillColor({r,0,0});
	outline2.setFillColor({r,0,0});
	t5.setFillColor({r,0,0});
	t1.setFillColor({255,0,0});
	t2.setFillColor({255,0,0});
	t3.setFillColor({255,0,0});
	t4.setFillColor({255,0,0});
	
	
	
	Sleep(50); ///para evitar tipear por error
	
	if(Keyboard::isKeyPressed(Keyboard::A)){
		Sleep(50); ///evitar que se repita la letra oprimida
		if(a=='-'){a='A';}
		else if(b=='x'){b='A';}
		else if(c=='x'){c='A';}
		else if(d=='x'){d='A';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::B)){
		Sleep(50);
		if(a=='x'){a='B';}
		else if(b=='x'){b='B';}
		else if(c=='x'){c='B';}
		else if(d=='x'){d='B';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::C)){
		Sleep(50);
		if(a=='x'){a='C';}
		else if(b=='x'){b='C';}
		else if(c=='x'){c='C';}
		else if(d=='x'){d='C';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::D)){
		Sleep(50);
		if(a=='x'){a='D';}
		else if(b=='x'){b='D';}
		else if(c=='x'){c='D';}
		else if(d=='x'){d='D';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::E)){
		Sleep(50);
		if(a=='x'){a='E';}
		else if(b=='x'){b='E';}
		else if(c=='x'){c='E';}
		else if(d=='x'){d='E';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::F)){
		Sleep(50);
		if(a=='x'){a='F';}
		else if(b=='x'){b='F';}
		else if(c=='x'){c='F';}
		else if(d=='x'){d='F';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::G)){
		Sleep(50);
		if(a=='x'){a='G';}
		else if(b=='x'){b='G';}
		else if(c=='x'){c='G';}
		else if(d=='x'){d='G';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::H)){
		Sleep(50);
		if(a=='x'){a='H';}
		else if(b=='x'){b='H';}
		else if(c=='x'){c='H';}
		else if(d=='x'){d='H';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::I)){
		Sleep(50);
		if(a=='x'){a='I';}
		else if(b=='x'){b='I';}
		else if(c=='x'){c='I';}
		else if(d=='x'){d='I';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::J)){
		Sleep(50);
		if(a=='x'){a='J';}
		else if(b=='x'){b='J';}
		else if(c=='x'){c='J';}
		else if(d=='x'){d='J';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::K)){
		Sleep(50);
		if(a=='x'){a='K';}
		else if(b=='x'){b='K';}
		else if(c=='x'){c='K';}
		else if(d=='x'){d='K';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::L)){
		Sleep(50);
		if(a=='x'){a='L';}
		else if(b=='x'){b='L';}
		else if(c=='x'){c='L';}
		else if(d=='x'){d='L';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::M)){
		Sleep(50);
		if(a=='x'){a='M';}
		else if(b=='x'){b='M';}
		else if(c=='x'){c='M';}
		else if(d=='x'){d='M';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::N)){
		Sleep(50);
		if(a=='x'){a='N';}
		else if(b=='x'){b='N';}
		else if(c=='x'){c='N';}
		else if(d=='x'){d='N';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::O)){
		Sleep(50);
		if(a=='x'){a='O';}
		else if(b=='x'){b='O';}
		else if(c=='x'){c='O';}
		else if(d=='x'){d='O';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::P)){
		Sleep(50);
		if(a=='x'){a='P';}
		else if(b=='x'){b='P';}
		else if(c=='x'){c='P';}
		else if(d=='x'){d='P';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::Q)){
		Sleep(50);
		if(a=='x'){a='Q';}
		else if(b=='x'){b='Q';}
		else if(c=='x'){c='Q';}
		else if(d=='x'){d='Q';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::R)){
		Sleep(50);
		if(a=='x'){a='R';}
		else if(b=='x'){b='R';}
		else if(c=='x'){c='R';}
		else if(d=='x'){d='R';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::S)){
		Sleep(50);
		if(a=='x'){a='S';}
		else if(b=='x'){b='S';}
		else if(c=='x'){c='S';}
		else if(d=='x'){d='S';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::T)){
		Sleep(50);
		if(a=='x'){a='T';}
		else if(b=='x'){b='T';}
		else if(c=='x'){c='T';}
		else if(d=='x'){d='T';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::U)){
		Sleep(50);
		if(a=='x'){a='U';}
		else if(b=='x'){b='U';}
		else if(c=='x'){c='U';}
		else if(d=='x'){d='U';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::V)){
		Sleep(50);
		if(a=='x'){a='V';}
		else if(b=='x'){b='V';}
		else if(c=='x'){c='V';}
		else if(d=='x'){d='V';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::W)){
		Sleep(50);
		if(a=='x'){a='W';}
		else if(b=='x'){b='W';}
		else if(c=='x'){c='W';}
		else if(d=='x'){d='W';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::X)){
		Sleep(50);
		if(a=='x'){a='X';}
		else if(b=='x'){b='X';}
		else if(c=='x'){c='X';}
		else if(d=='x'){d='X';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::Y)){
		Sleep(50);
		if(a=='x'){a='Y';}
		else if(b=='x'){b='Y';}
		else if(c=='x'){c='Y';}
		else if(d=='x'){d='Y';}
	}
	else if(Keyboard::isKeyPressed(Keyboard::Z)){
		Sleep(50);
		if(a=='-'){a='Z';}
		else if(b=='x'){b='Z';}
		else if(c=='x'){c='Z';}
		else if(d=='x'){d='Z';}
	}
	
	t1.setString(a);
	t2.setString(b);
	t3.setString(c);
	t4.setString(d);
	
	
	if(Keyboard::isKeyPressed(Keyboard::Return)){
		
		juego.CambiarEscena(new Scores(pto,a,b,c,d));
	}
	
}

void Submenu::Dibujar (RenderWindow & ventana) {
	
	
	ventana.clear(Color{1,1,1});
	ventana.draw(t1);
	ventana.draw(t2);
	ventana.draw(t3);
	ventana.draw(t4);
	ventana.draw(t5);
	ventana.draw(mensaje);
	ventana.draw(mensaje2);
	ventana.draw(mensaje3);
	ventana.draw(mensaje4);
	ventana.draw(outline);
	ventana.draw(outline2);
	ventana.display();
	
}

