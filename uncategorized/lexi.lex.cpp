%{
}%
identi [_a-zA-Z][_a-zA-Z0-9]*
%%
#.* {printf("\n%s",is a preprocessor,yytext);}
void|int|char|goto|return|do|while|for|switch|case|break {printf("\n %s is the keyword",yytext);}
{identifier}\( {printf("\n%s is the function",yytext);} 
\; {printf("\n%s is the delimiter",yytext);}
\{ {printf("\n%s block begins",yytext);}
/{ {printf("\n%s block ends",yytext);}
\".*"\ {printf("\n%s is the string",,yytext);}
[0-9]+ {printf("\n%s is the number",,yytext);}
\+|\-|\*|\/|\% {printf("\n%s is the operator",,yytext);}
= {printf("\n%s is the assignment Opertor",,yytext);}
\<=|>=|==|!= {printf("\n%s is the relational Operator",,yytext);}
%%
main()
{
      FILE *f;
      f=fopen("in.c","r");
      yyin=f;
      yylex();
}
