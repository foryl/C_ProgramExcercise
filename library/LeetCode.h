#ifndef LEETCODE_H
#define LEETCODE_H
#include <string>
#include <iostream>
#include <vector>
#include <map>
//#include <algorithm>
#include <queue>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

inline const string &ShorterString(const string &s1, const string &s2)
{
    return s1.size() > s2.size() ? s1 : s2;
}


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct GraphNode {
    int nodeKey;
    int nodeValue;
    int targetNode;
} GRAPH_NODE;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution
{
public:
    bool isPalindrome(ListNode *head);
    vector<int> findErrorNums(vector<int>& nums);
    vector<vector<int>> levelOrderBottom(TreeNode* root);
    int findJudge(int N, vector<vector<int>>& trust);
};


class KthLargest {
public:
    KthLargest(int k, vector<int>& nums)
    {
        number = k;
        sortArr.assign(nums.begin(), nums.end());
    } 
    int add(int val)
    {
        sortArr.push_back(val);
        make_heap(sortArr.begin(), sortArr.end());
        sort_heap(sortArr.begin(), sortArr.end());
        return sortArr[sortArr.size() - number];  
    }
private: 
    vector<int> sortArr;
    int number;
};

#endif