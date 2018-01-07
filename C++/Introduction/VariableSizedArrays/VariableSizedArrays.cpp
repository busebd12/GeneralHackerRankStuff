#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{   
    //number of arrays
    int n;
    
    //number of queries
    int q;
    
    cin >> n >> q;
    
    //allocate enough space so that vector of vectors can hold n arrays
    vector<vector<int>> arrays(n);
    
    //insert the data into the arrays
    for(int i=0;i<n;++i)
    {
        //number of elements in each array
        int k;
        
        cin >> k;
        
        for(int j=0;j<k;++j)
        {
            int element;
            
            cin >> element;
            
            arrays[i].emplace_back(element);
        }
    }
    
    //now, for the queries
    for(int i=0;i<q;++i)
    {
        int first;
        
        int second;
        
        cin >> first >> second;
        
        cout << arrays[first][second] << endl;
    }
}