#include <stdio.h>  
int main()  
{  
    char option;  
    int a, b;   
    float result;  
    printf (" Choose an Operator (/) (*) (-) (+)\n ");  
    scanf ("%c", &option);
    if (option == '/' )  
    {  
        printf (" Selected Operator: Division");  
    }  
    else if (option == '*')  
    {  
        printf (" Selected Operator: Multiplication");  
     }  
       
    else if (option == '-')  
    {  
        printf (" Selected Operator: Subtraction");  
     }  
        else if (option == '+')  
    {  
        printf (" Selected Operator: Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &a);
    printf (" Enter the second number: ");  
    scanf (" %d", &b); 
      
    switch(option)  
    {  
        case '+':  
            result = a + b;
            printf (" Addition of %d and %d is: %.2f", a, b, result);  
            break;  
          
        case '-':  
            result = a - b; 
            printf (" Subtraction of %d and %d is: %.2f", a, b, result);  
            break;  
              
        case '*':  
            result = a * b;
            printf (" Multiplication of %d and %d is: %.2f", a, b, result);  
            break;            
          
        case '/':  
            if (b == 0)   
            {  
                printf (" \n Cannot divide by zero");  
                scanf ("%d", &b);        
                }  
            result = a / b;  
            printf (" Division of %d and %d is: %.2f", a, b, result);  
            break;  
        default: 
            printf (" Error, Please try again ");               
    }  
    return 0;  
}  