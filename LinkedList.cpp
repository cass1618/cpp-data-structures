#include  "LinkedList.h"

using namespace std;
        
LinkedList::LinkedList() 
{
    head = nullptr;
}
        
LinkedList::~LinkedList() 
{

}

// build a list of random integers
void LinkedList::build_list()
{
    srand (time(NULL));
    int number_of_nodes = rand() % 20;
    if (number_of_nodes < 8) number_of_nodes +=8;
    for (int i = 0; i <= number_of_nodes; ++i) 
    {
        node* new_node = new node();
        new_node->data = rand() % 103;
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