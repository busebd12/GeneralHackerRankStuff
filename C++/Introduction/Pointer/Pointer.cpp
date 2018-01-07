#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void update(int *a,int *b)
{
    int sum=(*a) + (*b);
    
    int absDifference=abs((*a)-(*b));
    
    *a=sum;
    
    *b=absDifference;
}