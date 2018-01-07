#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> numbers={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int input;
    
    cin >> input;
    
    if(input > 9)
    {
        cout << "Greater than 9" << endl;
    }
    else
    {
        cout << numbers[input-1] << endl;
    }
}