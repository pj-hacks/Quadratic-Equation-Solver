#include <stdio.h>
#include<math.h>


int main()
{
	int co_efficient_of_x2;  //for the coefficient of x^2
    char a;  //for storing the sign of x^2
    int co_efficient_of_x;  //for the coefficient of x
    char b;  //  for storing the sign of x
    int last_digit;  //the last digit
    char c;  //foe storing the sign of the last digit
    int discriminant; // foe storing the discriminant od the equation
    int discriminant_1;
    int discriminant_2;
    int full_discriminant;
    int operation;  // for storing -b + discriminant
    int operarion_2;  // for storing -b - discriminant
    float divide_discriminant_1;  //for dividing operation_1 by 2 * co efficient of x^2
    float divide_discriminant_2;  //for dividing operation_2 by 2 * co efficient of x^2
    float root_1; // for storing divide operation_1
    float root_2; // for storing divide operation_2
    
  
  
  printf("This formular calculates the quadratic equation of the form [X^2 +- X +- 2].\n\nwhere a = x^2, b = +-X, and c =  +-4 ,\n\nplease you have to specifer the sign before the number like (+4) or (-4)\n");

    printf("\nwhat is the value of a:");
    scanf("%d",&co_efficient_of_x2);

    printf("What is the second number:");
    scanf("%d",&co_efficient_of_x);

    printf("What  is the third number:");
    scanf("%d",&last_digit);

    //the formular for quadratic equatic is
    // X = -b +- squareroot(b^2 - 4ac) divide by 2a
    // so here we will be calculating the squareroot aspect
    
  

    discriminant = pow(co_efficient_of_x, 2) - 4 * co_efficient_of_x2 * last_digit; //- 4 * co_efficient_of_x2 * last_digit;
    if (discriminant < 0){
    printf("no real root");
    }
    
    else if (discriminant > 0){
    printf("The equation has distinct root\n");
    
    discriminant_1 = - co_efficient_of_x + sqrt(discriminant);
    discriminant_2 = - co_efficient_of_x - sqrt(discriminant);
    
     operation = 2 * co_efficient_of_x2;
    
    divide_discriminant_1 = (float) discriminant_1 / (float)operation;
    divide_discriminant_2 = (float)discriminant_2 / (float)operation;
    
    
    }
  

    printf("X equal to %f or %f",divide_discriminant_1,divide_discriminant_2);
  
}
