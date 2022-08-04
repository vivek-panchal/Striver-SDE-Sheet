Node *addTwoNumbers(Node *l1, Node *l2)
{
    // ans naam ki new list bna li 
    Node*ans=new Node(-1);
    // ans ke head per temp point kar liya jisse insertion easy hoga
    Node*temp=ans;
    // carry ko initialise kra 
    int carry=0;
    
    // check for not both lisht should be null
    while(l1!=NULL || l2!=NULL || carry!=0)
    {
        int sum=0;
        
        // if L1 null nhi hai to sum me l1 ki node ka data add kar do
        if(l1!=NULL)
        {
            sum=sum+l1->data;
            l1=l1->next;
        }
        
        // if L2 null nhi hai to sum me l1 ki node ka data add kar do
        if(l2!=NULL)
        {
            sum=sum+l2->data;
            l2=l2->next;
        }
        
        // sum me carry dal do
        sum=sum+carry;
        // carry ko update kar do
        carry=sum/10;
        
        // insert sum%10 into ans because we always add unit digit , tens digit carry hoti hai
        Node*newnode=new Node(sum%10);
        
        // new node bna do
        temp->next=newnode;
        // temp ko aage badha do
        temp=temp->next;
    }
    return ans->next;
    
}
