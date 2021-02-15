#include <iostream>
#include <algorithm>
#include <vector>
#define fib_size 1600

using namespace std;

long long llpow(long long a,int n){
	long long t=1;
	for(int i=0;i<n;i++){
      t*=a;
	}
	return t;
}
long long long_gop(long long a,long long b){  //두 10^13이하 수의 곱을 10^13으로 나눈 나머지를 리턴 
	long long temp=(a/10000000)*(b%10000000)+(a%10000000)*(b/10000000);
	for(int i=0;i<7;i++){
		temp*=10; temp%=10000000000000;
	}
	return (temp+(a%10000000)*(b%10000000))%10000000000000;
}

long long n; 
long long fib[fib_size];
long long fibb[15][2]; 
vector <long long> dap;

void fibset(){ //피보나치 수를 10^13으로 나눈 나머지의 모음 
	fib[1]=1;
	for(int i=2;i<fib_size;i++){
		fib[i]=fib[i-1]+fib[i-2];
		fib[i]%=llpow(10,13);
	}
}
void fibset2(){ //fib[10^n-1], fib[10^n] 의 모음 
	fibb[2][0]=9583501626149; fibb[2][1]=6214405760200; 
	for(int i=3;i<15;i++){
		long long t1=fibb[i-1][0]; long long t2=fibb[i-1][1];
		for(int j=0;j<9;j++){
			long long t3=(t1+t2)%10000000000000;
			long long temp1=long_gop(t1,fibb[i-1][0])+long_gop(t2,fibb[i-1][1]);
			long long temp2=long_gop(t2,fibb[i-1][0])+long_gop(t3,fibb[i-1][1]);
			t1=temp1%10000000000000; t2=temp2%10000000000000;
		}
		fibb[i][0]=t1; fibb[i][1]=t2;
	}
}
void go(int lev,long long fib1,long long fib2,long long idx){
	if(lev==15) return;
	long long sib_jegop=llpow(10,lev-1);
	
	long long t1=fib1; long long t2=fib2; 
	for(int i=0;i<10;i++){
		if(t1%sib_jegop == n%sib_jegop){
			if(lev==14){
				dap.push_back(idx);
			}
			go(lev+1,t1,t2,idx);
		}
		long long t3=(t1+t2)%10000000000000;
		long long temp1=long_gop(t1,fibb[lev-1][0])+long_gop(t2,fibb[lev-1][1]);
		long long temp2=long_gop(t2,fibb[lev-1][0])+long_gop(t3,fibb[lev-1][1]);
		t1=temp1%10000000000000; t2=temp2%10000000000000;
		idx+=sib_jegop/10*15;
	}
}


int main(){
	
	fibset(); fibset2();
	scanf("%lld",&n); 
	
	if(n==10000000000000){printf("-1"); return 0;}
	for(int i=0;i<1500;i++){
		if(fib[i]%1000 == n%1000){
			go(4,fib[i],fib[i+1],(long long)i);
		}
	}
	sort(dap.begin(),dap.end());
	
	if(dap.empty()){
		printf("-1");
	}else{
		printf("%lld",dap[0]);
	}
	
	return 0;
}





