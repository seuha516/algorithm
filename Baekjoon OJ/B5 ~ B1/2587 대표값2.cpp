#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int x=5;

	int a[5]; int t=0;
	for(int i=0;i<5;i++){
		scanf("%d",a+i);t+=a[i];
	}
	sort(a,a+5);
	
	printf("%d\n%d",t/5,a[2]);
	
    return 0;
}

