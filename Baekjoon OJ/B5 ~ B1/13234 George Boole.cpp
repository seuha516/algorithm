#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

using namespace std;

int main(){
	
	string a,b,c;
	
	cin >> a >> c >> b;
	
	int d,e;
	if(a=="true")d=1;else d=0;
	if(b=="true")e=1;else e=0;
	if(c=="AND"){
		if(d&e)printf("true");
		else printf("false");
	}else{
		if(d|e)printf("true");
		else printf("false");
	}
	
	return 0;	
}


