/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/
#include <iostream>

using namespace std;

/*
Just to make short couts and cins easier
*/
template <typename T>
void print(T output){
    cout << output << endl;
} 

template <typename T>
T scan(void){
    T value_to_return;
    cin >> value_to_return;
    return value_to_return;
}