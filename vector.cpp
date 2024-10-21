#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>  
#include <string>

void AddElementVector(std::vector<int> &myVector, int _n)
{
	myVector.push_back(_n);
}

void PrintVector(std::vector<int> &myVector)
{
	for (int i : myVector)
		std::cout << i << ' ';
}

void DeleteAtVector(std::vector<int> &myVector, int _n)
{
	myVector.erase(myVector.begin()+_n - 1); // -1 pour tomber sur le bon élément
}

void SortVector(std::vector<int> &myVector)
{
	std::sort(myVector.begin(), myVector.end());
}


