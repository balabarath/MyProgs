#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int noOfTestCases;
    float sideA, sideB, sideC, radius;
    float PI = 3.1415f;
    cin>>noOfTestCases;
    while( noOfTestCases-- )
    {
           cin>>sideA>>sideB>>sideC;
           float sidesTotal = sideA+sideB+sideC;
           float sidesProduct = sideA * sideB * sideC;
           radius = (sidesProduct)/sqrt(sidesTotal * (sidesTotal - (2 * sideA)) *
            (sidesTotal - (2 * sideB)) * (sidesTotal - (2 * sideC)));
           printf("%.4f\n", PI * radius * radius);
    }
    return 0;
    
}
