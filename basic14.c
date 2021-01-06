#include<stdio.h>  
#include<string.h>  
  
int main(){  
    int i,j,a,b;  
    char input[1001];  
    while(scanf("%s" ,input)!=EOF){  
         int ans=0;  
         if(strlen(input)%2 == 0){  
           for(i=0 ,j=strlen(input)-1; j>i; i++,j--){  
               if(input[i] != input[j]){  
                   ans=1;  
               }  
           }  
         }  
         else{  
             for(a=0 ,b=strlen(input)-1;a!=b;a++,b--){  
                 if(input[a] != input[b]){  
                     ans=1;  
               }   
             }  
         }  
          if(ans==0){  
               printf("YES\n");  
           }  
           else{  
               printf("NO\n");  
           }  
           
    }  
}  