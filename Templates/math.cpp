#include <bits/stdc++.h>

using namespace std;

#define um unordered_map
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

template <typename T>
bool checkPrime(T n){
    //add sieve later
    for(T i = 2; i < sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
template <typename T>
vector<T> primes(T n){
    vector<T> ret;
    bool prime[n+1];
    T i = 2;
    while(i * i <= n){
        if(prime[i] == false){
            ret.push_back(i);
            for(int j = i * i; j <= n; j+=i)
                prime[j] = true;
        }
        i++;
    }
    while(i < n+1){
        if(!prime[i])
            ret.push_back(i);

        i++;
    }
    return ret;
}

int main(){
    
    return 0;
}