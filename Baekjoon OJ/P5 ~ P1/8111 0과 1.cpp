#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		bool check[20004]={0,};
		bool ok=false;
		queue<pair<int,string>> q;
		
		q.push({0,""});
		while(!q.empty()){
			int x=q.front().first; string s=q.front().second; q.pop();
			
			if(s.length()>100) continue;
			if(x==0 && s!=""){
				printf("%s\n",s.c_str()); ok=true; break;
			}
			if(check[x]) continue;
			check[x]=true;
			
			for(int i=0;i<=9;i++){
				if(i==0&&s=="") continue;
				int now=n*i+x;
				if(now%10==0||now%10==1){
					q.push({now/10,(char)(now%10+'0')+s});
					now/=10;
				}
			}
		}
		if(!ok) printf("BRAK\n");
	}
	return 0;
}
