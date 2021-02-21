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

#define TEST 0

using namespace std;

int main(){
	
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int t=0;
	for(int i=0;i<3;i++){t+=arr[0][i]; if(arr[0][i]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[1][i]; if(arr[1][i]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[2][i]; if(arr[2][i]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[i][0]; if(arr[i][0]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[i][1]; if(arr[i][1]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[i][2]; if(arr[i][2]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[i][i]; if(arr[i][i]==0){t=0; break;}}
	if(t!=0)goto R;
	for(int i=0;i<3;i++){t+=arr[i][2-i]; if(arr[i][2-i]==0){t=0; break;}}
	if(t!=0)goto R;
	
	R:
	
	if(t==0){
		
		int a=0,b=0,c=0;
		if(arr[0][0]==0){
			a=arr[0][1]+arr[0][2]; b=arr[1][0]+arr[1][2]; c=arr[2][0]+arr[2][1];
			
			int A=a, B=b, C=c;
			
			if(A>B){int temp=A; A=B; B=temp;}
			if(B>C){int temp=B; B=C; C=temp;}
			if(A>B){int temp=A; A=B; B=temp;}
			
			int X= C-A + B-A;
			t=C;
			if(C==a){
				arr[0][0]=(t-X)/2;
			}else if(C==b){
				arr[1][1]=(t-X)/2;
			}else{
				arr[2][2]=(t-X)/2;
			}
			
			t+=(t-X)/2;
			
		}else{
			a=arr[0][1]+arr[0][0]; b=arr[1][0]+arr[1][2]; c=arr[2][2]+arr[2][1];
			
			int A=a, B=b, C=c;
			if(A>B){int temp=A; A=B; B=temp;}
			if(B>C){int temp=B; B=C; C=temp;}
			if(A>B){int temp=A; A=B; B=temp;}
			
			int X=C-A + B-A;
			
			t=C;
			if(C==a){
				arr[0][2]=(t-X)/2;
			}else if(C==b){
				arr[1][1]=(t-X)/2;
			}else{
				arr[2][0]=(t-X)/2;
			}
			
				t+=(t-X)/2;
		}
			
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]!=0) continue;
			
			int zerogaesoo1=0; int zerogaesoo2=0;
			for(int ii=0;ii<3;ii++){
				if(arr[i][ii]==0){
					if(ii!=j)zerogaesoo1++;
				}
				if(arr[ii][j]==0){
					if(ii!=i)zerogaesoo2++;
				}
			}
			
			if(zerogaesoo1!=0 && zerogaesoo2!=0) continue;
			
			else if(zerogaesoo1==0){
				int hap=0;
				for(int ii=0;ii<3;ii++){
					hap+=arr[i][ii];
				}
				arr[i][j]=t-hap;
			}else{
				int hap=0;
				for(int ii=0;ii<3;ii++){
					hap+=arr[ii][j];
				}
				arr[i][j]=t-hap;
			}	
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]!=0) continue;
			
			int zerogaesoo1=0; int zerogaesoo2=0;
			for(int ii=0;ii<3;ii++){
				if(arr[i][ii]==0){
					if(ii!=j)zerogaesoo1++;
				}
				if(arr[ii][j]==0){
					if(ii!=i)zerogaesoo2++;
				}
			}
			if(zerogaesoo1!=0 && zerogaesoo2!=0) continue;
			
			else if(zerogaesoo1==0){
				int hap=0;
				for(int ii=0;ii<3;ii++){
					hap+=arr[i][ii];
				}
				arr[i][j]=t-hap;
			}else{
				int hap=0;
				for(int ii=0;ii<3;ii++){
					hap+=arr[ii][j];
				}
				arr[i][j]=t-hap;
			}	
		}
	}




	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
	
	
    return 0;
}



