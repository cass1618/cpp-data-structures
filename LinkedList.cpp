#include  "LinkedList.h"

using namespace std;
        
LinkedList::LinkedList() 
{
    head = nullptr;
}
        
LinkedList::~LinkedList() 
{
    remove_all_nodes();
}

// build a list of random integers
void LinkedList::build_list()
{
    srand(1);
    int number_of_nodes = rand() % 10 + 10;
    for (int i = 0; i <= number_of_nodes; ++i) 
    {
        node* new_node = new node();
        new_node->data = rand() % 99;
        new_node->next = head;
        head = new_node;
    }
}

// display list of integers stored in linked list
void LinkedList::display_list()
{
    node* current = head;
    while(current)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl << endl;
}

// return total sum of all ints stored in the list
int LinkedList::sum_all_nodes()
{
    node* current = head;
    int sum = 0;
    while(current)
    {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

int LinkedList::sum_all_nodes_recursive(node* current)
{
    if(!current) return 0;
    int current_value = current->data;
    return sum_all_nodes_recursive(current->next) + current_value;
}

int LinkedList::sum_all_nodes_r_client()
{
    node* current = head;
    int sum = sum_all_nodes_recursive(current);
    return sum;
}

int LinkedList::remove_all_nodes()
{
    node* current = head;
    while(current)
    {
        head = head->next;
        delete current;
        current = head;
    }
    return 1;
}