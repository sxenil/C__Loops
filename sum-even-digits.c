#include<stdio.h>
int main (){

int sum=0,ld,n;

printf ("Enter the number: ");
scanf ("%d", &n);

while (n>0) {
    ld=n%10;
    if (ld%2==0){
        sum=sum+ld;
        }
    n=n/10;
}

printf ("%d", sum);

return 0;

}