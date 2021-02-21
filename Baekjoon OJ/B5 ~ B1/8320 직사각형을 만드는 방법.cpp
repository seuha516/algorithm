#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int sq(int a){
    int c=0;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            //printf("%d ",i);
            c++;
        }
    }
    return c;

}


int main() {

    int x;scanf("%d",&x);

    int arr[10002];
    arr[0]=0;
	for(int i=1;i<=x;i++){
        arr[i]=arr[i-1]+sq(i);
	}

	printf("%d",arr[x]);

	return 0;
}

