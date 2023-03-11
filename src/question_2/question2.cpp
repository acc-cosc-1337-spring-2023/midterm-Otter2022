#include "question2.h"

bool test_config()
{
    return true;
}


string decimal_to_hex(int decimal){
    string hex = "";
    do {
        int quotient = decimal % 16;
        if (decimal > 0) {
            decimal = decimal / 16;
        }
        switch (quotient)
        {
            case 0:
                hex.push_back('0');
                break;
            case 1:
                hex.push_back('1');
                break;
            case 2:
                hex.push_back('2');
                break;
            case 3:
                hex.push_back('3');
                break;
            case 4:
                hex.push_back('4');
                break;
            case 5:
                hex.push_back('5');
                break;
            case 6:
                hex.push_back('6');
                break;
            case 7:
                hex.push_back('7');
                break;
            case 8:
                hex.push_back('8');
                break;
            case 9:
                hex.push_back('9');
                break;
            case 10:
                hex.push_back('A');
                break;
            case 11:
                hex.push_back('B');
                break;
            case 12:
                hex.push_back('C');
                break;
            case 13:
                hex.push_back('D');
                break;
            case 14:
                hex.push_back('E');
                break;
            case 15:
                hex.push_back('F');
                break;
        }
    } while(decimal > 0);
    return(hex);
}