/**
*	@file : main.cpp
*	@author :  Victor Luiz Berger da Silva
*	@date :  
*/

#include <iostream>
#include <vector>

int solution(std::vector<int> &A);


int main()
{
    
    std::vector<int> v;
    
    v.push_back(-1);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(-6);
    v.push_back(2);
    v.push_back(1);
    
    solution(v);    
        
    return 0;
}


int solution(std::vector<int> &A)          
{
    int sum = 0;
    int leftsum = 0;
    
    for(int i = 0; i < A.size(); i++)    //// O(n) time and space complexity
        sum += A[i];

    
    for(int j = 0; j < A.size(); j++)
    {
        sum -= A[j];
        
        if(leftsum == sum)
            std::cout << j << " ";
        
        leftsum += A[j];        
        
    }
    
    return 0;    
}
