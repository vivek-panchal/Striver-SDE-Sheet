/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* curr,LinkedListNode<int>* prev){
        // base case 
        if(curr==NULL){
           // head ko previous per point kra do
            head=prev;
            return;
        }
        LinkedListNode<int>* temp=curr->next;
        reverse(head,temp,curr);
        curr->next=prev;
    }
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head){
    // curr ko head per point kra diya   
        LinkedListNode<int>* curr=head; 
        // previous ko NULL per point kra do
        LinkedListNode<int>* prev=NULL;
        reverse(head,curr,prev);
        
        return head;

}
