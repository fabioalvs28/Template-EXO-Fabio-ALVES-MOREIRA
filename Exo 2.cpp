#include "vector.h"
#include "list.h"
#include "set.h"
#include <chrono>

using namespace std::chrono;


std::vector<int> Vector{};

std::list<int> List{};

std::set<int> Set{};



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
//	srand(static_cast<unsigned int>(time(0)));
//
//	int choice = Choose();
//
//	steady_clock::time_point t1;
//
//	steady_clock::time_point t2;
//
//	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//
//	int max = 1000000;
//
//	int i = 0;
//
//
//	switch (choice)
//	{
//		case 1:
//			std::cout << "Add" << std::endl;
//			t1 = steady_clock::now();
//			for (i; i < max; i++)
//			{
//				int temp = rand() % max;
//				AddElementVector(Vector, temp);
//			}
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//
//			std::cout << "Search" << std::endl;
//			t1 = steady_clock::now();
//			std::cout << Vector.at(563489) << std::endl;
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//
//			std::cout << "Delete" << std::endl;
//			t1 = steady_clock::now();
//			Vector.clear();
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//			std::cout << Vector.size() << std::endl;
//
//			break;
//
//		case 2:
//			std::cout << "Add" << std::endl;
//			t1 = steady_clock::now();
//			for (i; i < max; i++)
//			{
//				int temp = rand() % max;
//				AddElementList(List, temp);
//			}
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//
//			std::cout << "Search" << std::endl;
//			t1 = steady_clock::now();
//			std::cout << Get(List, 563489) << std::endl;
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//
//			std::cout << "Delete" << std::endl;
//			t1 = steady_clock::now();
//			List.clear();
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//			std::cout << List.size() << std::endl;
//			break;
//
//		case 3:
//			std::cout << "Add" << std::endl;
//			t1 = steady_clock::now();
//			for (i; i < max; i++)
//			{
//				AddElementSet(Set, i);
//			}
//			t2 = steady_clock::now();
//			duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//
//			std::cout << "Search" << std::endl;
//			t1 = steady_clock::now();
//			auto it = Set.find(563489);
//			if (it != Set.end())
//			{
//				std::cout << *it << std::endl;
//			}
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//
//			std::cout << "Delete" << std::endl;
//			t1 = steady_clock::now();
//			Set.clear();
//			t2 = steady_clock::now();
//			time_span = duration_cast<duration<double>>(t2 - t1);
//			std::cout << "It took me " << time_span.count() << " seconds." << std::endl;
//			std::cout << Set.size() << std::endl;
//			break;
//
//	}
//
//			return 0;
//}