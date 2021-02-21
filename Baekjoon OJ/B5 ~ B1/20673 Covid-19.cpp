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

int main(){
	
	int a,b; scanf("%d %d",&a,&b);
	if(a<=50&&b<=10) printf("White");
	else if(b>=30) printf("Red");
	else printf("Yellow");
   
    return 0;
}



