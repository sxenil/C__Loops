#include<stdio.h>
int main(){

int n,a;
printf ("Input the value of n: ");
scanf ("%d", &n);

printf ("Input the value of a: ");
scanf ("%d", &a);

for (int i=1;i<=n;i++){
    a=a*2;
    printf ("%d ", a);
}

return 0;

}