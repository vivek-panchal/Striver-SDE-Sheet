Node *Middle(Node *head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node* slow=head;
    Node* fast= head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow = slow-> next;
    }
    return slow;
    
}
Node *findMiddle(Node *head) {
    return Middle(head);
}
