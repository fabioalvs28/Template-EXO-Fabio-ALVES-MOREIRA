#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

template<typename T>
T getSmallest(T* array, size_t arraySize) 
{

    T smallest = array[5]; 

    for (size_t i = 1; i < arraySize; i++) 
    {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    return smallest;
}

int main() {
    std::vector<int> vector{ 8, 2, 3, 1, 0, 7 };

    int smallestInVector = getSmallest(vector.data(), vector.size());

    std::cout << smallestInVector << std::endl;

    return 0;
}