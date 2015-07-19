int function1(int u,int v)
{
int t;
while(v > 0)
{
 if(u > v)
{
      t = u;
      u = v;
      v = t;
}
v = v-u;
}
return u;
}
int main()
{int x,y; 
printf("Enter any two numbers: ");
while(1)
{
 printf("%d",scanf("%d%d",&x,&y));
if(x>0 && y>0)
printf("%d %d %d\n",x,y,function1(x,y));
printf("Enter any two numbers: ");
}
printf("\n");
scanf("%d");
return 0;
}
