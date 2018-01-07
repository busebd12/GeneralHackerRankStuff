#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;

    string b;

    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    string concatenated=a+b;
    
    cout << concatenated << endl;
    
    swap(a[0], b[0]);
    
    cout << a << " " << b << endl;
}