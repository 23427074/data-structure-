#include <stdio.h>  
  
int main()  
{  
     int a,b;   
     int ans=1;   
     int i=2;   
     scanf("%d %d",&a,&b);   
     if( a==1 || b==1 ) printf("1");  
     if( a==0 || b==0 ) printf("0");  
     else if( a>=i && b>=i )  
     {  
          while( a>=i && b>=i )   
          {   
               while( a%i==0 && b%i==0 )   
               {   
                    ans = ans * i;   
                    a = a/i;   
                    b = b/i;   
               }   
               i++;   
          }   
          printf("%d\n",ans);   
     }  
}  