//Booms.h
#ifndef __BOOM_H__ 
#define __BOOM_H__ 

#include "SFML/Graphics.hpp"   //подключение библиотек
#include "Object.h"

struct boom {   //структруа описывающая взрыв
	int type, curFrame;  //тип и ?
	double dTime, scale, timeLeft;   //время прошедшее с момента смерти, ...?
	bool isDead;  // флаги того, что он умер вообще и умер вот сейчас
	sf::Vector2f pos;   //позиция

	boom(sf::Vector2f p, int t, double dt, double cf, bool f, double sc) : 
		pos(p), type(t), dTime(dt), curFrame(cf), isDead(f), scale(sc) {};
};

class Booms : public Object {  //дочерний класс бумс базового класса обджект
protected:

public:
	Booms();

	std::vector < boom > list;   // список взрывов

	int cnt;

	void draw(sf::RenderWindow *window);  //отрисовка
	void add(int x, int y, int type, double scale, int); //добавление нового 
	void move(double time);  //движение
	void updateAnimation(double time);  //обновление анимации

	void check();  //проверка на?

	void removeDead();   //удаление уже умерших(?)
	double getAnimationTime();  //
};

#endif