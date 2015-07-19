#include <iostream>
using namespace std;

int main() 
{
	int i,T;
	char str[1001], shiftedStr[1001];
	cin>>T;
	while(T--)
	{
	   cin>>str;
	   int len = 0, num1, num2;
	   shiftedStr[0] = str[0];
	   for(i = 1; str[i] != '\0'; i++)
	   {
           num1 = str[i] - '0';
           num2 = str[i-1] - '0';
           shiftedStr[i] = (num1^num2) + '0';
	   }
	   shiftedStr[i] = '\0';
	   cout<<shiftedStr<<endl;
	}
	return 0;
}
