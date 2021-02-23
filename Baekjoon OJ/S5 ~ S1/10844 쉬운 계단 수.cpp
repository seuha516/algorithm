#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

long long howback[12]={0,1,1,1,1,1,1,1,1,1,1};
long long temp[12]={0,1,1,1,1,1,1,1,1,1,0};
long long aa=0;

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=2;i<=a;i++){
        temp[1]=howback[0]%1000000000+howback[2]%1000000000;
        temp[2]=howback[1]%1000000000+howback[3]%1000000000;
        temp[3]=howback[2]%1000000000+howback[4]%1000000000;
        temp[4]=howback[3]%1000000000+howback[5]%1000000000;
        temp[5]=howback[4]%1000000000+howback[6]%1000000000;
        temp[6]=howback[5]%1000000000+howback[7]%1000000000;
        temp[7]=howback[6]%1000000000+howback[8]%1000000000;
        temp[8]=howback[7]%1000000000+howback[9]%1000000000;
        temp[0]=howback[1]%1000000000;
        temp[9]=howback[8]%1000000000;
        for(int j=0;j<=9;j++){
            howback[j]=temp[j];
        }
    }
    for(int j=0;j<=9;j++){
        aa=(aa+howback[j])%1000000000;
    }
    printf("%lld",aa);


    return 0;
}

