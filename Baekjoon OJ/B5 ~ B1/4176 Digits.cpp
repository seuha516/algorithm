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
	
	while(1){
		string s; cin >> s; int d=0;
		if(s=="END") return 0;
		int x=atoi(s.c_str());
		int nextx=s.length(); 
		R:
		d++;
		if(x==nextx){
			printf("%d\n",d); continue;
		}else{
			x=nextx; int temp=0; int xxx=x;
			while(xxx){
				xxx/=10; temp++;
			}nextx=temp;
			goto R;
		}
	}
	
    return 0;
}
