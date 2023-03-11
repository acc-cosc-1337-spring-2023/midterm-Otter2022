#include"question4.h"

int main()
{
    string userInput;
    string cont = "y";
    while(cont == "y" || cont == "Y"){
        bool palindrome;
        cout<<"Enter a string to see if it is a palindrome: "<<"\n";
        cin>>userInput;
        palindrome = is_palindrome(userInput);
        if(palindrome){
            cout<<"true"<<"\n";
        } else {
            cout<<"false"<<"\n";
        }
        cout<<"If you would like to continue enter Y or enter anything else to exit: "<<"\n";
        cin>>cont;     
    }
    
    return 0;
}