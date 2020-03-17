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

    int stock_current_index = 0;

    while(1){
        cout <<
        "1) Enter a new stonk.\n" <<
        "2) Find LIFO and FIFO price of a stonk.\n" <<
        "Select an option: ";

        int selection;
        cin >> selection;

        if (selection == 1){
            string stock_name, stock_purchased, stock_price;
            if(stock_current_index == 0){
                cout << 
                "Adding new stocks. \n" <<
                "Enter stock name: ";
                cin >> stock_name;
                head->item[0] = stock_name;
                cout << "Enter number of stocks purchased: ";
                cin >> stock_purchased;
                head->item[1] = stock_purchased;
                cout << "Enter stock price: ";
                cin >> stock_price;
                head->item[2] = stock_price;
                head->next = NULL;
                stock_list[0] = head;
                cout << stock_list[0]->item[2] << endl;
                stock_current_index++;
                cout << stock_current_index << endl;
            }else{
                cout << "Enter number of stocks purchased: ";
                cin >> stock_purchased;
                cout << "Enter stock price: ";
                cin >> stock_price;
                add_purchased_stonks(stock_list[stock_current_index - 1], stock_name, stock_purchased, stock_price, stock_current_index);
                stock_current_index += 1;
            }
        }else if(selection == 2){
            print_nodes();
        }else{
            cout << "Invalid selection" << endl;
        }
    }
    return 0;
}