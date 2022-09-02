/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
//                     IF ANY LIST IS EMPTY
                    if(list1==NULL) return list2;
                    if(list2==NULL) return list1;
        
//                  if List 1 node is greater than list2 then swap ALWAYS KEEP LIST1 SMALL
                    if(list1->val > list2->val) std::swap(list1,list2);
        
//                  CREATE A NODE TO REMEMBER THE HEAD
                    ListNode *res = list1;

//                  ITERATE
                    while(list1!=NULL and list2!=NULL)
                    {
                        ListNode *temp = NULL;
                        while(list1!=NULL && list1->val <= list2->val)
                        {
                            temp = list1;
                            list1 = list1->next;
                        }
                        temp->next = list2;
                        std::swap(list1 , list2);
                        
                    }
                    return res;
        
                    
    }
};
