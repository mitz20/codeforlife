#include<stdio.h>
struct treeNode{
    int maxSum;
    struct treeNode *left,*right;
}
int main(){
    int arr=[1,2,3,4,5,6,7];
    buildSegTree(arr,7);
}
void buildSegTree(int *arr,int len){
    struct treeNode *newNode=null;
    newNode = (struct newNode *)malloc(sizeof(struct newNode));
}
