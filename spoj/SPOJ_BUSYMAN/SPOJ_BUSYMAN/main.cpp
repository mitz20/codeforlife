//
//  main.cpp
//  SPOJ_BUSYMAN
//
//  Created by amit verma on 16/01/17.
//  Copyright © 2017 amit verma. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t,start,end,taskCount;
    vector <pair<int,int>> tasks;
    vector <pair<int,int>>::iterator it;
    cin>>t;
    while(t--){
        cin>>taskCount;
        for(int i=0;i<taskCount;i++){
            cin>>start>>end;
            tasks.push_back(make_pair(start, end));
        }
        for(it=tasks.begin();it!=tasks.end();it++){
            cout<<it->first<<" "<<it->second<<endl;
        }
        
    }
    return 0;
}
