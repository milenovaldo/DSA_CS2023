/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/

#include <iostream>
#include "headers/stonks.h"

using namespace std;


int main(void){

    // Stock stock_list[] = {};
    // int list_index = 0;

    while(1){
        cout <<
        "Welcome to the Stonks program.\n" << 
        "1) Enter a new stonk.\n" <<
        "2) Find LIFO and FIFO price of a stonk.\n" <<
        "Select an option: ";

        int selection;
        cin >> selection;

        if (selection == 1){
            // new_stock();
            add_node();
        }else if(selection == 2){
            current_pointer = head;
            while(current_pointer != NULL){
                cout << "[" << "|" << current_pointer->next << "]----->";
                current_pointer = current_pointer->next;
            }
            cout << "NULL" << endl;
        }else{
            cout << "Invalid selection" << endl;
        }
        
    }
    return 0;
}