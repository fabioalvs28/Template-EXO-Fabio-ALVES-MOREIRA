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