#include <cstring>
#include <cctype>
#include <iostream>
#include <cstdlib>

struct node
{
    int data;
    node* next;
};

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void build_list();
        void display_list();
        int sum_all_nodes();
        int sum_all_nodes_r_client();
        int remove_all_nodes();

    private:
        node* head;
        int sum_all_nodes_recursive(node* head);
};