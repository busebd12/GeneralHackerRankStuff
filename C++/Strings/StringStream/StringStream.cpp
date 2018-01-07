#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result;
    
    stringstream stream(str);
    
    int number;
    
    char ch;
    
    while(stream >> number)
    {
        result.emplace_back(number);
        
        stream >> ch;
    }
    
    return result;
}