// list ka size nikal liya 
    int size(Node*h){
        int l =0;
        while(h){
            l++;
            h = h->next;
        }
        return l;
    }
Node *rotate(Node *head, int k) {
     int length=size(head);
        if(head==NULL || head->next==NULL || k==0|| k%length==0)
            return head;
    
        // k length se bda ho sakta hai isiliye % kiya
        k=k%length;
        
        Node*prev=NULL;
        Node*curr=head;
        
        int t=length-k;
        while(t--){
            prev=curr;
            curr=curr->next; 
        }
        prev->next=NULL;
        //tail banao and use head per join kar do
        Node* tail=curr;
        while (tail->next !=NULL){
            tail=tail->next;
        }
        tail->next=head;
        return curr;
}
