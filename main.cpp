#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList* list = new LinkedList();
    list->build_list();
    list->display_list();
    int sum = list->sum_all_nodes();
    cout << "the iterative sum is: " << sum << '\n';
    int sumR = list->sum_all_nodes_r_client();
    cout << "the recursive sum is: " << sumR << '\n';
    list->remove_all_nodes();
    list->display_list();

    return 0;
}