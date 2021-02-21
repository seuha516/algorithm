#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>

using namespace std;

int main(){
	
	for(int i=1;i<101;i++){
		for(int j=2;j<i;j++){
			for(int k=j+1;k*k*k<i*i*i-j*j*j;k++){
				for(int l=k+1; l*l*l<=i*i*i-j*j*j-k*k*k ;l++){
					if(j*j*j+k*k*k+l*l*l==i*i*i){
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
					}
				}
			}
		}
	}
  
    return 0;
}



