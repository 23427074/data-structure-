#include <stdio.h>   
   
int main ()  
{   
    int number[100] = {} ;    
    int amount = 0 ;    
    for ( amount = 0 ; amount < 100 ; amount += 1 )  
    {   
        int test = scanf ( "%d" , &number[amount] ) ;  
        if ( test == EOF )  
        {   
            break ;   
        }    
    }    
       
   
    int seat = amount - 1 ;    
    int element = 0 ;   
    for ( element = 0 ; element < seat ; element += 1 )  
    {   
        int test = number[element] ;   
        number[element] = number[seat] ;   
        number[seat] = test ;   
        seat -= 1 ;  
    }    
       
  
    for ( element = 0 ; element < amount - 1 ; element += 1 )  
    {   
        printf ( "%d " , number[element] ) ;   
    }    
    printf ( "%d\n" , number[ amount - 1 ] ) ;   
}  