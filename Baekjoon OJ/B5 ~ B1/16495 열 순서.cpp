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

#define TEST 1
#define intmax 2147483647
#define LIMIT 52000

using namespace std;

int main(){
	string s; cin >> s;
	long long dap=0;
	
	for(int i=0;i<s.length();i++){
		int x=s[i]-'A'+1;
		dap*=26;
		dap+=x;
	}
	printf("%lld",dap);
	
	return 0;	
}


