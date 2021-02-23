#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>

using namespace std;

int n,k,m; 
int length[55];
double chain[55][55];
int favor[12];

double C_3[220];
double W[220][220];

void multiple_matrix(double (*X)[220],double A[],int n){
	double ret[220];
	for(int i=0;i<n;i++){
		double val=0;
		for(int k=0;k<n;k++){
			val+=A[k]*X[i][k];
		}
		ret[i]=val;
	}
	for(int i=0;i<n;i++){
		A[i]=ret[i];
	}
}
void multiple_matrix_2(double (*X)[220],double (*Y)[220],int n){
	double ret[220][220];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			double val=0;
			for(int k=0;k<n;k++){
				val+=X[i][k]*Y[k][j];
			}
			ret[i][j]=val;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			X[i][j]=ret[i][j];
		}
	}
}
void make_basic(int time,int song,double p){ //time분이 지났는데 song 시작 
	if(time>=4) return;
	C_3[time*n+song]+=p;
	for(int i=0;i<n;i++){
		make_basic(time+length[song],i,p*chain[song][i]);
	}	
}
double change(int time,int s1,int s2){
	if(time==length[s1]){
		return chain[s1][s2];
	}else return 0.0;
}
void start(int time){ //time분 후 song가 시작되는 확률 

	double dap[220][220]={0,};
	for(int i=0;i<220;i++)dap[i][i]=1;

	double basicmatrix[220][220]={0,};
	for(int i=0;i<220;i++)basicmatrix[i][i]=1;
	
	int temptime=time;
	while(temptime){
		if(temptime%2==1){
			multiple_matrix_2(dap,W,4*n);
		}
		multiple_matrix_2(W,W,4*n);
		temptime/=2;
	}
	
	multiple_matrix(dap,C_3,4*n);
	
	for(int i=0;i<m;i++){
		int sing=favor[i];
		double dap=0;
		for(int j=0;j<length[sing];j++){
			dap+=C_3[(3-j)*n+sing];
		}
		printf("%0.10lf ",dap);
	}printf("\n");
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		for(int i=0;i<220;i++){C_3[i]=0.0;for(int j=0;j<220;j++)W[i][j]=0.0;}
		
		scanf("%d %d %d",&n,&k,&m);
		for(int i=0;i<n;i++) scanf("%d",&length[i]);
		for(int i=0;i<n;i++){for(int j=0;j<n;j++){scanf("%lf",&chain[i][j]);}}
		for(int i=0;i<m;i++) scanf("%d",&favor[i]);
		
		make_basic(0,0,1.0);
		for(int i=0;i<3*n;i++){
			for(int j=0;j<4*n;j++){
				W[i][n+i]=1;
			}
		}
		for(int i=3*n;i<4*n;i++){
			for(int j=0;j<4*n;j++){
				int t1,t2,s1,s2;
				t2=i/n+1; s2=i%n; t1=j/n; s1=j%n;
				W[i][j]=change(t2-t1,s1,s2);
			}
		}
		
		if(k<=3){
			for(int i=0;i<m;i++){
				int sing=favor[i];
				double dap=0;
				for(int j=0;j<length[sing];j++){
					dap+=C_3[(3-j)*n+sing];
				}
				printf("%0.10lf ",dap);
			}printf("\n");
			continue;
		}k-=3;

		start(k);
	}
	
	return 0;	
}
