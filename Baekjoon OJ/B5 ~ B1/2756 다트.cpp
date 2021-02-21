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
	
	int t; scanf("%d",&t);
	while(t--){
		
		double arr[12]={0,};
		for(int i=0;i<12;i++){
			scanf("%lf",arr+i);
		}
		
		int sc1=0; int sc2=0;
		
		for(int i=0;i<=4;i+=2){
			double a=arr[i]; double b=arr[i+1];
			if(a*a+b*b<=9){
				sc1+=100;
			}else if(a*a+b*b<=36){
				sc1+=80;
			}else if(a*a+b*b<=81){
				sc1+=60;
			}else if(a*a+b*b<=144){
				sc1+=40;
			}else if(a*a+b*b<=225){
				sc1+=20;
			}else{
				sc1+=0;
			}	
		}
		for(int i=6;i<=10;i+=2){
			double a=arr[i]; double b=arr[i+1];
			if(a*a+b*b<=9){
				sc2+=100;
			}else if(a*a+b*b<=36){
				sc2+=80;
			}else if(a*a+b*b<=81){
				sc2+=60;
			}else if(a*a+b*b<=144){
				sc2+=40;
			}else if(a*a+b*b<=225){
				sc2+=20;
			}else{
				sc2+=0;
			}	
		}
		
		if(sc1>sc2){
			printf("SCORE: %d to %d, PLAYER 1 WINS.\n",sc1,sc2);
		}else if(sc1<sc2){
			printf("SCORE: %d to %d, PLAYER 2 WINS.\n",sc1,sc2);
		}else{
			printf("SCORE: %d to %d, TIE.\n",sc1,sc2);
		}
	}
	
	return 0;
}



