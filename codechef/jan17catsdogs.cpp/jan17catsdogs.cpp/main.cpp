//
//  main.cpp
//  jan17catsdogs.cpp
//
//  Created by amit verma on 11/01/17.
//  Copyright © 2017 amit verma. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int c,d,l,t,maxx;
    cin>>t;
    while(t--){
        cin>>c>>d>>l;
        maxx=(c>d)?c:d;
        if( (l%4==0) && (l<=4*(c+d)) && (l>=(4*maxx)) ){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
