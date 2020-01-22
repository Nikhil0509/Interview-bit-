//https://www.interviewbit.com/problems/list-cycle/
listnode* detectCycle(listnode* a) {
    if(a==NULL ||a->next==NULL)
    return NULL;
    listnode* slow=a;
    listnode* fast=a;
    while(slow!=NULL && fast!=NULL)
    {
        slow=slow->next;
        if(fast->next==NULL)
            return NULL;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow==NULL ||fast==NULL)
        return NULL;
    listnode* curr=a;
    while(curr!=slow)
    {
        curr=curr->next;
        slow=slow->next;
    }
    return curr;
}
