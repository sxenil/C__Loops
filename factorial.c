#include<stdio.h>
int main(){

int prod= 1,n;

printf ("Enter the factorial term: ");
scanf ("%d", &n);

for (int i=1; i<=n; i++){
    prod= prod*i;
    printf ("The factorial is: %d\n", prod);
}

printf ("\nThe factorial is: %d", prod);

return 0;

}