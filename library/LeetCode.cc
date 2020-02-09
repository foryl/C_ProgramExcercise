#include "LeetCode.h"
/*
* LeetCode Solution 234
*/
bool Solution::isPalindrome(ListNode* head)
{
    if(!head || !head->next)
        return 1;
    ListNode *fast = head, *slow = head;
    ListNode *p, *pre = NULL;
    while(fast && fast->next){
        p = slow;
        slow = slow->next;    //快慢遍历
        fast = fast->next->next;

        p->next = pre;  //翻转
        pre = p;
    }
    if(fast)  //奇数个节点时跳过中间节点
        slow = slow->next;

    while(p){       //前半部分和后半部分比较
        if(p->val != slow->val)
            return 0;
        p = p->next;
        slow = slow->next;
    }
    return 1;
}

/*
* 645. 错误的集合
*/
vector<int> Solution::findErrorNums(vector<int>& nums)
{
    map<int,int> numberMap;
    vector<int> result;
    for(vector<int>::iterator iter = nums.begin(); iter != nums.end();iter++) {
        numberMap[*iter] += 1; 
    }

    int missing = -1;
    int duplicate = -1;
    for(int i = 0; i < nums.size(); i++){
        if(numberMap[i+1] == 2) {
            duplicate = i+1;
        } 
        if(numberMap[i+1] == 0) {
            missing = i + 1;
        }   
        if(missing != -1 && duplicate != -1) {
            break;
        }
    }
    result.push_back(duplicate);
    result.push_back(missing);
    return result;
} 


/*
* 107. 二叉树的层次遍历 II
*/
vector<vector<int>> Solution::levelOrderBottom(TreeNode* root)
{
    vector<vector<int>> result;
    list<TreeNode> nodeList;
    list<TreeNode> tempNodeList;
    nodeList.push_back(*root);
    if (root == NULL) {
        return result;
    }
    while (!tempNodeList.empty() || !nodeList.empty()) {
        vector<int> levelTemp;
        while (!nodeList.empty()) {
            if (nodeList.front().left != NULL) {
                tempNodeList.push_back(*(nodeList.front().left));
            }
            if (nodeList.front().right != NULL) {
                tempNodeList.push_back(*(nodeList.front().right));
            }
            levelTemp.push_back(nodeList.front().val);
            nodeList.pop_front();
        }
        if (!levelTemp.empty()) {
            list<TreeNode>::iterator iter = tempNodeList.begin();
            nodeList.assign(tempNodeList.begin(), tempNodeList.end());
            tempNodeList.clear();
            vector<vector<int>>::iterator tempIter = result.begin();
            result.insert(tempIter, levelTemp);
            levelTemp.clear();
        }
    }
    return result;
}

int Solution::findJudge(int N, vector<vector<int>>& trust)
{   
    
    for(vector<vector<int>>::iterator iter = trust.begin(); iter != trust.end(); iter++) {
        
    } 
    return 0;
}