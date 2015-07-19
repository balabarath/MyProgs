#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    printf("After a long time");
    queue<int> myQueue;
    int inputNum;
    for(int i = 0;i < 5; i++)
    {
            cin>>inputNum;
            myQueue.push(inputNum);
    }
    printf("I'm going to print nums\n");
    for(int i = 0;i < 5; i++)
    {
            cout<<myQueue.front()<<endl;
            myQueue.pop();
    } 
    scanf("%d");
    return 0;
}
