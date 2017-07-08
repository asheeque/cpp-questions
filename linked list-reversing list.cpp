Node* Reverse(Node *head)
{int i,j;
 i=0;
  Node *p,*q,*r;
    p=head;
 if(head==NULL)
 {
     return head;
 }
   else{
       p=head;
       q=head;
    while(p->next!=NULL)
    {
        p=p->next;
        i++;
    }
       r=p;
       p=head;
       
      while(i>0)
      {
          for(j=0;j<(i-1);j++)
          {
              p=p->next;
              q=q->next;
          }
          p=p->next;
          p->next=q;
          i--;
          p=head;q=head;
      }
    p=head;
       p->next=NULL;
        
    }
 
 return r;
  }