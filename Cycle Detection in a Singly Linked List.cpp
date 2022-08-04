bool detectCycle(Node *head)
{
	//	Write your code here
    if ( head==NULL|| head->next==NULL){
            return false;  
        }
        Node* fast=head;
        Node* slow=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            slow=slow->next;
            if(slow==fast)
                return true;     
        }
        return false;
}
