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
	
	int arr[11]={0,};
	int hap=0;
	for(int i=0;i<9
	;i++){
		scanf("%d",arr+i); hap+=arr[i];
	}
	
	int t1=-1,t2=-1;
	
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			if(arr[i]+arr[j]==hap-100){
				t1=i;t2=j;break;
			}
		}
		if(t1!=-1&&t2!=-1) break;
	}
	
	vector <int> v;
	
	for(int i=0;i<9;i++){
		if(i!=t1&&i!=t2){
			v.push_back(arr[i]);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		printf("%d\n",v[i]);
	}
	
	return 0;
}

