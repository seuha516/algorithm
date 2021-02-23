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

#define TEST 0

using namespace std;

string WC;

vector<pair<string,int> > go(vector<pair<string,int> >& file,int pnt){
	
	bool ok[50]={0,};
	
	vector<pair<string,int> > ret;
	int file_size=file.size();
	
	if(pnt>=WC.size()) return file;
	
	
	if(WC[pnt]!='*' && WC[pnt]!='?'){
		for(int i=0;i<file_size;i++){
			if(file[i].first.length()!=0){
				if(file[i].first[0]==WC[pnt]){
					ret.push_back(pair<string,int>(file[i].first.substr(1),file[i].second));
				}
			}
		}
	}else if(WC[pnt]=='?'){
		for(int i=0;i<file_size;i++){
			if(file[i].first.length()!=0){
				ret.push_back(pair<string,int>(file[i].first.substr(1),file[i].second));
			}
		}
	}else{
		
		if(pnt==WC.length()-1){
			for(int i=0;i<file_size;i++){
				ret.push_back(pair<string,int>("",file[i].second));
			}
			return ret;
		}else if(WC[pnt+1]=='*'){
			return go(file,pnt+1);
		}else if(WC[pnt+1]=='?'){ 
			for(int i=0;i<file_size;i++){
				if(file[i].first.length()!=0){
					for(int j=1;j<=file[i].first.length();j++){
						if(ok[file[i].second])break;
						ret.push_back(pair<string,int>(file[i].first.substr(j),file[i].second));
					
					}ok[file[i].second]=1;
				}
			}
		}else{ 
			for(int i=0;i<file_size;i++){ 
				if(file[i].first.length()!=0){
					for(int j=1;j<=file[i].first.length();j++){
						if(ok[file[i].second] || file[i].first[j-1]!=WC[pnt+1])continue;
						ret.push_back(pair<string,int>(file[i].first.substr(j),file[i].second));
						
					}ok[file[i].second]=1;
				}
			}
		}
		return go(ret,pnt+2);
	}
	if(pnt==WC.length()-1) return ret;
	return go(ret,pnt+1);
	
}

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		
		cin >> WC;
		vector<pair<string,int> >file;
		vector<string> ori;
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			string x; cin >> x;
			file.push_back(pair<string,int>(x,i));
			ori.push_back(x);
		}
		vector<pair<string,int> >dap;
		dap=go(file,0);
		vector<string>d;
		bool o[50]={0,};
		for(int i=0;i<dap.size();i++){
			if(o[dap[i].second] || dap[i].first.length()!=0)continue;
			d.push_back(ori[dap[i].second]); o[dap[i].second]=1;
		}
		sort(d.begin(),d.end());
		for(int i=0;i<d.size();i++){
			printf("%s\n",d[i].c_str());
		}
	}
   
    return 0;
}
