#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 1

using namespace std;

int x_4[4]={-1,1,0,0}; int y_4[4]={0,0,-1,1};
int x_8[8]={-1,-1,-1,0,0,1,1,1}; int y_8[8]={-1,0,1,-1,1,-1,0,1};

int V(vector<int>&list,int st,int end,int t){
	int ret=0;
	for(int i=st;i<=end;i++){
		ret+= (list[i]-t) * (list[i]-t);
	}
	return ret;
}

int mini(vector<int>&list, int st,int end){
	int t=list[(st+end)/2];
	int now=V(list,st,end,t); int left=V(list,st,end,t-1); int right=V(list,st,end,t+1);
	int ret;
	if(now <= left && now <= right){
		ret=now;
	}else if(now > right){
		t++;
		while(V(list,st,end,t) > V(list,st,end,t+1)){
			t++;
		}
		ret=V(list,st,end,t);
	}else{
		t--;
		while(V(list,st,end,t) > V(list,st,end,t-1)){
			t--;
		}
		ret=V(list,st,end,t);
	}
	return ret;
	
}

int mini2(vector<int>&list, int st,int end){
	int t=list[(st+end)/2];
	int now=V(list,st,end,t); int left=V(list,st,end,t-1); int right=V(list,st,end,t+1);
	int ret;
	if(now <= left && now <= right){
		ret=now;
	}else if(now > right){
		t++;
		while(V(list,st,end,t) > V(list,st,end,t+1)){
			t++;
		}
		ret=V(list,st,end,t);
	}else{
		t--;
		while(V(list,st,end,t) > V(list,st,end,t-1)){
			t--;
		}
		ret=V(list,st,end,t);
	}

	return t;
}



int main(){
	
	int a[25];
	for(int i=1;i<25;i++){
		scanf("%d",&a[i]);
	}
	if(a[13]==a[14] && a[13]==a[15] && a[13]==a[16]   &&   a[17]==a[18] && a[17]==a[19] && a[17]==a[20]){
		if(a[1]==a[3] && a[5]==a[7] && a[9]==a[11] && a[22]==a[24] && a[2]==a[4] && a[6]==a[8] & a[10]==a[12] && a[21]==a[23]){
			if(a[1]==a[6] && a[5]==a[10] && a[9]==a[21] && a[22]==a[2]){
				printf("1"); return 0;
			}else if(a[1]==a[21] && a[5]==a[2] && a[9]==a[6] && a[22]==a[10]){
				printf("1"); return 0;
			}
		}
	}
	if(a[1]==a[2] && a[1]==a[3] && a[1]==a[4]   &&   a[9]==a[10] && a[9]==a[11] && a[9]==a[12]){
		if(a[13]==a[14] && a[15]==a[16] && a[5]==a[6] && a[7]==a[8] && a[17]==a[18] && a[19]==a[20] & a[21]==a[22] && a[23]==a[24]){
			if(a[13]==a[7] && a[5]==a[19] && a[17]==a[23] && a[21]==a[15]){
				printf("1"); return 0;
			}else if(a[13]==a[23] && a[5]==a[15] && a[17]==a[7] && a[21]==a[19]){
				printf("1"); return 0;
			}
		}
	}
	if(a[5]==a[6] && a[5]==a[7] && a[5]==a[8]   &&   a[21]==a[22] && a[21]==a[23] && a[21]==a[24]){
		if(a[1]==a[2] && a[3]==a[4] && a[18]==a[20] && a[17]==a[19] && a[13]==a[15] && a[14]==a[16] & a[9]==a[10] && a[11]==a[12]){
			if(a[1]==a[14] && a[13]==a[9] && a[11]==a[19] && a[20]==a[4]){
				printf("1"); return 0;
			}else if(a[1]==a[19] && a[13]==a[4] && a[11]==a[14] && a[20]==a[9]){
				printf("1"); return 0;
			}
		}
	}
	
	printf("0");
   
    return 0;
}

