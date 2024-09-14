#include <stdio.h>

int main()
{
    // declaring variables
    int actual_price;
    int saved_amount;
    int amount_after;
    
    // taking input
    printf("enter the actual price: ");
    scanf("%d",&actual_price);
    
    // working for 5% discount
    if(actual_price>500 && actual_price<2000){
       saved_amount = (actual_price)*(5/100);
          printf("saved amount: %d ", saved_amount);
    } // end if
    
    // working for 10% discount
    else if(actual_price>=2000 && actual_price<4000){
        saved_amount = (actual_price*10/100);
        printf("saved amount: %d ", saved_amount);
        
    }
    
    // working for 20% discount
     else if(actual_price>=4000 && actual_price<6000){
        saved_amount = (actual_price*20/100);
        printf("saved amount: %d ", saved_amount);
     } // end else if
     
     // working for 35% discount
     else if(actual_price>=6000){
        saved_amount = (actual_price*35/100);
        printf("saved amount: %d ", saved_amount);
         
     }// end else if
     
     // working for no discount
     else{
         printf("discount not available");
         
     } // end else
     
      // calculating amount after discount
     amount_after= actual_price-saved_amount;
     printf(" \n amount after your discount is: %d ",amount_after);
         
    
      
return 0;
     
      
} // end main