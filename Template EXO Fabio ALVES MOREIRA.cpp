#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>  
#include <string>
#include "vector.h"
#include "list.h"
#include "set.h"

std::vector<int> Vector{ 5, 2, 9, 1, 5, 6 };

std::list<int> myList{ 5, 2, 9, 1, 5, 6 };

std::set<int> mySet{ 5, 2, 9, 1, 5, 6 };

int Choose()
{
	std::string choice;
	std::cout << "Que veux tu utiliser ? (vector, list ou set)" << std::endl;
	std::cin >> choice;

	if (choice == "vector")
	{
		return 1;
	}
	else if (choice == "list")
	{
		return 2;
	}
	else if (choice == "set")
	{
		return 3;
	}

}

//int main() 
//{
//
//	int choice = Choose();
//
//	switch (choice)
//	{
//		case 1:
//			std::cout << "Base Vector" << std::endl;
//			PrintVector(Vector);
//			AddElementVector(Vector, 3);
//			std::cout << "\nAdd 3 at the end" << std::endl;
//			PrintVector(Vector);
//			DeleteAtVector(Vector, 2);
//			std::cout << "\nErase 2" << std::endl;
//			PrintVector(Vector);
//			SortVector(Vector);
//			std::cout << "\nSort them from smallest to biggest" << std::endl;
//			PrintVector(Vector);
//			break;
//
//		case 2:
//			std::cout << "Base list" << std::endl;
//			PrintList(myList);
//			AddElementList(myList, 3);
//			std::cout << "\nAdd 3 at the end" << std::endl;
//			PrintList(myList);
//			DeleteAtList(myList, 2);
//			std::cout << "\nErase 2" << std::endl;
//			PrintList(myList);
//			SortList(myList);
//			std::cout << "\nSort them from smallest to biggest" << std::endl;
//			PrintList(myList);
//			break;
//
//		case 3:
//			std::cout << "Base set" << std::endl;
//			PrintSet(mySet);
//			AddElementSet(mySet, 3);
//			std::cout << "\nAdd 3" << std::endl;
//			PrintSet(mySet);
//			DeleteAtSet(mySet, 2);
//			std::cout << "\nErase 2" << std::endl;
//			PrintSet(mySet);
//			break;
//
//	}
//
//			return 0;
//}