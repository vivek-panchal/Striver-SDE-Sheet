 LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
        LinkedListNode<int>* start = new LinkedListNode<int>(1);
        start->next=head;
        LinkedListNode<int>* fast=start;
        LinkedListNode<int>* slow = start;
        
        if(head==NULL || K==0)
            return head;
    
        for(int i=1; i<=K;++i){
            fast=fast->next;
        }
        
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;
        return start->next;
    
}
