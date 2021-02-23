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
	
	vector<int> v;
	int dap=0;
	
	for(int i=0;i<11;i++){
		int a,b; scanf("%d %d",&a,&b);
		dap+=(20*b);
		v.push_back(a);
	}sort(v.begin(),v.end());
	
	int temp=0;
	for(int i=0;i<v.size();i++){
		dap+=v[i]+temp;
		temp+=v[i];
	}
	cout<<dap;
	
	return 0;
}



