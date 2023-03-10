#include "question1.h"
#include<iostream>
using std::cin;
using std::cout;

int main()
{   
    string userInput;
    cout<<"Enter a 8 character string that only contains 1's and 0's or enter E to exit"<<"\n";
    cin>>userInput;
    while(userInput != "E")
    {
        if(userInput.size() != 8){
            cout<<"invalid input!!!"<<"\n";
            cout<<"Enter a 8 character string that only contains 1's and 0's or enter E to exit"<<"\n";
            cin>>userInput;
        } else if (!checkFor1and0(userInput)){
            cout<<"invalid input!!!"<<"\n";
            cout<<"Enter a 8 character string that only contains 1's and 0's or enter E to exit"<<"\n";
            cin>>userInput;
        } else {
            cout<<"The int value of the binary string is: "<<binary_to_decimal(userInput)<<"\n";
        }
        cout<<"Enter a 8 character string that only contains 1's and 0's or enter E to exit"<<"\n";
        cin>>userInput;
    }
    return 0;
}