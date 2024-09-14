#include <stdio.h>
int main()
{ 
    // declaring variable
    int choice;
    float radius,length1,length2,breadth,circle_area,rectangle_area,triangle_area;

    
    // asking for input
    printf("press 1 to calculate area of circle \n");
    printf("press 2 to calculate area of rectangle \n");
    printf("press 3 to calculate area of triangle \n");
    printf("press 4 to exit \n");
    scanf("%d",&choice);
    
    switch(choice)
{
    // working for circle
    case 1:
            printf("enter the radius of circle: ");
            scanf("%f",&radius) ;
            circle_area = (radius*radius*3.142);
            printf("area of circle is %f: ", circle_area);
            break;
   
    // working for rectangle
    case 2:
           printf("enter length of first side:  ");
           scanf("%f",&length1) ;
           printf("enter length of second side:  ");
           scanf("%f",&length2) ;
           rectangle_area= length1*length2;
           printf("area of rectangle is %f", rectangle_area);
           break;
    
    // working for triangle       
    case 3:
           printf("enter length of triangle:  ");
           scanf("%f",&length1) ;
           printf("enter breadht of triangle:  ");
           scanf("%f",&breadth) ;
           triangle_area= (0.5*length1*breadth);
           printf("area of triangle is %f", triangle_area);
           break;
    
    // working for exit      
    case 4:
           printf("Thankyou for visiting");
           break;

   default:  
          printf("wrong input");
          break;

} // end switch

return 0;

} // end main