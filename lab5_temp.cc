/* 
 *        File: lab5_temp.cc
 *        Name: Brayden Birt
 *        Lab#: 111
 * Description: Lab 4 example code, fixed by adding a break statement and adding my own win condition
 *        Date: 02/15/23
*/ 

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    //initialize vaiables
    double temp;
    double high_temp;
    double low_temp = 9999; //high value solves problem of garbage being a large negative number

    do{ //using do-while because we are going to enter at least 1 value
        cin >> temp;

        if (temp > high_temp){//If temperature is higher than the highest temperature update the value of high temp
            high_temp = temp;
        } 
        if (temp < low_temp && temp != -100){ //If temperature is lower than the lowest temperature update the value of low temp
            low_temp = temp;
        }


    } while(temp != -100); //stop loop if sentinel value is entered

    cout << "The highest tempature recorded was :" << high_temp << endl;
    cout << "The lowest tempature recorded was :" << low_temp << endl;



return 0;
}