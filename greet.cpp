#include <iostream>
#include <string>

enum Country
{
    NZ,
    France,
    Germany
};

std::string Greet(Country country, std::string name)
{ 
    std::string greeting;
    std::string hello;
    switch(country)
    {
        case NZ:
         hello = "Hello ";
        break;

        case France:
         hello = "Bon jour ";
        break;

        case Germany:
         hello = "Gutentag ";
        break;

        default:
        hello = "Unknown Country";
        break;
    };
    greeting= hello + name;
    return greeting;
}

