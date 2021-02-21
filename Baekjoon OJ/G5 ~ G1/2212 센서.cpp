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

int dap=0;

int main(){
	
	int n,k; scanf("%d %d",&n,&k);
	vector<int> sensor;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); sensor.push_back(x);
	}sort(sensor.begin(),sensor.end());
	sensor.erase(unique(sensor.begin(),sensor.end()),sensor.end());
	
	vector<int> dis;
	for(int i=0;i<sensor.size()-1;i++){
		dis.push_back(sensor[i+1]-sensor[i]);
	}sort(dis.begin(),dis.end());
	
	k--;
	if(k>=dis.size()) {
		printf("0"); return 0;
	}
	else{
		
		for(int i=0;i<dis.size()-k;i++){
			dap+=dis[i];
		}
	}
	cout<<dap;
	
	return 0;
}


