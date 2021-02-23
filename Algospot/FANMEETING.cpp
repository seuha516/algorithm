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

vector <int> v1, v2; 
vector <int> dap;

vector<int> makeiteasy (vector<int>& a){
   while(a.size()>1 && a.back()==0)a.pop_back();
   return a;
}
vector<int> multi_basic (vector<int>& a, vector<int>& b){
   
   vector<int> result (a.size()+b.size()+1,0);
   int asize=a.size(); int bsize=b.size();
   for(int i=0;i<asize;i++){
      for(int j=0;j<bsize;j++){
         result[i+j]+=a[i]*b[j];
      }
   }
   makeiteasy(result);
   return result;
}

void hap (vector<int>&a, vector<int>&b){
   while(a.size()<b.size())a.push_back(0);
   int bsize=b.size();
   
   for(int i=0;i<bsize;i++){
      a[i]+=b[i];
   }
   makeiteasy(a);
}
void cha (vector<int>&a, vector<int>&b){
    while(a.size()<b.size())a.push_back(0);
   int bsize=b.size();
   
   for(int i=0;i<bsize;i++){
      a[i]-=b[i];
   }
   makeiteasy(a);
}

vector<int> move (vector<int>&a,int k){
   int asize=a.size();
   vector<int> result(k,0);
   result.insert(result.end(),a.begin(),a.end());
   return result;
}

vector<int> multi(vector<int>&a,vector<int>&b){
   
   if(a.size()<b.size())return multi(b,a);
   if(a.size()==0 || b.size()==0) return vector<int>();
   if(a.size()<=50) return multi_basic(a,b);
   
   int asize=a.size(); int bsize=b.size();
   int half=a.size()/2;
   
   vector<int> a0;a0.assign(a.begin(),a.begin()+half);
   vector<int> a1;a1.assign(a.begin()+half,a.end());
   vector<int> b0;b0.assign(b.begin(),b.begin()+min(half,bsize));
   vector<int> b1;b1.assign(b.begin()+min(half,bsize),b.end());
   
   vector<int> result;
   vector<int> z0=multi(a0,b0);
   vector<int> z2=multi(a1,b1);
   
   hap(a0,a1);
   hap(b0,b1);
   vector<int> z=multi(a0,b0);
   
   cha(z,z0);
   cha(z,z2);
      
   vector<int> x=move(z2,half*2);
   z=move(z,half);
   
   hap(x,z);
   hap(x,z0);

   return x;
}


int main(){
   
   int t; scanf("%d",&t);
   while(t--){
	string s1,s2;
	cin >> s1; cin >> s2; reverse(s2.begin(),s2.end());
	int l1=s1.length(); int l2=s2.length();
	for(int i=0;i<l1;i++)v1.push_back(s1[i]=='M'? 1:0);
	for(int i=0;i<l2;i++)v2.push_back(s2[i]=='M'? 1:0);   
	vector<int> dap=multi(v1,v2);
	int dd=0;
	   int v1s=v1.size(); int v2s=v2.size(); int ds=dap.size();
	   for(int i=v1s-1; i<v2s;i++){
		 if(i>=ds) dd++;
	   	 else if(dap[i]==0)dd++;
	   }
	   printf("%d\n",dd);
	   while(!v1.empty())v1.pop_back();
	   while(!v2.empty())v2.pop_back();
	   while(!dap.empty())dap.pop_back();
   }
   
    return 0;
}
