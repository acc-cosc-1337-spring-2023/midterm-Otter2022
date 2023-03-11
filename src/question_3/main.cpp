#include "question3.h"
#include<string>

using std::string;

int main()
{
    int userInput;
    string cont = "y";
    while(cont == "y" || cont == "Y"){
        vector<int> primes;
        cout<<"Enter a integer within a range of 1 to 60: "<<"\n";
        cin>>userInput;
        while(!(userInput >= 1 && userInput <= 60)){
            cout<<"Invalid Input!!!"<<"\n";
            cout<<"Enter a integer within a range of 1 to 60: "<<"\n";
            cin>>userInput;
        }
        primes = get_primes(userInput);
        cout<<"The prime numbers are: "<<"\n";
        if(primes.size() == 0){
            cout<<"there are no primes";
        } else {
            for(int i = 0; i < primes.size(); i++){
                cout<<primes[i]<<" ";
            }
        }
        cout<<"\n";
        cout<<"If you would like to continue enter Y or enter anything else to exit: "<<"\n";
        cin>>cont;     
    }
    
    return 0;
}