#pragma once

#ifndef NONO_H__
#define NONO_H__
#include "projectiles.h"

template<>
class Projectiles<float>
{
private:
    float Speed;
    float Damage;
    float PositionX;
    float PositionY;
    float DirectionX;  
    float DirectionY;  
    float Radius;

public:
    Projectiles();
    Projectiles(float Speed, float Damage, float PositionX, float PositionY, float DirectionX, float DirectionY, float Radius);

    //Getters
    float GetSpeed();
    float GetDamage();
    float GetPositionX();
    float GetPositionY();
    float GetDirectionX();  
    float GetDirectionY();  
    float GetRadius();

    //Setters
    void SetSpeed(float _speed);
    void SetDamage(float _damage);
    void SetPositionX(float _positionX);
    void SetPositionY(float _positionY);
    void SetDirectionX(float _directionX);  
    void SetDirectionY(float _directionY); 
    void SetRadius(float _radius);

    void PrintCoordinates();
    void Move();  
};

Projectiles<float>::Projectiles() 
    : Speed(0.0f), Damage(0.0f), PositionX(0.0f), PositionY(0.0f), DirectionX(0.0f), DirectionY(0.0f), Radius(0.0f) {}

Projectiles<float>::Projectiles(float Speed, float Damage, float PositionX, float PositionY, float DirectionX, float DirectionY, float Radius) 
    : Speed(Speed), Damage(Damage), PositionX(PositionX), PositionY(PositionY), DirectionX(DirectionX), DirectionY(DirectionY), Radius(Radius) {}

float Projectiles<float>::GetSpeed() {
    return Speed;
}

float Projectiles<float>::GetDamage() {
    return Damage;
}

float Projectiles<float>::GetPositionX() {
    return PositionX;
}

float Projectiles<float>::GetPositionY() {
    return PositionY;
}

float Projectiles<float>::GetDirectionX() {
    return DirectionX;
}

float Projectiles<float>::GetDirectionY() {
    return DirectionY;
}

float Projectiles<float>::GetRadius() {
    return Radius;
}

void Projectiles<float>::SetSpeed(float _speed) {
    Speed = _speed;
}

void Projectiles<float>::SetDamage(float _damage) {
    Damage = _damage;
}

void Projectiles<float>::SetDirectionX(float _directionX) {
    DirectionX = _directionX;
}

void Projectiles<float>::SetDirectionY(float _directionY) {
    DirectionY = _directionY;
}

void Projectiles<float>::SetPositionX(float _positionX) {
    PositionX = _positionX;
}

void Projectiles<float>::SetPositionY(float _positionY) {
    PositionY = _positionY;
}

void Projectiles<float>::SetRadius(float _radius) {
    Radius = _radius;
}

void Projectiles<float>::PrintCoordinates()
{
    std::cout << "X : " << PositionX << " Y : " << PositionY << std::endl;
}

void Projectiles<float>::Move() {
    PositionX += DirectionX * Speed;
    PositionY += DirectionY * Speed;
    std::cout << "Tu es en x : " << PositionX << " et en y : " << PositionY << " et tu fais "<< Damage << " degats sur un rayon de : " << Radius << std::endl;
}

#endif // !ARROWS_H__
