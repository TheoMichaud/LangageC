#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int main()
{
printf("PROGRAMME PI \n\n\n");


double cpt1 , cpt2 ;
double pi;
double a=1.00;
double b=1.00;

for ( cpt1 = 4.00 ; cpt1 <=2400 ; cpt1+=2 )
{
a=a*pow(cpt1 , 2);
}
for ( cpt2 = 3.00 ; cpt2 <= 2401 ; cpt2+=2 )
{
b=b*pow(cpt2 , 2);
}

pi=2*(a/b);

printf("La valeur de pi est: %f\n" , pi);



return 0;
}
