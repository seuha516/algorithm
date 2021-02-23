#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;


int main() {

	char arr[400][400];

	for(int i=0;i<400;i++){
		for(int j=0;j<400;j++){
			arr[i][j]=' ';
		}
	}

	int x;
	scanf("%d",&x);

	for(int i=0;i<2*x-1;i++){
		if(i==0||i==2*x-2){
            for(int j=0;j<x;j++){
                arr[i][j]='*';
            }
            for(int j=0;j<x;j++){
                arr[i][4*x-3-j-1]='*';
            }
		}else if(i<x){
            arr[i][i]='*';
            arr[i][4*x-4-i]='*';
            arr[i][i+x-1]='*';
            arr[i][4*x-4-i-x+1]='*';
            arr[2*x-2-i][i]='*';
            arr[2*x-2-i][4*x-4-i]='*';
            arr[2*x-2-i][i+x-1]='*';
            arr[2*x-2-i][4*x-4-i-x+1]='*';

		}

	}
	for(int i=0;i<2*x-1;i++){
		for(int j=0;j<4*x-3;j++){
            if(i!=0||i!=2*x-1){
                    int t;
                if(i<x){
                    t=4*x-3-i;
                }else{
                    t=4*x-3-(2*x-i-1);
                }
                if(j>t){
                    break;
                }
            }

			printf("%c",arr[i][j]);
		}
		if(i==2*x-1){
			break;
		}printf("\n");
	}

	return 0;
}

