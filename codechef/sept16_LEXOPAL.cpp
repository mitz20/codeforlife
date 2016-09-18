#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t,hlen,len,i;
    char str[12346];
    cin>>t;
    while(t--){
        cin>>str;
        len = strlen(str)-1;
        hlen=len/2;
        for ( i = 0 ; i <= hlen ; i++){
            if(str[i]!=str[len-i]){
                if(str[i]!='.' && str[len-i]!='.')
                    break;
                else if(str[i]=='.')
                    str[i]=str[len-i];
                else if(str[len-i]=='.')
                    str[len-i]=str[i];
            }
            else if(str[i]=='.'){
                str[i]=str[len-i]='a';
            }
        }
        if(i>hlen)
            cout<<str<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
