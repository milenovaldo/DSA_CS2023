/*
Original authors: 
Mileno Valdo & Sunny Jovita
https://github.com/milenovaldo
https://github.com/sunnyjovita
*/

#include <iostream>
#include <string>

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



void print_nodes(void){
    current_pointer = head;
    while(current_pointer != NULL){
        cout << "[" << current_pointer->item[2] << "|" << current_pointer->next << "]----->";
        current_pointer = current_pointer->next;
    }
    cout << "NULL" << endl;
}