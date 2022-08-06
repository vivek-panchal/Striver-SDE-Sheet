void insertAtTail(LinkedListNode<int>* &head, LinkedListNode<int>* &tail, int dataa){

    LinkedListNode<int>* newNode = new LinkedListNode<int>(dataa);
    
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Step1 - create clone list
    
    LinkedListNode<int>* cloneHead = NULL;
    LinkedListNode<int>* cloneTail = NULL;
    
    LinkedListNode<int>* temp = head;
    
    while(temp!=NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
    
    // step2 - Add cloneNodes in between of original list
    LinkedListNode<int>* originalNode = head;
    LinkedListNode<int>* cloneNode = cloneHead;
    
    while(originalNode!=NULL && cloneNode!=NULL){
        LinkedListNode<int>* next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;
        
        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
        
    }
    
    // step3 - copy random pointer
    temp = head;
    
    while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->random = temp->random ? temp->random->next : temp->random;
        }
        temp = temp->next->next;
    }
    
    // step4 - revert step2
    originalNode = head;
    cloneNode = cloneHead;
    
    while(originalNode!=NULL && cloneNode!=NULL){
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;
        if(originalNode!=NULL){
           cloneNode->next = originalNode->next; 
        }
        cloneNode = cloneNode->next;
    }
    
    // step5 - return ans;
    
    return cloneHead;
}
