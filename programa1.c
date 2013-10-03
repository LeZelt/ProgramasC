#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int a,b,c,d,e,f;
int x,y;

main ()

{
     printf ("Ingrese valor de a:");
     scanf ("%i",&a);
     printf ("Ingrese valor de b:");
     scanf ("%i",&b);
     printf ("Ingrese valor de c:");
     scanf ("%i",&c);
     printf ("Ingrese valor de d:");
     scanf ("%i",&d);
     printf ("Ingrese valor de e:");
     scanf ("%i",&e);
     printf ("Ingrese valor de f:");
     scanf ("%i",&f);
     x=(c*e)-(b*f)/(a*e)-(b*d);
     y=(a*f)-(c*d)/(a*e)-(b*d);
     printf ("El valor de x es: %i", x);
     printf ("El valor de y es: %i", y);
     
     getch ();
     return 0;
     
}
