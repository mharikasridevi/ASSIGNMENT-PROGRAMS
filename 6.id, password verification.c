#include <stdio.h>
void main() 
{
int id, password;
printf("Enter the id and password:");
scanf("%d%d", &id, &password);
  if (id != 101)
        printf("User is not found");
    else if (password == 4321)
        printf("Login is successful");
  else
        printf("Incorrect password entered");
}