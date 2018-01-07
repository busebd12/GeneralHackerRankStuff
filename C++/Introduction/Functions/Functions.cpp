#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    return max(max(a, b), max(c, d));
}