// 2.5.5
// First, we write the GCD program and using it we find the numbers

#include <stdio.h>
#include <math.h>  
#include <stdlib.h>

int gcd(int a, int b) {

    while (b!=0) {
        int t=b;
        b=a%b;
        a=t;
    }

    return a;
}
int main() {
    int m;
    printf("Enter the value of m?\n");
    scanf("%d",&m);

    for (int i=1;i<m;i++) {
        int remainder=gcd(i,m);
        if (remainder==1) {
            printf("The number is: %d\n",i);
        }
    }
}

