#include <stdio.h>
#include <math.h>
float Pi = 3.14;
char SorC;
float length, result;
int square()
{
  printf("Please type the length");
    scanf("%f", &length);
    result =  pow(length, 2) ; 
    printf("The area of the square is %.2f", result);
    return 0;
}
int circle()
{
  printf("Please type the radius");
    scanf("%f", &length);
     result = Pi * pow(length, 2); 
    printf("The area of the circle is %.2f", result);
    return 0;}

int main(void) 

{
  printf("Please enter C(circle) OR S(square)\n");
  scanf("%c", &SorC);
  if (SorC == 'c' ||SorC == 'C')
  {
    circle();
    }
  else if (SorC == 's' || SorC == 'S' )
  {
   square();
  }
  else
  {printf("error");}

}