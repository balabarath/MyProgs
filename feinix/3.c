#include <stdio.h>
int k[100];
void dutchFlag(int n)
{
    if(k && n)
    {
        int redIndex=0;
        int whiteIndex=0;
        int blueIndex=n-1;

        while(whiteIndex <= blueIndex)
        {
            printf("asa\n1");
            if(k[whiteIndex] == 0)
            {
                k[whiteIndex] = 1;
                k[redIndex] = 0;
                redIndex++;
                whiteIndex++;

            }
            else if(k[whiteIndex]==2)
            {
                k[whiteIndex] = k[blueIndex];
                k[blueIndex] = 2;
                blueIndex--;
            }
            else if(k[whiteIndex]==1)
            {
                whiteIndex ++;
            }
            else
                return;
        }
    }
}


int main()
{
    int n,i;
    scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&k[i]);
    dutchFlag(n);

    for(i=0;i<n;++i)
    {
        printf("%d,",k[i]);
    }
    scanf("%d");
}
