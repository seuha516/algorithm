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
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	
	vector<pair<int,int> > task;
	
	for(int i=0;i<n;i++){
		int a, b; scanf("%d %d",&a,&b);
		task.push_back(make_pair(b,a));
	}sort(task.begin(),task.end());
	
	int arr[1003]={0,};
	for(int i=task.size()-1;i>=0;i--){
		int sc=task[i].first; int day=task[i].second;
		for(int j=day;j>=1;j--){
			if(arr[j]==0){
				arr[j]=sc; break;
			}
		}
	}
	
	int dap=0;
	for(int i=1;i<=1000;i++){
		dap+=arr[i];	}
	
	cout<<dap;
	
	return 0;
}
