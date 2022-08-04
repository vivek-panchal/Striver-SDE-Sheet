Node *startingNode(Node* head,Node *slow,Node *fast){
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
    }
Node *firstNode(Node *head)
{
	//    Write your code here.
    if ( head==NULL|| head->next==NULL){
            return NULL;  
        }
        Node* fast=head;
        Node* slow=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            slow=slow->next;
            if(slow==fast){
                //cycle is present find starting point
                return startingNode(head,slow,fast);
            }          
        }
        return NULL;
}
