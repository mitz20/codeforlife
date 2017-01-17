//
//  main.c
//  jan17catsdogs2.c
//
//  Created by amit verma on 11/01/17.
//  Copyright © 2017 amit verma. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t;
    long long int c,d,l,maxx;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld",&c,&d,&l);
        maxx=(c>d)?c:d;
        if((l%4==0) && (l>= 4*maxx) && (l<=4*(c+d))){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}
