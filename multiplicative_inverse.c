// 2.5.6
// First, we write the GCD program and using it we find the numbers
// This is the brute force approach 

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
            printf("%d   ",i);
            int cc=1;
            while ((i*cc)%m!=1) {
                cc=cc+1;
            }
            printf("%d\n",cc);
        }
        else{
            printf("%d   ",i);
            printf("-\n");
        }

    }
}

// Use Extended Euclid Algorithm for efficiency

 