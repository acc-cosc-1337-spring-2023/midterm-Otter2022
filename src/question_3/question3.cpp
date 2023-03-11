#include "question3.h"

bool test_config()
{
    return true;
}

bool is_prime(int num)
{  
    for(int i = 2; i < num; i++)
    {
        if((num%i)==0){
            return(false);
        }
    }
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> primes;
    for(int i=2;i<=num;i++){
        if(is_prime(i)){
            primes.push_back(i);
        }
    }
    return(primes);
}