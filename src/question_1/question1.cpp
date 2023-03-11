#include "question1.h"

bool test_config()
{
    return true;
}

string reverse_string(string str){
    int length = str.size();
    string reverse = str;
    int counter = 0;
    for (int i = (length-1); i >= 0; i--){
        reverse[counter] = str[i];
        counter++;
    }
    return reverse;
}

int getPowerOfTwo(int pow)
{
    if(pow == 0){
        return(1);
    }
    int sum = 1;
    for(int i = pow; i > 0; i--)
    {
        sum = sum * 2;
    }
    return(sum);
}

int binary_to_decimal(string binStr)
{
    binStr = reverse_string(binStr);
    int length = binStr.size();
    int sum = 0;
    for (int i = length-1; i >= 0; i--)
    {
        if(binStr[i]=='1')
        {
            sum += getPowerOfTwo(i);
        }    
    }
    return(sum);
}

bool checkFor1and0(string binStr){
    bool cont = true;
    for(int i = binStr.size()-1; i >= 0; i--){
        if(binStr[i] == '0' || binStr[i] == '1'){
            cont = true;
        } else {
            return(false);
        }
    }
    return(true);
}