#pragma once

#ifndef CHARACTER_H__
#define CHARACTER_H__
#include <cmath>


template<typename T>
double calculStatistique(T array[], int size) {
    T sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    double average = static_cast<double>(sum) / size;
    std::cout << "La moyenne est de : " << average << std::endl;
    return average;
}

template<>
double calculStatistique<float>(float array[], int size) {
    float sum = 0;
    float sumSquared = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    double average = static_cast<double>(sum) / size;

    for (int i = 0; i < size; i++) {
        sumSquared += (array[i] - average) * (array[i] - average);
    }

    double variance = sumSquared / size;
    std::cout << "La variance est de : " << variance << std::endl;

    return variance;
}

template<typename T>
class Character 
{
public:
	T HP;
	T ATK;
	T DEF;

	Character();
	Character(T HP, T ATK, T DEF);

};

template<typename T>
Character<T>::Character() : HP(0), ATK(0), DEF(0) {}

template<typename T>
Character<T>::Character(T HP, T ATK, T DEF) : HP(HP), ATK(ATK), DEF(DEF) {}

#endif // !CHARACTER_H__

