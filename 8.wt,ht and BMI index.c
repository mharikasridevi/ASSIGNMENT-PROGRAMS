#include <stdio.h>
void main() 
{
float Weight,Height,BMI;
printf("Enter the Weight(kg) and Height(m):");
scanf("%f %f", &Weight, &Height);
if (Weight <= 0 || Height <= 0) 
    {
        printf("Wrong input");
    }
else
BMI = Weight / (Height * Height);
printf("\nBMI = %.4f\n", BMI);
    if (BMI < 18.5)
        printf("Underweight");
    else if (BMI < 25)
        printf("Normal");
    else if (BMI < 30)
        printf("Overweight");
    else
        printf("Obese");
}
