#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,z_count,o_count,len;
    string digits;
    cin>>t;
    while(t--){
        //getline(cin,digits);
        cin>>digits;
        len = digits.size();
        z_count=o_count=0;
        for(int i=0;i<len;i++){
            if(digits[i]=='0')
                o_count++;
            else
                z_count++;
        }
        if(z_count==1||o_count==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
