/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/
#include <iostream>
#include "easyio.h"

using namespace std;

class Stock{
    public:
        string stock_name;
        int number_of_shares;
        float individual_stock_price;

    Stock(string name, int no_of_shares, float i_stock_price){
        string stock_name;
        int number_of_shares;
        float individual_stock_price;
    }
};

struct Node{
    Stock item;
    Node* next;
};

Stock new_stock(){
    cout << "Enter the stock name: ";
    string stockname = scan<string>();
    
    cout << "Enter number of shares: ";
    int numberOfShares = scan<int>();
    
    cout << "Enter individual stock price";
    float stockPrice = scan<float>();
    
    Stock new_one(stockname, numberOfShares, stockPrice);

    return new_one;
}