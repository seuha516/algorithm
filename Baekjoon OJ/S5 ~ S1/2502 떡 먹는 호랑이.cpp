#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define TEST 1

using namespace std;

int main(){
	
	int a,b; scanf("%d %d",&a,&b);
	vector <int> v;
	v.push_back(1); v.push_back(1);
	for(int i=0;i<50;i++)v.push_back(v[v.size()-1]+v[v.size()-2]);
	
	int aa=v[a-3]; int bb=v[a-2]; int mok=b;
	for(int i=1;1;i++){
		if((mok-bb*i)%aa==0){
			printf("%d\n%d",(mok-bb*i)/aa,i); return 0;
		}
	}
	
    return 0;
}
