#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
	int test,n,start,end;
	
	//pair<int,int> kingdom;
	vector< pair<int,int>> limits;

	cin>>test;
	while(test--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>start>>end;
			limits.push_back(make_pair(start,end));
		}
		// for(vector<pair <int,int>>::const_iterator it=limits.begin();it!=limits.end();it++){
		// 	cout<<it->first<<endl;
		// }
		
	}
	return 0;
}