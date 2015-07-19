#include<stdio.h>
int main()
{
    char in[1000];
    short int flag=0,prev,temp;
    int k,c=0;
    long i;
    float num,tot,j=0,f;
    gets(in);
    //printf("%d",flag);
    for(i=0;in[i]!='\0';i++)
    {
      //printf("%c\n",in[i]);
      switch(in[i])
      {
         case '0':
              temp=0;
              break;
         case '1':
              temp=1;
              break;
         case '2':
              temp=2;
              break;
         case '3':
              temp=3;
              break;
         case '4':
              temp=4;
              break;
         case '5':
              temp=5;
              break;
         case '6':
              temp=6;
              break;
         case '7':
              temp=7;
              break;
         case '8':
              temp=8;
              break;
         case '9':
              temp=9;
              break;
         case '.':
              temp=-1;
              flag=1;
              break;
         case ' ':
              temp=0;
              flag=2;
              break;
         case '\\':
              temp=0;
              flag=2;
              break;
         case 'n':
              temp=0;
              flag=2;
              break;
             
      }
      //printf("\t\t%d\n",flag);
      if(flag==0)
      {
          
          num=num*10+temp;
          prev=flag;
          //printf("%f\n",num);       
      }
      else if(flag==1)
      {   
          if(temp!=-1)
          {
         
          c++;
          f=(float)temp;
          if(temp!=0)
          for(k=0;k<c;k++)
          f/=10;
          num+=f;
          prev=flag;
          //printf("%f",f);
          }
      }
      else if(prev!=2)
      {
        //  printf("%f\n",num); 
          tot+=num;
          j++;
          num=0; 
          c=0;
          flag=0;
      } 
      if(i==strlen(in)-1)
      {
          tot+=num;
          j++;
          num=0; 
          c=0;
          flag=0;

      }
      //printf("%d %d\n",temp,flag);     
    }
    printf("%.2f",tot);
    scanf("%d");
    return 0;
    
}
