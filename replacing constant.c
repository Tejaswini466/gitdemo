// /30
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void  main()                                                      
{                                                           
       char s[20];
	   int i;
	   printf("Enter a string: ");
	   gets(s);
       for(i=0; i<strlen(s) ; i++ )                    
       { 
	    if(isalpha(s[i])) 
		{
		 if(s[i]=='A'||s[i]=='Z'||s[i]=='a'||s[i]=='z')                             
			continue; 
		 s[i]=s[i]+1;
		}
       }  
	   printf("%s",s);                                                     
}   