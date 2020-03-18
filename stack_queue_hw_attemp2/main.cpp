/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/

#include <iostream>
#include "headers/stonks.h" //includes the required headers

using namespace std;

/* Main program */
int main(void){

    int stock_current_index = 0;

    while(1){
        cout <<
        "CTRL + C to exit the program anytime (BIG WOW)\n" <<
        "1) Enter a new stonk.\n" <<
        "2) Find LIFO and FIFO price of the stock.\n" <<
        "Select an option: ";

        /* Asks for selection (Main menu) */
        int selection;
        cin >> selection;

        if (selection == 1){
            string stock_name, stock_purchased, stock_price;

            /* 
            This part of the program asks you to input a stock name once
            then you can add multiple different stock purchases for the specified stock
            */
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
                stock_current_index++;
            }else{
                cout << "Enter number of stocks purchased: ";
                cin >> stock_purchased;
                cout << "Enter stock price: ";
                cin >> stock_price;
                stock_list[stock_current_index] = add_purchased_stonks(stock_list[stock_current_index - 1], stock_name, stock_purchased, stock_price, stock_current_index);;
                stock_current_index += 1;
            }
        }else if(selection == 2){
            /*
            Selecting this option will call the fifo_lifo_accounting function from stonks.h
            which will calculate and print out the FIFO and LIFO results.
            */
            int shares;
            cout << "Enter number of shares to calculate: ";
            cin >> shares;
            fifo_lifo_accounting(shares);
        }else{
            cout << "Invalid selection" << endl; //Any other selection would be invalid
        }
    }
    return 0;
}