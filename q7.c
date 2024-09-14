#include <stdio.h>

int main() {
     // declaring variables
    int id,units;
    char name[100];
    float subcharge,amount_charges,Net_amount;
    
    // asking for input
    printf("Enter your customer id : ");
    scanf("%d",&id);
    
    printf("\n Enter the units consumed : ");
    scanf("%d",&units);
    
    printf(" \n Enter your name : ");
    scanf(" %s",&name);
    
    //printing output
    printf("\n Customer Id: %d", id);
    printf(" \n Customer Name: %s", name);
    printf("\n Units Consumed: %d", units);
    
    // checking for units lesser then 200
    if (units>0 && units<199){
        amount_charges= (units*16.20);
        printf("\n total amount is %f: ", amount_charges);
        
    } //end if
    
    // checking for inputs btw 200 and 300
    else if (units>=200 && units<300){
        amount_charges= (units*20.10);
        printf("\n total amount is %f: ", amount_charges);
    } //end else if
    
     // checking for inputs btw 300 and 500
     else if (units>=300 && units<500){
        amount_charges= (units*27.10);
        printf("\n total amount is %f: ", amount_charges);
     } //end else if
     
     //checking for inputs greater then 500
     else{
        amount_charges= (units*35.10);
        printf("\n total amount: %f: ", amount_charges);
     } // end else
     
     // working for subcharge
     if(amount_charges>18000){
         subcharge= (amount_charges*15/100);
          printf("\n the subcharge amount: %f: ", subcharge);
     } // end if
     
     else{
         subcharge=0;
         printf("\n the subcharge amount: %f: ", subcharge);
         
     } //end else
     
     Net_amount=subcharge+amount_charges;
      printf("\n Net Amount Paid by the Customer: %f: ", Net_amount);
     
     
    
    
    
    


    return 0;
} //end main