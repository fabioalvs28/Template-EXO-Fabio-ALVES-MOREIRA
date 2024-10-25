#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

template<typename T>
T GetSmallest(T* array, size_t arraySize) 
{

    T smallest = array[0]; 

    for (size_t i = 1; i < arraySize; i++) 
    {
        if (array[i] < smallest) 
        {
            smallest = array[i];
        }
    }

    return smallest;
}

template<typename T>
int GetSizeOfVector(std::vector<T> vector, T element)
{
    vector.push_back(element);

    return vector.size();
}

template<typename T>
int SumOfElements(T* array, size_t arraySize)
{
    T temp = 0;

    for (int i = 0; i < arraySize; i++)
    {
        temp += array[i];
    }

    return temp;
}

template<typename T>
double Average(T array[], size_t arraySize)
{
    T weight = SumOfElements(array, arraySize);

    T average = weight / arraySize;

    return static_cast<double>(average);
}

template<>
double Average<int>(int array[], size_t arraySize)
{
    int weight = SumOfElements(array, arraySize);

    double average = static_cast<double>(weight) / arraySize;

    return average;
}

//int main() {
//    int intArray[] = { 4, 2, 7, 1, 9 };
//    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
//    std::cout << "Smallest in intArray : " << GetSmallest(intArray, intSize) << std::endl;
//    std::cout << "Sum of intArray : " << SumOfElements(intArray, intSize) << std::endl;
//    std::cout << "Average of intArray : " << Average(intArray, intSize) << std::endl;
//
//    double doubleArray[] = { 3.5, 2.1, 5.6, 0.9, 4.8 };
//    size_t doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
//    std::cout << "Smallest in doubleArray : " << GetSmallest(doubleArray, doubleSize) << std::endl;
//    std::cout << "Sum of doubleArray : " << SumOfElements(doubleArray, doubleSize) << std::endl;
//    std::cout << "Average of doubleArray : " << Average(doubleArray, doubleSize) << std::endl;
//
//    float floatArray[] = { 8.5f, 23.5f, 5.3f, 9.6f };
//    size_t floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
//    std::cout << "Smallest in floatArray : " << GetSmallest(floatArray, floatSize) << std::endl;
//    std::cout << "Sum of floatArray : " << SumOfElements(floatArray, floatSize) << std::endl;
//    std::cout << "Average of floatArray : " << Average(floatArray, floatSize) << std::endl;
//
//    std::string strArray[] = { "pomme", "abricot", "banane", "kiwi" };
//    size_t strSize = sizeof(strArray) / sizeof(strArray[0]);
//    std::cout << "Smallest in strArray : " << GetSmallest(strArray, strSize) << std::endl;
//
//    std::vector<int> test1 = { 0, 2, 3, 4, 9, 7 ,2 };
//    std::cout << "Size of vector 1 : " << GetSizeOfVector(test1, 8) << std::endl;    
//    
//    std::vector<float> test2 = { 8.5f, 23.5f};
//    std::cout << "Size of vector 2 : " << GetSizeOfVector(test2, 6.2f) << std::endl;    
//    
//    std::vector<std::string> test3 = { "bonjour", "salutmonpote", "dur le réveil"};
//    std::cout << "Size of vector 3 : " << GetSizeOfVector(test3, std::string("je confirme")) << std::endl;
//}