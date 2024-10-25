#pragma once

#ifndef ARROWS_H__
#define ARROWS_H__
#include "projectiles.h"

template<>
class Projectiles<int>
{
private:
    int Speed;
    int Damage;
    int PositionX;
    int PositionY;
    int DirectionX;  
    int DirectionY;
    int Radius;

public:
    Projectiles();
    Projectiles(int Speed, int Damage, int PositionX, int PositionY, int DirectionX, int DirectionY, int Radius);

    //Getters
    int GetSpeed();
    int GetDamage();
    int GetPositionX();
    int GetPositionY();
    int GetDirectionX(); 
    int GetDirectionY();  
    int GetRadius();

    //Setters
    void SetSpeed(int _speed);
    void SetDamage(int _damage);
    void SetPositionX(int _positionX);
    void SetPositionY(int _positionY);
    void SetDirectionX(int _directionX);  
    void SetDirectionY(int _directionY);  
    void SetRadius(int _radius);


    void PrintCoordinates();
    void Move();
};

Projectiles<int>::Projectiles()
    : Speed(0), Damage(0), PositionX(0), PositionY(0), DirectionX(0), DirectionY(0), Radius(0) {}

Projectiles<int>::Projectiles(int Speed, int Damage, int PositionX, int PositionY, int DirectionX, int DirectionY, int Radius)
    : Speed(Speed), Damage(Damage), PositionX(PositionX), PositionY(PositionY), DirectionX(DirectionX), DirectionY(DirectionY), Radius(Radius) {}

int Projectiles<int>::GetSpeed() {
    return Speed;
}

int Projectiles<int>::GetDamage() {
    return Damage;
}

int Projectiles<int>::GetPositionX() {
    return PositionX;
}

int Projectiles<int>::GetPositionY() {
    return PositionY;
}

int Projectiles<int>::GetDirectionX() {
    return DirectionX;
}

int Projectiles<int>::GetDirectionY() {
    return DirectionY;
}

int Projectiles<int>::GetRadius() {
    return Radius;
}

void Projectiles<int>::SetSpeed(int _speed) {
    Speed = _speed;
}

void Projectiles<int>::SetDamage(int _damage) {
    Damage = _damage;
}

void Projectiles<int>::SetDirectionX(int _directionX) {
    DirectionX = _directionX;
}

void Projectiles<int>::SetDirectionY(int _directionY) {
    DirectionY = _directionY;
}

void Projectiles<int>::SetPositionX(int _positionX) {
    PositionX = _positionX;
}

void Projectiles<int>::SetPositionY(int _positionY) {
    PositionY = _positionY;
}

void Projectiles<int>::SetRadius(int _radius) {
    Radius = _radius;
}

void Projectiles<int>::PrintCoordinates()
{
    std::cout << "X : " << PositionX << " Y : " << PositionY << std::endl;
}

void Projectiles<int>::Move() {
    PositionX += DirectionX * Speed;
    PositionY += DirectionY * Speed; 
    std::cout << "Tu es en x : " << PositionX << " et en y : " << PositionY << ". Tu fais " << Damage <<" degats et tu transperces tous les ennemis !" << std::endl;
}

#endif // !ARROWS_H__
