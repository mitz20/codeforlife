#include<iostream>

using namespace std;

int main(){
    int t,cookie,n,done;
    int score[];
    int type[][6];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>score[i];
            for(int j=0;j<score[i];j++){
                cin>>cookie;
                type[i][cookie]++;
            }
            done=0;
            while(!done){

                for(k=0;k<6;k++){
                    if(type[i][k]
                }
            }
        }
    }
}
