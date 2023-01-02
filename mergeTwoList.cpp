class Solution {
public:
    static void mergeTwoLists(Node* list1, Node* list2)
    {
        Node* head = new Node;
        Node* temp = head;

        while(list1&&list2 )
        {
            if(list1->data < list2->data)
            {
                temp->next = list1;
                list1 = list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if(list1 != nullptr)
        {
            temp->next = list1;
            temp = temp->next;
            list1 = list1->next;
        }
        if(list2 != nullptr)
        {
            temp->next = list2;
            temp = temp->next;
            list2 = list2->next;
        }
        head = head->next;
        printNode(head);
    }
};

int main()
{
    Node* head1 = new Node; head1->data = 1; head1->next = nullptr;
    Node* head2 = new Node;head2->data = 3; head2->next = nullptr;

    append(head1,2); append(head1,4);
    append(head2,5);

    Solution::mergeTwoLists(head1,head2);

    return 0;
}
