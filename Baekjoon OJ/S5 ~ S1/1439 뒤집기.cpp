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
using namespace std;

int main(){
	
	string s; cin>>s;
	int d=1;
	for(int i=1;i<s.length();i++){
		if(s[i]!=s[i-1]){
			d++;
		}else{
			
		}
	}
	printf("%d",d/2);

	return 0;	
}


