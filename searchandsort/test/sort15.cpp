#include<iostream>
using namespace std;

const int MAX = 1000;

struct Runner{
    int id;
    int timeinsec;
};

int tosec(int h,int m,int s){
    return h * 3600 + m * 60 + s;
}

bool isval(int id,int h,int m,int s){
    if(id<1||id>1000)return false;
    if(h<8||h>15||m<0||m>59||s<0||s>59)return false;

    int sec = tosec(h,m,s);
    return sec>=8 * 3600 && sec<= 15 * 3600 + 59 * 60 + 59;
}

int main(){
    Runner runners[MAX];
    int n = 0;
    while(true){
        int id,h,m,s;
        cin>>id>>h>>m>>s;
        if(id == 0 && h == 0 && m == 0 && s == 0)break;
        if(n<MAX && isval(id,h,m,s)){
            runners[n].id = id;
            runners[n].timeinsec = tosec(h,m,s);
            n++;
        }
    }
    for(int i = 0 ; i < n -1 ;i++){
        for(int j = 0 ; j <n-i-1;j++){
            if(runners[j].timeinsec > runners[j+1].timeinsec ){
                Runner tmp = runners[j];
                runners[j] = runners[j+1];
                runners[j+1] = tmp;
                
            }
        }
    }

    for(int i =0  ; i<n;i++){
        cout<<runners[i].id;
        if(i<n-1)cout<<" ";
    }
}