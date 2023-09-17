#include<stdio.h>
int main(){

int sum=0,n;

printf ("Enter the n'th term: ");
scanf ("%d", &n);

for (int i=1; i<=n; i++){
    if (i%2!=0){
        sum=sum+i;
    }

    else{
        sum= sum-i;
    }
}

    printf ("The sum is: %d", sum);

return 0;

}