#include "Sort.h"
#include <vector>

#include <iostream>

Sort::Sort()
{
}

void Sort::quick(std::vector<int> &vec)
{
    int size = vec.size();
    std::cout << "--- QUICK SORT ---" << std::endl;

    quickHelper(vec, 0, size-1);
	
    std::cout << "Sorted list: " << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << vec.at(i) << " ";

}

void Sort::quickHelper(vector<int> &vec, int left, int right)
{

    int temp;
    int __left = left;
    int __right = right;
    int pivot = vec.at((left + right) / 2);
 
    while (__left <= __right) 
    {
        while (vec.at(__left) < pivot)
            __left++;
		 
        while (vec.at(__right) > pivot)
            __right--;
        
        if (__left <= __right) 
        {
            temp = vec.at(__left);
            vec.at(__left) = vec.at(__right);
            vec.at(__right) = temp; 
            __left++;
            __right--;
        }
    }
	   
    if (left < __right)
            quickHelper(vec, left, __right);
    if (__left < right)
            quickHelper(vec, __left, right);
}

void Sort::merge(std::vector<int> &vec)
{
	
}
