#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        int div3 = n%3; //remainder after dividing by three
        int i;
        //This is brute force approach
        if(div3 == 0)
        {
            for(i =0;i<n;i++)
                printf("5");//We are printing each digit individually because 1<=N<=100000
            printf("\n");
        }
        
        else if(div3 == 2 && n>=5)//Question requires max no,so if div3 = 2 we keep 5 3's in the end
        {
            for(i=0;i<n-5;i++)
                printf("5");
            for(i=0;i<5;i++)
                printf("3");
            printf("\n");
        }
        else if(div3 == 1 && n>=10)//10 3's in the end for div3 = 1
        {
            for(i=0;i<n-10;i++)
                printf("5");
            for(i=0;i<10;i++)
                printf("3");
            printf("\n");
        }
        else if(n%5 == 0)
        {
            for(i=0;i<n;i++)
                printf("3");
            printf("\n");
        }
        else
            printf("-1\n");
        
    }
    return 0;
}