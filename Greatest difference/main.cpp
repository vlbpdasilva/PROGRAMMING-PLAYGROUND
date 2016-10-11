/**
*	@file : main.cpp
*	@author :  Victor Luiz Berger da Silva
*	@date :  
*/

#include <iostream>
#include <vector>
#include <algorithm>

void solution(std::vector<int> &vec);
void smarter(std::vector<int>&vec);

int main()
{
    std::vector<int> vec;
    vec.push_back(8);
    vec.push_back(1);
    vec.push_back(-5);
    vec.push_back(20);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(7);
    
    solution(vec);   
    smarter(vec);
        
    return 0;
}


void solution (std::vector<int> &vec)        //// O(n) time complexity
{

    int max = vec.at(0);
    int min = max;
    
    std::cout << "Array: ";
    
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec.at(i) << " ";
        if(vec.at(i) > max)  max = vec.at(i);
        else if (vec.at(i) < min) min = vec.at(i); 
    }
    
    std::cout << std::endl << "Greatest difference: " <<  max-min << std::endl;
}

void smarter(std::vector<int> &vec)       /// BETTER SOLUTION, USES SORT. 
{                                         /// CONSTRAINED TO TIME COMPLEXITY OF SORT ALG
    std::sort(vec.begin(), vec.end());    
    std::cout <<  "Greatest difference: " <<  vec.back() - vec.front() << std::endl;
}
