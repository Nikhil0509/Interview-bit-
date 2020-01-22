//https://www.interviewbit.com/problems/k-reverse-linked-list/
listnode* reverseList(listnode* A, int B) {
    listnode* curr=A;
    listnode* prev=NULL;
    listnode* next;
    listnode* temp;
    listnode* temp2;
    int count=1;
    int j=1;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        if((count%B)==0 && j==1)
        {
            A=prev;
            j=0;
            temp2=curr;
        }
        else if((count%B)==0)
        {
            temp->next=prev;
            temp=temp2;
            temp2=curr;
            temp->next=NULL;   
        }
        count++;
    }
    return A;
}
