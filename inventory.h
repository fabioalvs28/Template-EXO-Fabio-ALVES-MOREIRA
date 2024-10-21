#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>  
#include <string>
#include <numeric>

#ifndef INVENTORY_H__
#define INVENTORY_H__

typedef struct Item
{
	std::string Name;
	int weight;
	int InventoryLimit = 100;
};

void PrintInventory(std::vector<Item>& _inventory);
void AddElementInventory(std::vector<Item>& _inventory, std::string _name, int _weight);
void DeleteElementInventory(std::vector<Item>& _inventory, std::string _name);
void GetElementInventory(std::vector<Item>& _inventory);
void SortInventory(std::vector<Item>& _inventory);
void PrintTotalWeight(std::vector<Item>& _inventory);
void DynamicSort(std::vector<Item>& _inventory);
void PrintAverageWeight(std::vector<Item>& _inventory);
void PrintElementHeavier(std::vector<Item>& _inventory);




#endif // !VECTOR_H__

