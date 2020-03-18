/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/

#include <iostream>
#include <sstream>

using namespace std;

struct Node{
    string item[3];
    Node* next;
};

Node* current_pointer = NULL;
Node* head = new Node;

Node* stock_list[] = {};

Node* add_purchased_stonks(Node* node_to_append, string stock_name, string no_of_stocks, string stock_price, int curr_index){
    Node* new_node = new Node;

    new_node->item[0] = stock_name;
    new_node->item[1] = no_of_stocks;
    new_node->item[2] = stock_price;
    node_to_append->next = new_node;
    new_node->next = NULL;
    stock_list[curr_index] = new_node;

    return new_node;
}

int count_nodes(void){
    current_pointer = head;
    int counter = 0;
    while(current_pointer != NULL){
        cout << "[" << current_pointer->item[2] << "|" << current_pointer->next << "]----->";
        current_pointer = current_pointer->next;
        counter++;
    }
    cout << "NULL" << endl;
    current_pointer = head;
    return counter;
}

float fifo_lifo_accounting(int number_of_shares){
    
    int max_count = count_nodes();
    int noOfPurchase[max_count] = {};
    double price[max_count] = {};
    string purchases;
    string prices;

    int shares_to_calculate = number_of_shares;

    for(int index = 0; index < max_count; index++){ //Change to for loop

        cout << index << endl;

        purchases = stock_list[index]->item[1];
        prices = stock_list[index]->item[2];
        
        /* convert purchases string to integer */
        stringstream purchaseToConvert(purchases);
        int convertedPurchase = 0;
        purchaseToConvert >> convertedPurchase;
        
        /* Converts prices string to float */
        stringstream priceToConvert(prices);
        float convertedPrice = 0.0;
        priceToConvert >> convertedPrice;
        
        noOfPurchase[index] = convertedPurchase;
        price[index] = convertedPrice;

    }

    double total_price = 0;
    int to_divide = number_of_shares;
    int index = 0;
    
    while(shares_to_calculate != 0){
        if(noOfPurchase[index] > shares_to_calculate){
            total_price = total_price + (shares_to_calculate * price[index]);
            return total_price/to_divide;
        }else{
            total_price = total_price + (noOfPurchase[index] * price[index]);
            shares_to_calculate = shares_to_calculate - noOfPurchase[index];
            index++;
        }
    }
}
