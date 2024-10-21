#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>  
#include <string>

#ifndef LIST_H__
#define LIST_H__

void PrintList(std::list<int>& myList);
void AddElementList(std::list<int>& myList, int _n);
void DeleteAtList(std::list<int>& myList, int _n);
void SortList(std::list<int>& myList);

#endif // !LIST_H__

