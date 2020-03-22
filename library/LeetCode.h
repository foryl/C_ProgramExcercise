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
#include <map>
using namespace std;

typedef map<int, string>::value_type ValType;

inline const string &ShorterString(const string &s1, const string &s2)
{
    return s1.size() > s2.size() ? s1 : s2;
}


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

typedef struct GraphNode {
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
    vector<string> alphaResult;
    map<char,string> LETTER_MAP;
public:
    bool isPalindrome(ListNode *head);
    vector<int> findErrorNums(vector<int>& nums);
    vector<vector<int>> levelOrderBottom(TreeNode* root);
    int findJudge(int N, vector<vector<int>>& trust);
    bool canReach(vector<int>& arr, int start);
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0);
    vector<string> letterCombinations(string digits);
    vector<vector<int>> zigzagLevelOrder(TreeNode* root);
    vector<vector<int>> merge(vector<vector<int>>& intervals);
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval);
    bool validTicTacToe(vector<string>& board);

private:
    void BackTrack(string next_digits, string lettersStr);
};


class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val);
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val);
    
    /** Get a random element from the set. */
    int getRandom();
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