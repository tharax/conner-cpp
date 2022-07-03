#include <iostream>
#include <string>
#include "greet.cpp"


int main()
{
    std::string name;
    std::cin>>name;
    std::string greeting;
    greeting = Greet(NZ,name);
    std::cout<<greeting<<std::endl;
}

