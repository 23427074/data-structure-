#include <stdio.h>    
#include <stdlib.h>    
    
    
int main()    
{    
    int result[26]= {0};   
    char a[200];    
    int i,temp;    
    while(scanf("%s",a)!=EOF)  
    {  
        for(i=0; a[i]!= '\0'; i++)     
        {    
            if(a[i]>=65 && a[i]<=90)   
            {    
                temp = a[i]-65;    
                result[temp]++;  
            }    
            if(a[i]>=97 && a[i]<=122)    
            {    
                temp = a[i]-97;  
                result[temp]++;    
            }    
        }  
    }  
    for(i=0; i<26; i++)    
    {    
        if(i==0)  
        {   
            printf("%d",result[i]);    
        }  
        else    
        {  
            printf(" %d",result[i]);   
        }  
    }    
    printf("\n");  
}  