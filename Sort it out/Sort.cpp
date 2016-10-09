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
    int size = vec.size();
    std::cout << "--- MERGE SORT ---" << std::endl;

    mergeHelper(vec);
	
    std::cout << "Sorted list: " << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << vec.at(i) << " ";
}

void Sort::mergeHelper(std::vector<int> &vec)
{
    if(vec.size() == 1) return;
    
    int middle = (vec.size() - 1) / 2;
    std::vector<int> left;
    std::vector<int> right;
    for(int a = 0; a <= middle; a++)
        left.push_back(vec.at(a));
    for(int b = middle+1; b <= vec.size() - 1; b++)
        right.push_back(vec.at(b));
    
    mergeHelper(left);
    mergeHelper(right);
    
    merge_vectors(vec, left, right);
    
}

void Sort::merge_vectors(std::vector<int> &vec, std::vector<int> &vec1, std::vector<int> &vec2)
{         
    std::vector<int> result; 
    
    while(vec1.size() > 0 && vec2.size() > 0)
    {
        if(vec1.front() > vec2.front())
        {
            result.push_back(vec2.front());
            vec2.erase(vec2.begin());
        }
        else
        {
            result.push_back(vec1.front());
            vec1.erase(vec1.begin());
        }
    }
        
    while(vec1.size() > 0)
    {
        result.push_back(vec1.front());
        vec1.erase(vec1.begin());
    }
    
    while(vec2.size() > 0)
    {
        result.push_back(vec2.front());
        vec2.erase(vec2.begin());
    }
    
    vec = result;
    
    result.clear();
}
