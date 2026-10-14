#include <bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int checkPrime(int n){
    // make a vector of n+1 size and mark all number as true
    // why we make n+1 becoz there is zero as well
    vector<bool>ans(n+1,true);
    // marking 0 and 1 as non prime 
    ans[0]=ans[1]= false;
    int cnt = 0;
    for(int i=2;i<n+1;i++){
        if(prime(i)){
            cnt++;
            ans[i]=false;
            for(int j=2*i;j<ans.size();j+=i){
                ans[j] = false;
            }
        }
    }
    return cnt;
}
int main(){

    // starting with the basic concept that is sieve of eratothenes theorem 

    // steps 
    // 1. make a vector contains all the number from 0 t0 n 
    // 2. check prime if any one numbe is prime then make sure that multiple of that number should be mark as non prime 

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int ans = checkPrime(n);
    cout << ans;

}