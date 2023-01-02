class Solution {
public:
    void deleteDuplicates(Node* head)
    {
        Node* temp = new Node; Node* tempHead = head;
        while(head != nullptr)
        {
            temp = head->next;
            if(head->data == temp->data)
            {
                if(temp->next != nullptr) {head->next = temp->next;}
                else{
                    head->next = nullptr;
                }
            }
            head = head->next;
        }
        head = tempHead;
        printNode(head);
        std::cout<<"end"<<std::endl;
    }
};

int main()
{
    Node* head = new Node; head->data = 1; head->next = nullptr;
    append(head,2); append(head,2); append(head,3);append(head,3);
    Solution* solution = new Solution;
    solution->deleteDuplicates(head);
    delete(solution);
    return 0;
}
