#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int num; scanf("%d",&num);
	
	int numlist[60]={0};
	for(int i=0;i<num;i++){
		int t;scanf("%d",&t);
		numlist[i]=t;
	}
	int chalist[60]={0};
	int zerosoo=0;
	for(int i=0;i<num-1;i++){
		chalist[i]=numlist[i+1]-numlist[i];
		if(chalist[i]==0&&i!=0){
			zerosoo++;
		}
	}
	
	if(num==1){
		printf("A");
	}else if(num==2){
		if(numlist[0]!=numlist[1]){
			printf("A");
		}else{
			printf("%d",numlist[1]);
		}
	}else{
		if(zerosoo==num-2){
			printf("%d",numlist[1]);
		}else{
			int ok=1; int gongbee=0;
			for(int i=0;i<num-2;i++){
				if(chalist[i]==0){
					ok=0;break;
				}				
				if(chalist[i+1]%chalist[i]!=0){
					ok=0;
				}else{
					int temp=chalist[i+1]/chalist[i];
					if(i==0){
						gongbee=temp;
					}else{
						if(gongbee!=temp){
							ok=0;
						}
					}
				}
			}
			if(ok==0){
				printf("B");
			}else{
				int d=numlist[1]-(numlist[0]*gongbee);
				printf("%d",numlist[num-1]*gongbee+d);
			}		
		}
	}
	return 0;
	

}

