main()
{
      int i=-5,j=-2;
      junk(i,&j);
      printf("i=%d j=%d",i,j);
      getch();
      }
      junk(int i,int *j)
      {
               i=i*i;
               *j=*j**j;
               }
