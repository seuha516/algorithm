#include <iostream>
#include <string>


int daynum(int y){
	if(y%400==0){
		return 366;
	}else if(y%100==0){
		return 365;
	
	}else if(y%4==0){
		return 366;
	}else{
		return 365;
	}
}

int a,b,c; int aa,bb,cc;
int x=0;
int ok=1-1;

void print(){
	if(ok)printf("%d %d %d ~ %d %d %d (%d)\n",a,b,c,aa,bb,cc,x);
}

int main()
{
	scanf("%d %d %d %d %d %d",&a,&b,&c,&aa,&bb,&cc);
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if(aa>a+1000){
		printf("gg");return 0;
	}else if(aa==a+1000){
		if(bb*100+cc >= b*100+c){
			printf("gg");return 0;
		}
	}
	
	print();
	
	
	for(int i=0;i<b-1;i++){
		c+=arr[i];
	}
	if(b>2&&daynum(a)==366)c++; b=0;
	
	
	for(int i=0;i<bb-1;i++){
		cc+=arr[i];
	}if(bb>2&&daynum(aa)==366)cc++; bb=0;
	
	print();
	
	x-=c; x+=cc; c=cc=0;
	
	print();
	
	while(a!=aa){
		x+=daynum(a);a++;print();
	}

	printf("D-%d",x);
	
    return 0;
}
