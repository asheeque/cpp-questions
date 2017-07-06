Node* InsertNth(Node *head, int data, int position)
{Node* temp=new Node;
 temp->data=data;
 temp->next=NULL;
 
 if(head==NULL){
     head=temp;
     return head;
 }
 Node* p;
 if(position==0){
   p=temp;
 p->next=head;
 return p;
 }
 else{
        p=head;
        for(int i=0;i<(position-1);i++)
            {p=p->next;}
      temp->next=p->next;
     p->next=temp;
     
     return head;
 
     } 
 
 
 
 
  // Complete this method only
  // Do not write main function. 
}