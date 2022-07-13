#include<iostream>

using namespace std;


bool isprime(int x, int y){
    if(x == 1 || y == 1){
        return false;
    }

    while(1){
        int t = x % y;
        if(t == 0){
            break;
        }else{
            x = y;
            y = t;
        }
    }
    if(y > 1){
        return false;
    }else{
        return true;
    }
}

void solution(int n, int m)
{
    int count = 0;
    for(int i = n; i<m; i++){
        for(int j = i+1; j<m;j++)        {
            for(int k = j+1; k < m; k++){
                if(isprime(i,j)&&isprime(j,k)&&isprime(i,k)){
                    if(i*i + j*j == k*k){
                        count++;
                        cout<<i<<'\t'<<j<<'\t'<<k<<endl;
                    }
                }
            }
        }
    }
    if(count == 0)cout<<"No Res"<<endl;


}



int main(int argc, char* argv[]){
    int m = 1;
    int n = 20;
    solution(m, n);
}

