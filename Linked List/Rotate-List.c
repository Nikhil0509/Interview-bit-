//https://www.interviewbit.com/problems/rotate-list/
listnode* rotateRight(listnode* A, int B) {
 listnode *ptr=A;
 listnode *prev;
 listnode *p;
 int count=0;
 while(ptr!=NULL)
 {
     ptr=ptr->next;
     count++;
 }
 if(count==1||(B%count==0))
     return A;
    
    B=B%count;
 int i=1;
 ptr=A;
 while(i<=count-B)
 {
     prev=ptr;
     ptr=ptr->next;
     i++;
 }
 p=ptr;
 while(ptr->next!=NULL)
 {
     ptr=ptr->next;
 }
 prev->next=NULL;
 ptr->next=A;
 A=p;
 return A;
}
