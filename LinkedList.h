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

    private:
        node* head;
};