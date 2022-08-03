void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    LinkedListNode<int>* temp =node->next;
    //store the data of temp as node->data
    //and make node->next=temp->next;
    node->data =temp->data;
    node->next =temp->next;
    
    //delete temp from memory
    temp->next=NULL;
    delete temp;
}
