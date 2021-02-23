#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define TEST 0

using namespace std;

int main(){

	long long n=2;  
	
	while(scanf("%lld",&n)!=EOF){
		long long p=1;
		while(1){
			p*=9; 
			if(n<=p){
				printf("Baekjoon wins.\n"); break;
			} 
			p*=2; 
			if(n<=p){
				printf("Donghyuk wins.\n"); break;
			} 
		}
	}
	
    return 0;
}
