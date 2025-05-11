// 3. Writo a program to convert Celsius (Centigrade degrees temperature to Fahrenheit). 


#include <stdio.h>

int main() {
    
    float c= 38.5 ,f;
    f= (c * 9/5) + 32;

    printf("The temperature in Fahrenheit is %f\n",f);

    return 0;
}