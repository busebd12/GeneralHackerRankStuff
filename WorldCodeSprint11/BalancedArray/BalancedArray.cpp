#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getMinimum(vector<int> Input)
{
    int middle=(Input.size()-1)/2;
    
    int leftHandSum{};
    
    int rightHandSum{};
    
    for(int start=middle;start>=0;--start)
    {
        leftHandSum+=Input[start];
    }
    
    for(int current=middle+1;current<Input.size();++current)
    {
        rightHandSum+=Input[current];
    }
    
    if(leftHandSum==rightHandSum)
    {
        return 0;
    }
    else
    {
        return abs(rightHandSum-leftHandSum);
    }
}

int main()
{
    int numberOfElements;
    
    cin >> numberOfElements;
    
    vector<int> input;
    
    for(int count=0;count<numberOfElements;++count)
    {
        int element;
        
        cin >> element;
        
        input.emplace_back(element);
    }
    
    cout << getMinimum(input) << endl; 
}