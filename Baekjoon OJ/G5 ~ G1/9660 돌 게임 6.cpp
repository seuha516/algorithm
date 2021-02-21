#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	long long n;
	scanf("%lld",&n);
	if(n%7==0||n%7==2){
		printf("CY");		
	}else{
		printf("SK");
	}
	return 0;
}
