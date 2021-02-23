#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <list>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		list<int> l;
		int n,k; scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++){
			l.push_back(i);
		}
		list<int>::iterator p=l.begin();
		while(l.size()>2){
			p=l.erase(p);
			if(p==l.end()) p=l.begin();
			for(int i=0;i<k-1;i++){
				p++;
				if(p==l.end()) p=l.begin();
			}
		}
		int d1=l.front(), d2=l.back();
		printf("%d %d\n",min(d1,d2),max(d1,d2));
	}
	
	return 0;
}
