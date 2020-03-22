#include "LeetCode.h"
/*
* LeetCode Solution 234
*/
bool Solution::isPalindrome(ListNode *head)
{
    if (!head || !head->next)
        return 1;
    ListNode *fast = head, *slow = head;
    ListNode *p, *pre = NULL;
    while (fast && fast->next)
    {
        p = slow;
        slow = slow->next; //快慢遍历
        fast = fast->next->next;

        p->next = pre; //翻转
        pre = p;
    }
    if (fast) //奇数个节点时跳过中间节点
        slow = slow->next;

    while (p)
    { //前半部分和后半部分比较
        if (p->val != slow->val)
            return 0;
        p = p->next;
        slow = slow->next;
    }
    return 1;
}

/*
* 645. 错误的集合
*/
vector<int> Solution::findErrorNums(vector<int> &nums)
{
    map<int, int> numberMap;
    vector<int> result;
    for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++)
    {
        numberMap[*iter] += 1;
    }

    int missing = -1;
    int duplicate = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (numberMap[i + 1] == 2)
        {
            duplicate = i + 1;
        }
        if (numberMap[i + 1] == 0)
        {
            missing = i + 1;
        }
        if (missing != -1 && duplicate != -1)
        {
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
vector<vector<int>> Solution::levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> result;
    list<TreeNode> nodeList;
    list<TreeNode> tempNodeList;
    nodeList.push_back(*root);
    if (root == NULL)
    {
        return result;
    }
    while (!tempNodeList.empty() || !nodeList.empty())
    {
        vector<int> levelTemp;
        while (!nodeList.empty())
        {
            if (nodeList.front().left != NULL)
            {
                tempNodeList.push_back(*(nodeList.front().left));
            }
            if (nodeList.front().right != NULL)
            {
                tempNodeList.push_back(*(nodeList.front().right));
            }
            levelTemp.push_back(nodeList.front().val);
            nodeList.pop_front();
        }
        if (!levelTemp.empty())
        {
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

int Solution::findJudge(int N, vector<vector<int>> &trust)
{

    for (vector<vector<int>>::iterator iter = trust.begin(); iter != trust.end(); iter++)
    {
    }
    return 0;
}

bool Solution::canReach(vector<int> &arr, int start)
{
    if (arr.size() == 0)
    {
        return false;
    }

    if (arr[start] == 0)
    {
        return true;
    }
    return false;
}

vector<vector<int>> Solution::allCellsDistOrder(int R, int C, int r0, int c0)
{
    vector<vector<int>> result;
    vector<vector<int>> tempContainer;
    vector<int> tempRes;
    if (R == 1 && C == 1)
    {
        tempRes = {0, 0};
        result.push_back(tempRes);
        return result;
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            tempRes = {i, j};
            tempContainer.push_back(tempRes);
        }
    }
    map<vector<vector<int>>, int> resultMap;
    for (vector<vector<int>>::iterator iter = tempContainer.begin(); iter != tempContainer.end(); iter++)
    {
        return result;
    }
    return result;
}



vector<string> Solution::letterCombinations(string digits)
{
    string initStr = "";
    LETTER_MAP.insert(ValType('2', "abc"));
    LETTER_MAP.insert(ValType('3', "def"));
    LETTER_MAP.insert(ValType('4', "ghi"));
    LETTER_MAP.insert(ValType('5', "jkl"));
    LETTER_MAP.insert(ValType('6', "mno"));
    LETTER_MAP.insert(ValType('7', "pqrs"));
    LETTER_MAP.insert(ValType('8', "tuv"));
    LETTER_MAP.insert(ValType('9', "wxyz"));
    if (!(digits == "")) {
        BackTrack(digits, initStr);
    }
    return alphaResult;
}

void Solution::BackTrack(string next_digits, string lettersStr)
{
    if (next_digits.size() == 0) {
        alphaResult.push_back(lettersStr);
    } else {
        char digit = next_digits[0];
        string letters = LETTER_MAP[digit];
        for(string::size_type i = 0; i < letters.size();i++) {
            BackTrack(next_digits.substr(1), lettersStr + letters[i]);
        }
    }
}


vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* root)
{
    vector<vector<int>> ans;
    if (!root) return ans;
    deque<TreeNode*> que;
    que.push_back(root);
    bool zigzag = true;
    TreeNode* tmp;
    while (!que.empty()) {
        int Size = que.size();
        vector<int> tmp_vec;
        while (Size) { 
            if (zigzag) { //前取后放
                tmp = que.front();
                que.pop_front();
                if (tmp->left) que.push_back(tmp->left); // 下一层顺序存放至尾
                if (tmp->right) que.push_back(tmp->right);                
            } else { // 后取前放
                tmp = que.back();
                que.pop_back();
                if (tmp->right) que.push_front(tmp->right); // 下一层逆序存放至首
                if (tmp->left) que.push_front(tmp->left);
            }
            tmp_vec.push_back(tmp->val);
            --Size;
        }
        zigzag = !zigzag;
        ans.push_back(tmp_vec);
    }
    return ans;
}

vector<vector<int>> Solution::merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> result;
    if (intervals.empty()) {
        return result;
    }
    sort(intervals.begin(), intervals.end());
    int index = 0;
    result.push_back(intervals[index]);
    for(int i = 1; i < intervals.size(); i++) {
        if (result[index][1] >= intervals[i][0] && result[index][1] < intervals[i][1]) {
            result[index][1] = intervals[i][1];
        } else {
            index++;
            result.push_back(intervals[i]);
        }
    }
    return result;
}


vector<vector<int>> Solution::insert(vector<vector<int>>& intervals, vector<int>& newInterval)
{
    vector<vector<int>> result;
    if (intervals.empty() && newInterval.empty()) {
        return result;
    }

    if (intervals.empty() && !newInterval.empty()) {
        result.push_back(newInterval);
        return result;
    }

    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end());
    int index = 0;
    result.push_back(intervals[index]);
    for(int i = 1; i < intervals.size(); i++) {
        if (result[index][1] >= intervals[i][0]) {
            if ( result[index][1] < intervals[i][1])
                result[index][1] = intervals[i][1];
        } else {
            index++;
            result.push_back(intervals[i]);
        }
    }
    return result;
}

bool Solution::validTicTacToe(vector<string>& board)
{
    return false;
}