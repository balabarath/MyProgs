#include<stdio.h>
#include<list>
#include<conio.h>
//#define end scanf("%d")
using namespace std;

 list<int> l;
 list<int>::iterator i;
void print()
{
   for(i=l.begin();i!=l.end();i++)
    printf("%d\t",*i);  
    printf("\n\n");
}
int main()
{
    int n,no,num,j;
   
    scanf("%d",&n);
    while(n--)
    {
     scanf("%d",&no);
     l.push_back(no);
    }
    print();
    
    //l.insert(i=l.begin(),7,3);
    //print();
    
    /*l.sort();
    print();*/
    
    l.unique();
    print();
    
    printf("enter the element to delete=");
    scanf("%d",&no);
    
    l.remove(no);
    print();
    
    //i=l.begin();
    
    
    getch();
    return 0;
}
