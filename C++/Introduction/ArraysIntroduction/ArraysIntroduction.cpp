#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> array;
    
    int N;
    
    cin >> N;
    
    for(int count=0;count<N;++count)
    {
        int number;
        
        cin >> number;
        
        array.emplace_back(number);
    }
    
    for(auto itr=rbegin(array);itr!=rend(array);++itr)
    {
        cout << *itr << " ";
    }
    
    cout << endl;
}