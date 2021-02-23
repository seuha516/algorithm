#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>
using namespace std;

int aa(int arr[],int n,int a,int b){
	int mid;
	mid=(a+b)/2;
	if(b-a==0){
		if(arr[a]==n){
			return 1;
		}else{
			return 0;
		}
	}else if(b>a){
		if(arr[mid]==n){
			return 1;
		}else if(arr[mid]<n){
			return aa(arr,n,mid+1,b);
		}else{
			return aa(arr,n,a,mid-1);
		}
	}else{
		return 0;
	}
}



int main(){
	int n,m; int nn[100005]={0,}; int mm[100005]={0,};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&nn[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&mm[i]);
	}
	sort(nn,nn+n);
	
	for(int i=0;i<m;i++){
		printf("%d\n",aa(nn,mm[i],0,n-1));
	}
	
	return 0;
}
