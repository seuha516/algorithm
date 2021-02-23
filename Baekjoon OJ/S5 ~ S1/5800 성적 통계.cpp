#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <math.h>

using namespace std;

int main() {
	int n,pp;
	int sc[55];
	
	int gap;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		for(int j=0;j<55;j++){
			sc[j]=1111;
		}
		
		scanf("%d",&pp);
		
		for(int j=0;j<pp;j++){
			scanf("%d",&sc[j]);
		}
		
		sort(sc,sc+pp);
		gap=0;
		for(int j=1;j<pp;j++){
			gap=max(gap,sc[j]-sc[j-1]);
		}
		
		printf("Class %d\n",i);
		printf("Max %d, Min %d, Largest gap %d\n",sc[pp-1],sc[0],gap);
		
	}
	
	return 0;
}
