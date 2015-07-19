%{
    #include<ctype.h>
%}
%token DIGIT
%%
line:
     term{$$=$1;}
     |exp'+'term{$$=$1+$2;}
     |exp'-'term{$$=$1-$2;}
     ;
term:
     factor{$$=$1;}
     |exp'*'factor{$$=$1*$3;}
     |exp'/'factor{$$=$1/$3;}
     ;
factor:
       '('exp')' {$$=$2}
       |DIGIT
       ;
yylex()
{
       int c;
       c=getchar();
       if(isdigit(c))
       {
                     yyval=c-'0';
                     return DIGIT;
       }
       return c;
}
