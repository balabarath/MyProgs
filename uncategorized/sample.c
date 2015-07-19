#include<stdio.h>
#include<conio.h>
main()
{
      //clrscr();
      float f,c;
      int i;
      
    for(;;)c{
      printf("OPTIONS \n1.f to c\n2.c to f\n" ); 
      scanf("%d",&i);
      switch(i) 
      {
                case 1:
                     printf("Enter f:");
                     scanf("%f",&f);
                     c=5*(f-32)/9;
                     printf("The value of c is  %f",c);
                     break;
                case 2:
                     printf("Enter c:");
                     scanf("%f",&c);
                     f=9*c/5+32;
                     printf("The value of f is  %f",f);
                     break;

                     
      }  
      printf("\ncontinue y/n \n");
      if(getche()=='n'||getche()=='N')
      break;
      }
      
      getch();
}            
