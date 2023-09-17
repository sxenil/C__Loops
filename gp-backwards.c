#include<stdio.h>
int main(){

float n,a;
printf ("Input the value of n: ");
scanf ("%f", &n);

printf ("Input the value of a: ");
scanf ("%f", &a);

printf ("%f", a);

for (int i=1;i<=n;i++){
    a=a/2;
    printf ("%f ", a);
}

return 0;

}