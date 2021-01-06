#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  
  
int main()  
{  
    char article[8192],strmax[100],str[100];  
    int smallword[60]={0},bigword[60]={0},k,y,h,c,a,max,len;  
    int word=0;  
    while(fgets(article,8192,stdin)!=NULL)  
    {  
        len=strlen(article);      
        for(y=0;y<len;y++)  
        {  
          if(article[y]>=65&&article[y]<=90)  
          {  
              bigword[article[y]-65]++;  
          }  
          else if(article[y]>=97&&article[y]<=122)  
          {  
              smallword[article[y]-97]++;  
          }  
        }  
        for(h=0;h<len;h++)  
        {  
        if(isspace(article[h]))  
        {  
            c=0;  
            if(a>max)  
            {  
                max=a;  
                strcpy(strmax,str);  
            }  
            else if(a==max&&strcmp(strmax,str)>0)  
            {  
                strcpy(strmax,str);  
            }  
            a=0;  
        }  
        else if(c==0)  
        {  
            word++;  
            str[a]=article[h];  
            a++;  
            c=1;  
        }  
        else{  
            str[a]=article[h];  
            a++;  
        }              
        }  
    }  
    printf("%d\n" ,word);  
    for(k=0;k<26;k++)  
    {  
        if(bigword[k]!=0)  
        smallword[k]++;  
    }  
    for(int l=0;l<26;l++)  
    {  
        if(smallword[l]!=0)  
        printf("%c : %d\n" ,l+97,smallword[l]);  
    }  
  
}  