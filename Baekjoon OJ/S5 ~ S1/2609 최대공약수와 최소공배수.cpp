#include <iostream>
#include <string>

int gcd(int a,int b){
	int t=a%b;
	if(t==0)return b;
	else return gcd(b,t);	
}


int main(){
	
	int a,b;scanf("%d %d",&a,&b);
	printf("%d\n%d",gcd(a,b),a*b/gcd(a,b));
	
    return 0;
}
