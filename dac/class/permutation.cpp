#include<iostream>
using namespace std;


void swap(int *x,int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void print(int x[],int n){
    for(int i =1;i<=n;i++){
        printf("%d",x[i]);
    }
    printf("\n");
}

void permute(int x[],int l,int r){
    if(l==r){
        print(x,r);
    }else{
        for(int i = l;i<=r;i++){
            swap(&x[l],&x[i]);
            permute(x,l+1,r);
            swap(&x[l],&x[i]);
        }
    }
}






int main(){
    int n = 3,i;
    int x[n+1];
    for(int i =1;i<=n;i++){
        x[i] = i;
    }
    permute(x,1,n);
    return 0;
}