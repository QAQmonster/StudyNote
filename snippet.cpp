/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* recursion(ListNode* before,ListNode* pHead){
        if(pHead->next!=NULL){
            ListNode* p=recursion(pHead, pHead->next);
            pHead->next=&(*before);
            return p;
        }
        else{
            pHead->next=&(*before);
            return pHead;
        }
    }
    
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL||pHead->next==NULL)
            return pHead;
        else{
        ListNode* list=recursion(NULL,pHead);
        return list;
        }
    }
};