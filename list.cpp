#include "list.h"

void PrintList(std::list<int>& myList)
{
	for (int i : myList)
	{
		std::cout << i << ' ';
	}
}

void AddElementList(std::list<int>& myList, int _n)
{
	myList.push_back(_n);
}

void DeleteAtList(std::list<int>& myList, int _n)
{
	myList.remove(_n);
}


void SortList(std::list<int>& myList)
{
	myList.sort();
}

int Get(std::list<int>& myList, int _i) 
{
	std::list<int>::iterator it = myList.begin();
	for (int i = 0; i < _i; i++) {
		++it;
	}
	return *it;
}