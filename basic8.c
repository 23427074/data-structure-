#include<stdio.h>  
  
  
int main(){  
    int i ,num1;  
      
    while(scanf("%d" ,&num1) != EOF){  
        int ans = 0;  
        if(num1 == 1){  
        printf("is_not_prime\n");  
        }  
        else{  
        for(i=num1-1;i>1;i--){  
            if(num1%i==0){  
               ans = 1;  
               break;  
            }  
        }  
        if (ans == 0){  
        printf("YES\n");  
        }  
        else{  
        printf("NO\n");  
        }  
    }  
    }  
}  