#pragma once

#ifndef PROJECTILES_H__
#define PROJECTILES_H__

#include <iostream>

template<class T>
class Projectiles
{
private:
	T Speed;
	T Damage;
	T PositionX;
	T PositionY;
	T DirectionX;
	T DirectionY;
	T Radius;

public:
	Projectiles();
	Projectiles(T Speed, T Damage, T PositionX, T PositionY, T DirectionX, T DirectionY, T Radius);

	//Getters
	T GetSpeed();
	T GetDamage();
	T GetPositionX();
	T GetPositionY();
	T GetDirectionX();
	T GetDirectionY();
	T GetRadius();

	//Setters
	void SetSpeed(T _speed);
	void SetDamage(T _damage);
	void SetPositionX(T _positionX);
	void SetPositionY(T _positionY);
	void SetDirectionX(T _directionX);
	void SetDirectionY(T _directionY);
	void SetRadius(T _radius);


	void PrintCoordinates();
	void Move();
};

template<class T>
Projectiles<T>::Projectiles() : Speed(0), Damage(0), PositionX(0), PositionY(0), DirectionX(0), DirectionY(0), Radius(0) {}

template<class T>
Projectiles<T>::Projectiles(T Speed, T Damage, T PositionX, T PositionY, T DirectionX, T DirectionY, T Radius) : Speed(Speed), Damage(Damage), PositionX(PositionX), PositionY(PositionY), DirectionX(DirectionX), DirectionY(DirectionY), Radius(Radius) {}

template<class T>
T Projectiles<T>::GetSpeed() {

	return Speed;
}

template<class T>
T Projectiles<T>::GetDamage() 
{
	return Damage;
}

template<class T>
T Projectiles<T>::GetPositionX() 
{
	return PositionX;
}

template<class T>
T Projectiles<T>::GetPositionY() 
{
	return PositionY;
}

template<class T>
T Projectiles<T>::GetDirectionX() 
{
	return DirectionX;
}

template<class T>
T Projectiles<T>::GetDirectionY() 
{
	return DirectionY;
}

template<class T>
T Projectiles<T>::GetRadius() 
{
	return Radius;
}

template<class T>
void Projectiles<T>::SetSpeed(T _speed) 
{
	Speed = _speed;
}

template<class T>
void Projectiles<T>::SetDamage(T _damage) 
{
	Damage = _damage;
}

template<class T>
void Projectiles<T>::SetDirectionX(T _directionX) 
{
	DirectionX = _directionX;
}

template<class T>
void Projectiles<T>::SetDirectionY(T _directionY) 
{
	DirectionY = _directionY;
}

template<class T>
void Projectiles<T>::SetPositionX(T _positionX)
{
	PositionX = _positionX;
}
	
template<class T>
void Projectiles<T>::SetPositionY(T _positionY) 
{
	PositionY = _positionY;
}

template<class T>
void Projectiles<T>::SetRadius(T _radius) 
{
	Radius = _radius;
}

template<class T>
void Projectiles<T>::PrintCoordinates()
{
	std::cout << "X : " << PositionX << " Y : " << PositionY << std::endl;
}

template<class T>
void Projectiles<T>::Move() {
	PositionX += DirectionX * Speed;
	PositionY += DirectionY * Speed;
	std::cout << "Tu es en x :" << PositionX << " et en y : " << PositionY << std::endl;
}

#endif