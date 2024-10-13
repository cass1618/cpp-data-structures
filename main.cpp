#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList* list = new LinkedList();
    list->build_list();
    list->display_list();

    return 0;
}