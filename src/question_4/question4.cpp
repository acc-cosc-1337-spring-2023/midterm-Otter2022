#include "question4.h"

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

bool is_palindrome(const string &str)
{
    string reversed = reverse_string(str);
    return(reversed == str);
}