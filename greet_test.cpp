#include <iostream>
#include <string>
#include "greet.cpp"




int TestNZGreeting()
{
    std::string Actual;
    Actual = Greet(NZ,"Pineapple");
    
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
int TestFrenchGreeting()
{
    std::string Actual;
    Actual = Greet(France,"Pineapple");
    
    std::string Expected;
    Expected = "Bon jour Pineapple";

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
int TestGermanGreeting()
{
    std::string Actual;
    Actual = Greet(Germany,"Pineapple");
    
    std::string Expected;
    Expected = "Gutentag Pineapple";

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
int main() 
{
    TestNZGreeting();
    TestFrenchGreeting();
    TestGermanGreeting();
    

}