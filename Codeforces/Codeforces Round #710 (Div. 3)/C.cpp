#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;


int main(){
	
	int TC; scanf("%d",&TC); getchar();
	while(TC--){
		
		string a,b; cin >> a >> b; getchar();
		int dap=0;
		int alen=a.length(), blen=b.length();
		
		for(int i=0;i<alen;i++){
			for(int j=i;j<alen;j++){
				for(int k=0;k<blen;k++){
					int L=j-i+1;
					bool ok=1;
					for(int x=0;x<L;x++){
						if(a[i+x]!=b[k+x]){
							ok=0; break;
						}
					}
					if(ok){
						dap=max(dap,L);
					}
				}
			}
		}
		printf("%d\n",alen+blen-dap-dap);
	}
	
	return 0;
}
