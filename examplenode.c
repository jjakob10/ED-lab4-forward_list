

/*
#include <stdio.h>

#include "forward_list.h"

void print_int(int data)
{
    printf("%d", data);
}

int main()
{
    data_type d = 1;
    Node *n = node_construct(d, NULL);
    printf("1: %d\n", n->value);
    node_destroy(n);

    Node *n1, *n2, *n3;
    n3 = node_construct((data_type)3, NULL);
    n2 = node_construct((data_type)2, n3);
    n1 = node_construct((data_type)1, n2);
    printf("2: %d %d %d\n", n1->value, n1->next->value, n1->next->next->value);
    node_destroy(n1->next->next);
    node_destroy(n1->next);
    node_destroy(n1);

    Node *temp;
    int i;
    for (n = NULL, i = 10; i > 0; i--)
    {
        n = node_construct((data_type)i, n);
    }

    Node *n_last = n;
    printf("3: ");
    for (i = 10; i > 0; i--)
    {
        printf("%d ", n_last->value);
        temp = n_last;
        n_last = n_last->next;
        node_destroy(temp);
    }
    printf("\n");
    return 0;
}
*/
// int main()
// {
//     int n, val;

//     ForwardList *l = forward_list_construct();

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &val);
//         forward_list_push_front(l, val);
//     }

//     // test the size and print functions
//     printf("Size: %d\n", forward_list_size(l));
//     printf("Lista: ");
//     forward_list_print(l, print_int);
//     printf("\n");

//     // test the destroy function
//     forward_list_destroy(l);

//     return 0;
// }