#include <stdio.h>
void main()
{
float length, breadth;
printf("\nEnter length and breadth:");
scanf("%f%f", &length, &breadth);
printf("\nPerimeter of rectangle= %f", 2 * (length + breadth));
printf("\nArea of rectangle= %f", length * breadth);
}