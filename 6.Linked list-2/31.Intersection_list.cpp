/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node* findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    if(head1==head2) return head1;

    Node* temp1=head1,*temp2 =head2;

    while(temp1!=temp2)
    {
        if(temp1==NULL) temp1= head2;
        if(temp2==NULL) temp2 =head1;

        temp1 = temp1->next;
        temp2=temp2->next;

    }

    return temp1;
}
