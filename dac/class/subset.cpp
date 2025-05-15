#include<iostream>
using namespace std;

int A[] = {6,7,8,9,10};

void print_sol(int x[],int n){
    for(int i = 1;i<=n;i++){
        if(x[i] == 1){
            printf("%d",A[i-1]);
        }
        
    }
    printf("\n");
}



void subset1(int x[],int l,int r){
    if(l == r){
        print_sol(x,r);
    }else{
        x[l+1] = 1;
        subset1(x,l+1,r);
        x[l+1] = 0;
        subset1(x,l+1,r);
    }
}



int main(){
    int n = 5;
    int x[n+1];
    subset1(x,0,n);
    return 0;
}