/**
*	@file : main.cpp
*	@author :  Victor Luiz Berger da Silva
*	@date :  
*/

#include <iostream>
#include <string>
#include <cmath>

int solution(std::string S);

int main()
{
    std::string a = "12";
    std::string b = "0"; 
    std::string c = "1055";
    std::string d = "-200";
    
    std::cout << solution(a) << std::endl;
    std::cout << solution(b) << std::endl;
    std::cout << solution(c) << std::endl;
    std::cout << solution(d) << std::endl;
}


int solution(std::string S) 
{
    bool isNeg = 0;
    int total = 0;
    int length = S.length();
    int counter = length;

    
    if(S.at(0) == '-') isNeg = 1;
    
    for(int i = 0; i < length; i++)
    {
       if(S.at(i) != '-')
            total += (S.at(i) - '0') * pow(10, counter-1);
       counter--;
    }
    
    if(isNeg) total = -total;
    
    return total;    
}
