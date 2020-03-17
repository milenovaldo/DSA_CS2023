/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/
#include <iostream>

using namespace std;

class Stock{
    public:
        string stock_name;
        int number_of_shares;
        double individual_stock_price;

    Stock(string name, int no_of_shares, float i_stock_price){
        stock_name = name;
        number_of_shares = no_of_shares;
        individual_stock_price = i_stock_price;
    }
};

Stock new_stock(){
    string stockname;
    cout << "Enter the stock name: ";
    cin >> stockname;
    
    int numberOfShares;
    cout << "Enter number of shares: ";
    cin >> numberOfShares;
    
    float stockPrice;
    cout << "Enter individual stock price: ";
    cin >> stockPrice;

    Stock to_add(stockname, numberOfShares, stockPrice);

    return to_add;
}

struct Node{
    Stock *item;
    Node* next;
};

Node* current_pointer = NULL;
Node* head = new Node;

Node* add_node(){
    if(current_pointer == NULL){
        head->item = &new_stock();
        head->next = NULL;
        current_pointer = head;
        return head;
    }else{
        while(current_pointer != NULL){
            current_pointer = current_pointer->next;
        }
        Node* new_node = new Node;
        new_node->item = &new_stock();
        new_node->next = NULL;
        current_pointer->next = new_node;
        return new_node;
    }
}
void print_nodes(void){
    current_pointer = head;
    while(current_pointer != NULL){
        cout << "[" << "|" << current_pointer->next << "]----->";
        current_pointer = current_pointer->next;
    }
    cout << "NULL" << endl;
}

int node_counter(){
    current_pointer = head;
    int counter = 0;
    while(current_pointer != NULL){
        counter++;
        current_pointer->next;
    }
    return counter;
}