#include "set.h"

void PrintSet(std::set<int>& mySet)
{
	for (int i : mySet)
	{
		std::cout << i << ' ';
	}
}
void AddElementSet(std::set<int>& mySet, int _n)
{
	mySet.insert(_n);
}

void DeleteAtSet(std::set<int>& mySet, int _n)
{
	mySet.erase(_n);
}
