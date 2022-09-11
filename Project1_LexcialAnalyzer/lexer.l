%option noyywrap

%{
#include <stdio.h>
#include <string.h>

#define YY_DECL int yylex()

int words = 0;
int chars = 0;
int lines = 0;

%}

letter      [a-zA-Z]
digit       [0-9]
quote		["]
STRING      {quote}({letter})*{quote}
ID          {letter}({letter}|{digit})*
delim       [ \t\n]
NUMBER         {digit}+(\.{digit}+)?(E[+\-]?(digit)+)?
ws          {delim}+

%%
"/*"    				{
							int c;
							while((c = input()) != 0) {
								if(c == '*') {
									if((c = input()) == '/')
										break;
									else
										unput(c);
								}
							}
						}
						
"if"	{words++; chars += strlen(yytext);
		 printf("%s : IF\n", yytext);
		}	
		
"else"	{words++; chars += strlen(yytext);
		 printf("%s : ELSE\n", yytext);
		}
		
"while"	{words++; chars += strlen(yytext);
		 printf("%s : WHILE\n", yytext);
		}

"return"	{words++; chars += strlen(yytext);
		 printf("%s : RETURN\n", yytext);
		}

"int"	{words++; chars += strlen(yytext);
		 printf("%s : TYPE\n", yytext);
		}

"char"	{words++; chars += strlen(yytext);
		 printf("%s : TYPE\n", yytext);
		}
		
"write"	{words++; 
		 chars += strlen(yytext);
		 printf("%s : KEYWORD\n", yytext);
		}

"string"	{words++; chars += strlen(yytext);
		 printf("%s : TYPE\n", yytext);
		}
		
{ID}	{words++; chars += strlen(yytext);
		 printf("%s : IDENTIFIER\n",yytext);
		}
			
{NUMBER}	{words++; chars += strlen(yytext);
			  printf("%s : NUMBER\n",yytext);
			}


{STRING}	{words++; chars += strlen(yytext);
		 printf("%s : STRING\n",yytext);
		}
		
"print"	{words++; 
		 chars += strlen(yytext);
		 printf("%s : KEYWORD\n", yytext);
		}
			
";"		{chars++;
		 printf("%s : SEMICOLON\n", yytext);
		}
		
","		{chars++;
		 printf("%s : COMMA\n", yytext);
		}
		
"="		{chars++;
		 printf("%s : EQ\n", yytext);
		}

"||"	{chars++;
		 printf("%s : OR\n", yytext);
		}

"<"	{chars++;
		 printf("%s : LSS\n", yytext);
		}

">"	{chars++;
		 printf("%s : GTR\n", yytext);
		}				

"<="	{chars++;
		 printf("%s : LEQ\n", yytext);
		}

">="	{chars++;
		 printf("%s : GEQ\n", yytext);
		}

"("		{words++; chars += strlen(yytext);
		 printf("%s : LPAREN\n", yytext);
		}

")"		{words++; chars += strlen(yytext);
		 printf("%s : RPAREN\n", yytext);
		}	

"{"		{words++; chars += strlen(yytext);
		 printf("%s : LBRACE\n", yytext);
		}		

"}"		{words++; chars += strlen(yytext);
		 printf("%s : RBRACE\n", yytext);
		}	

"["		{words++; chars += strlen(yytext);
		 printf("%s : LBRACKET\n", yytext);
		}	

"]"		{words++; chars += strlen(yytext);
		 printf("%s : RBRACKET\n", yytext);
		}	
		
"+"		{words++; chars += strlen(yytext);
		 printf("%s : ADD\n", yytext);
		}		

"-"		{words++; chars += strlen(yytext);
		 printf("%s : SUB\n", yytext);
		}	

"*"		{words++; chars += strlen(yytext);
		 printf("%s : MULTIPLY\n", yytext);
		}	

"/"		{words++; chars += strlen(yytext);
		 printf("%s : DIV\n", yytext);
		}				

		

\n		{lines++; chars=0;}
[ \t]	{chars++;}
.		{chars++;
         printf("%s : Unrecognized symbol at line %d char %d\n", yytext,lines,chars);
		}
		


%%
int main(int argc, char**argv)
{
	#ifdef YYDEBUG
		yydebug = 1;
	#endif

	printf("Compiler started. \n\n");

	if (argc > 1){
	  if(!(yyin = fopen(argv[1], "r")))
          {
		perror(argv[1]);
		return(1);
	  }
	}
	yylex();
}