//https://www.interviewbit.com/problems/reorder-list/
listnode* reorderList(listnode* A) {
   if(!A)
   {
       return NULL;
   }
   if(A->next==NULL )
   return A;
   
   listnode *p=A;
   listnode *q=A;
   while(q->next && q->next->next)
   {
       p=p->next;
       q=q->next->next;
   }
   q=p->next;
   listnode *curr=q;
   listnode *next,*prev=NULL;
   while(curr!=NULL)
   {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
   }
   q=prev;
  // p->next=NULL;
   p=A;
  
   listnode *temp;
   while(p!=NULL && q!=NULL)
   {
      p->next=q;
      temp=q;
      temp->next=p->next;
       p=p->next;
       q=q->next;
   }
   return A;
}
