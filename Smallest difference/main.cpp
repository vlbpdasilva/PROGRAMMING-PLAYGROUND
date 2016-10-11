/**
*	@file : main.cpp
*	@author :  Victor Luiz Berger da Silva
*	@date :  
*/

#include <iostream>
#include <vector>
#include <algorithm>

void solution(std::vector<int> &vec);

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(60);
    
    std::cout << "\nArray: ";
    for(int i = 0; i < vec.size(); i++)
        std::cout << vec.at(i) << " ";
    
    solution(vec);   
        
    return 0;
}


void solution (std::vector<int> &vec)        //// O(n) time complexity
{

    std::sort(vec.begin(), vec.end());
    
    int diff = vec.front();
    int temp;
    int temp2;
    
    for(int i = 0; i < vec.size() - 1; i++)
    {
        temp = vec.at(i+1) - vec.at(i);
        temp2 = -temp;
        if(temp < diff && temp >= 0) diff= temp; 
        else if(temp2 < diff && temp2>=0) diff = temp2;
    }
    
    std::cout << std::endl << "Smallest difference: " <<  diff << std::endl << std::endl;
}
