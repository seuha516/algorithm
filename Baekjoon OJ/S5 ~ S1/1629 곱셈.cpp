#include <iostream>

unsigned long long sq(unsigned long long a, unsigned long long b, unsigned long long c){
	unsigned long long t;
	if(b==1){
		return a%c;
	}else{
		if(b%2==0){
			t=(sq(a,b/2,c)%c);
			return t*t;
		}else{
			t=(sq(a,b/2,c)%c);
			return ((t*t)%c)*(a%c);
		}	
	}
}

int main(){
    unsigned long long a,b,c;
    scanf("%llu %llu %llu",&a,&b,&c);
  	printf("%llu",sq(a,b,c)%c);
    return 0;
}
