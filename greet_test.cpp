#include <iostream>
#include <string>
#include "greet.cpp"


int main() 
{
    std::string Actual;
    Actual = Greet("Pineapple");
    
    std::string Expected;
    Expected = "Hello Pineapple";

    if(Actual == Expected)
    {
        std::cout<<"test passed"<<std::endl;
        return 0;
    }
    else
    {
        std::cout<<"got:"<<Actual<<", expected:"<<Expected<<std::endl;
        return -1;
    }

}