#include<stdio.h>
int main()
{
    int t, i, j, n, k, ascii = 97, val[26], maxi, maxval;
    char a[50000];
    scanf("%d", &t);
    while(t--)
    {
       scanf("%d %d", &n, &k);
       scanf("%s",a);
       for(i=0; i<26; i++)
           val[i] = 0;
       for(i=0; i<n; i++)
       {
           val[a[i]-97]++;
       }
       
       for(j=0; j<26; j++)
       {
          maxval = -1;
          maxi = -1;
          for(i=0; i<26; i++)
          {
            if(val[i] <= k)
            {
               val[i] = -1;
            }
            else
            {
                if(val[i] > maxval)
                {
//                    printf("%d %c %d\n", i, (i+ascii), val[i]);
                    maxi = i;
                    maxval = val[i];
                }
            }
          }
          if(maxval > -1)
                    printf("%c", (maxi+ascii));
          val[maxi] = -1;
       }
       printf("\n");
    }
//    scanf("%d");
    return 0;
}
