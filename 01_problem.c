/*question :
1. Write a C program to calculate aree of a rectangle 
a. Using hard coded inputs. 
b. Using inputs supplied by the user. 
2. Colculate the area of a circte and modify the same program to calculate the volume of a cylinder given its radius and height. 
3. Writo a program to convert Celsius (Centigrade degrees temperature to Fahrenheit). 
4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.*/

// #include <stdio.h>
 
// int main() {
    
//     int leanth = 5;
//     int breadth = 10;

//     printf("Area of rectangle: %d", leanth * breadth);

//     return 0;
// }

#include <stdio.h>

 int main(){
    int leanth , breadth;
   
    printf("Enter leanth ");
    scanf("%d", &leanth); 
    printf("Enter breadth ");
    scanf("%d", &breadth);
    printf("Area of rectangle: %d", leanth * breadth);
    return 0;
}

