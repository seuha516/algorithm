#include <iostream>
#include <queue>
#include <deque>


using namespace std;

int main() {
	int n, m;
	int pick[50]={0,};
	int co=0;
	int size,loca;
	int t,tt,ttt;

	scanf("%d %d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&pick[i]);
	}
	
	deque<int> d;
	for(int i=1;i<=n;i++){
		d.push_back(i);
	}
	
	for(int i=1;i<=m;i++){
		size=d.size();
		for(int j=1;j<=size;j++){
			if(d.front()==pick[i]){
				loca=j;
			}
			t=d.front();
			d.pop_front();
			d.push_back(t);
		}
		if(loca-1<=size-loca+1){
			co+=loca-1;
		
			for(int y=1;y<=loca-1;y++){
				t=d.front();
				d.pop_front();
				d.push_back(t);
			}
			d.pop_front();
		}else{
			co+=size-loca+1;
			
			for(int y=1;y<=size-loca+1;y++){
				t=d.back();
				d.pop_back();
				d.push_front(t);
			}
			d.pop_front();
		}
		
		 
		
	}
	printf("%d",co);
	
	return 0;
}
