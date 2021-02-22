#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	char c[200]={0};scanf("%s",c);int t=0;
	for(int i=0;c[i]!=0;i++){
		if(c[i]==97||c[i]==101||c[i]==105||c[i]==111||c[i]==117){
			t++;
		}
	}
	printf("%d",t);
	
	return 0;
}

