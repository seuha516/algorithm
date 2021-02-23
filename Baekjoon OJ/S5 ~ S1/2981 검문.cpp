#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>

using namespace std;

int gcd(int a, int b){
	int temp, n;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	while(b!=0){
		n=a%b;
		a=b;
		b=n;
		
	}
	return a;	
}

int main() {
	int n;
	scanf("%d",&n);
	int list[101]={0,};
	int list2[101]={0,};
	
	int aa=0;
	
	for(int i=1; i<=n; i++){
		scanf("%d",&list[i]);
	}
	
	for(int i=1; i<=n-1; i++){
		list2[i]=abs(list[i]-list[i+1]);
		if(i>1){
			aa=gcd(aa,list2[i]);
		}else{
			aa=list2[i];
		}
	}
	
	int num=0;
	stack<int> s;
	stack<int> ss;
	stack<int> sss;
	

	for(int i=1;i<=sqrt(aa);i++){
		if(aa%i==0){
			ss.push(i);
			s.push(i);
	
		}	
	}
	int tmp;
	while(s.empty()==0){
		tmp=s.top();
		s.pop();
		ss.push(aa/tmp);

	}
	while(ss.empty()==0){
		tmp=ss.top();
		ss.pop();
		sss.push(tmp);

	}
	int kk=0;
	while(sss.empty()==0){
		if(sss.top()!=1&&sss.top()!=kk){
			printf("%d ",(sss.top()));
			kk=sss.top();
			sss.pop();
		}else{
			sss.pop();
		}
	}	
	
	return 0;
}
