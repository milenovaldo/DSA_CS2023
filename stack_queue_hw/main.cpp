/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/

#include <iostream>
#include "headers/stonks.h"
#include "headers/easyio.h"

using namespace std;

int main(void){

    Stock stock_list[] = {};
    int list_index = 0;

    while(1){
        cout <<
        "Welcome to the Stonks program.\n" << 
        "1) Enter a new stonk.\n" <<
        "2) Find LIFO and FIFO price of a stonk.\n" <<
        "Select an option: ";

        int selection = scan<int>();

        if (selection == 1){
            stock_list[list_index] = new_stock();
        }else if(selection == 2){
            return;
        }else{
            print("Invalid selection");
        }
    return 0;
    }
    
}