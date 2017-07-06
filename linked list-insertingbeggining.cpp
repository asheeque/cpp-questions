/*
  Insert Node at the begining of a linked list
  

  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{Node* temp=new Node;
 temp->data=data;
 temp->next=NULL;
 
 if(head==NULL)
 {
     head=temp;
     return head;
 }
 Node* p;
 p=temp;
 p->next=head;
 return p;
 

}