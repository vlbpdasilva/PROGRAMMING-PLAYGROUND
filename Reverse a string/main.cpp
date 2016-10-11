/**
*	@file : main.cpp
*	@author :  Victor Luiz Berger da Silva
*	@date :  
*/

#include <iostream>
#include <string>

void solution(std::string S);

int main()
{
    std::string S;
    
    do
    {
        std::cout<< "\nEnter desired string to reverse, or enter 0 to terminate: "; 
        std::getline(std::cin,S);
        if(S != "0") solution(S);   
        std::cout << std::endl;
    }
    while(S != "0");
        
    return 0;
}

void solution(std::string S) 
{
    int size = S.size();
    std::cout << "Reversed string:  ";
    for(int i = 0; i < size; i++)
        std::cout << S.at(size - 1 - i);
}
