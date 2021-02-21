#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    int x;scanf("%d",&x);
    int t=0;
	for(int i=1;i<=x/3;i++){
		for(int j=i;j<=(x-i)/2;j++){
			if(i+j>x-i-j){t++;
			}
		}
	}
    printf("%d",t);
    return 0; 
}

