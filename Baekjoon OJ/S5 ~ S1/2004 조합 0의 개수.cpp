#include <iostream>
#include <algorithm>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    int a2=0,b2=0,c2=0,a5=0,b5=0,c5=0;
    c=a-b;
    int two=1;
    int five=1;
    for(int i=1;i<=30;i++){
    	two*=2;
    	a2+=a/two;
    	b2+=b/two;
    	c2+=c/two;
	}

	for(int i=1;i<=13;i++){
    	five*=5;
    	a5+=a/five;
    	b5+=b/five;
    	c5+=c/five;
	}

	a2=a2-b2-c2;
	a5=a5-b5-c5;
    printf("%d",std::min(a2,a5));
    
    return 0;
}
