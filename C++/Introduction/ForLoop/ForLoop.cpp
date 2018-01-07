#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int start;
    
    int stop;
    
    cin >> start >> stop;
    
    vector<string> numbers={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i=start;i<=stop;++i)
    {
        if(i <= 9)
        {
            cout << numbers[i-1] << endl;
        }
        else if(i > 9 && i%2==0)
        {
            cout << "even" << endl;
        }
        else if(i > 9 && i%2==1)
        {
            cout << "odd" << endl;
        }
    }
}