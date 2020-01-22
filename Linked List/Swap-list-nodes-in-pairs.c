//https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/
listnode* swapPairs(listnode* A) {
    listnode* curr=A;
    listnode* prev=NULL;
    listnode* next;
    listnode* temp=curr;
    listnode* temp2=curr;
    int count=1;
    int j=1;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        if((count%2)==0 && j==1)
        {
            A=prev;
            j=0;
            temp2=curr;
        }
        else if((count%2)==0)
        {
            temp->next=prev;
            temp=temp2;
            temp2=curr;
            temp->next=NULL;   
        }
        count++;
    }
        if(count%2==0)
        {
        temp->next=prev;
        temp2->next=curr;
        }
    return A;
}
