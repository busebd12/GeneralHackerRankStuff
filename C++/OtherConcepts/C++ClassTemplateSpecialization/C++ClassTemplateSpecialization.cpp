#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

template <class T>
struct Traits
{
    static string name(int i)
    {
        switch(static_cast<T>(i))
        {
            case static_cast<T>(0):
                return (typeid(T)==typeid(Color)) ? "red" : "apple";
                
            case static_cast<T>(1):
                return (typeid(T)==typeid(Color)) ? "green" : "orange";
                
            case static_cast<T>(2):
                return (typeid(T)==typeid(Color)) ? "orange" : "pear";
            
            default:
                return "unknown";
        }
    }
};