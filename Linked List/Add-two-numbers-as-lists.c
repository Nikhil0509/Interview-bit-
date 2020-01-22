//https://www.interviewbit.com/problems/add-two-numbers-as-lists/
 typedef struct ListNode listnode;
 listnode *resultant(listnode *start,int data)
 {
     listnode *tmp=(listnode *)malloc(sizeof(listnode)),*p;
     tmp->val=data;
     tmp->next=NULL;
     if(start==NULL)
     {
         start=tmp;
         p=start;
         return start;
     }
     p->next=tmp;
     p=p->next;
     return start;
 }
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    listnode *p=A,*q=B,*C=NULL;
    int x=0,y=0,sum,rem;
    while(p!=NULL)
    {
        x=10*x + p->val;
        p=p->next;
    }
    while(q!=NULL)
    {
        y=10*y + q->val;
        q=q->next;
    }
    sum=x+y;
    while(sum!=0)
    {
        rem=sum%10;
        C=resultant(C,rem);
        sum=sum/10;
    }
    return C;
}
