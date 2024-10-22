#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>  
#include <string>
#include <numeric>

#ifndef TOURNAMENT_H__
#define TOURNAMENT_H__

typedef struct Player
{
	std::string name;
	int score;
};

void PrintPlayers(std::vector<Player>& _players);
void AddPlayer(std::vector<Player>& _players, std::string _name, int _score);
void DeletePlayer(std::vector<Player>& _players);
void GetPlayer(std::vector<Player>& _players);
void DynamicSort(std::vector<Player>& _players);


#endif // !VECTOR_H__

