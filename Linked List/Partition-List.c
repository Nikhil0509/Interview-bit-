//https://www.interviewbit.com/problems/partition-list/
listnode* partition(listnode* A, int B) {
    if(A==NULL || A->next ==NULL)return A;
    listnode *prev = NULL;
    listnode *temp = A;
    listnode *store = NULL;
    listnode *next = NULL;
    while(temp->next!=NULL)
    {
        if(temp->val>=B)
        {
            store = prev;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    while(temp->next!=NULL)
    {
        if(temp->next->val<B)
        {
            prev = temp->next;
            temp->next = temp->next->next;
            if(store ==NULL)
            {
                next = A;
                A  = prev;
                prev->next = next;
                store = A;
                continue;
            }
            next = store->next;
            store->next = prev;
            prev->next = next;
            store = store->next;
            continue;
        }
        temp = temp->next;
    }
    return A;
}
