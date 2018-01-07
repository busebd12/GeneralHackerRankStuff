#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int first;
    
    long second;
    
    char third;
    
    float fourth;
    
    double fifth;
    
    cin >> first >> second >> third >> fourth >> fifth;
    
    cout << first << endl;
    
    cout << second << endl;
    
    cout << third << endl;
    
    cout << fixed << setprecision(3) << fourth << endl;
    
    cout << fixed << setprecision(9) << fifth << endl;
}
