#include"question2.h"


int main()
{
    int decimal;
    string cont = "y";
    while(cont == "y" || cont == "Y"){
        string hex;
        cout<<"Enter a integer within a range of 1 to 512: "<<"\n";
        cin>>decimal;
        while(!(decimal >= 1 && decimal <= 512)){
            cout<<"Invalid Input!!!"<<"\n";
            cout<<"Enter a integer within a range of 1 to 512: "<<"\n";
            cin>>decimal;
        }
        hex = decimal_to_hex(decimal);
        cout<<"The decimal as a hex is "<<hex<<"\n";
        cout<<"If you would like to continue enter Y or enter anything else to exit: "<<"\n";
        cin>>cont;     
    }
    
    return 0;
}