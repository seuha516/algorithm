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
#include <functional>
#include <stack>
using namespace std;

int f(int a){
	int h=0;
	while(a){
		h+=a%10;
		a/=10;
	}
	return h;	
}


int main(){
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	vector <int> v;
	for(int i=a;i<=b;i++){
		if(f(i)==c){
			v.push_back(i);
		}
	}
	printf("%d\n%d",v[0],v[v.size()-1]);

	
return 0;}

