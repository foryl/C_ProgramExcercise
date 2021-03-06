#include<iostream>
#include<string>
#include<list>
#include<deque>
//#include<priority_queue>
#include<queue>
#include<stack>
#include<vector>
#include<fstream>

#include "library/LeetCode.h"
#include "library/screen3.h"
#include "library/Sales_item.h"

using namespace std; 

void PrintValues(const int *beg, const int *end)
{
    while(beg != end) {
        cout<<*beg++<<endl;
    }
}

void Solution234()
{
    ListNode *node = new ListNode(4);
    ListNode *node1 = new ListNode(3);
    node1->next = node;
    ListNode *node2 = new ListNode(2);
    node2->next = node1;
    ListNode *node3 = new ListNode(1);
    node3->next = node2;
    ListNode *node4 = new ListNode(5);
    node4->next = node3;
    ListNode *node5 = new ListNode(1);
    node5->next = node4;
    ListNode *node6 = new ListNode(2);
    node6->next = node5;
    ListNode *node7 = new ListNode(3);
    node7->next = node6;
    ListNode *head = new ListNode(4);
    head->next = node7;
    
    Solution test2;
    string result = test2.isPalindrome(head) == 1 ? "loop link list" : "not a link list!";
    cout<<result<<endl;
}


int ContainerTest()
{

    ofstream outFile(".\\log.txt");
    list<int> dataList;
    for (int i =0; i < 5; i++) {
        int number = rand();
        cout<<"current index is:"<<i<<" this value："<<number<<endl;
        dataList.push_back(number);
    }
    cout<<" Last value: "<<*dataList.end()<<endl;

    for(list<int>::iterator iter = dataList.begin();iter != dataList.end();iter++) {
        cout<<*iter<<" ";
        outFile<<*iter<<endl;
    }
    cout<<endl;
    cout<<"reverse output"<<endl;
    outFile<<"reverse output:"<<endl;
    for(list<int>::iterator iter = dataList.end() ; iter != dataList.begin();iter--) {
        outFile<<*iter<<endl;
        cout<<*iter<<" ";
    }
    cout<<endl;
    cout<<"First value:"<<endl;
    cout<<*dataList.begin()<<endl;
    outFile.close();
    return 0;
}


void Solution645Test()
{
    Solution solution;

    vector<int> testVec;
    testVec.push_back(1);
    testVec.push_back(2);
    testVec.push_back(4);
    testVec.push_back(4);
    testVec.push_back(5);
    vector<int> result = solution.findErrorNums(testVec);
    cout<<"test1 this duplicate number is: "<<result[0]<<", this missing number is:"<<result[1]<<endl;

    testVec.clear();
    testVec.push_back(2);
    testVec.push_back(2);
    result = solution.findErrorNums(testVec);
    cout<<"test2 this duplicate number is: "<<result[0]<<", this missing number is:"<<result[1]<<endl;


    testVec.clear();
    testVec.push_back(1);
    testVec.push_back(2);
    testVec.push_back(2);
    testVec.push_back(4);
    result = solution.findErrorNums(testVec);
    cout<<"test3 this duplicate number is: "<<result[0]<<", this missing number is:"<<result[1]<<endl;

    testVec.clear();
    testVec.push_back(2);
    testVec.push_back(2);
    testVec.push_back(4);
    result = solution.findErrorNums(testVec);
    cout<<"test4 this duplicate number is: "<<result[0]<<", this missing number is:"<<result[1]<<endl;

    testVec.clear();
    testVec.push_back(3);
    testVec.push_back(2);
    testVec.push_back(3);
    testVec.push_back(4);
    testVec.push_back(6);
    testVec.push_back(5);
    result = solution.findErrorNums(testVec);
    cout<<"test5 this duplicate number is: "<<result[0]<<", this missing number is:"<<result[1]<<endl;

}

void Solution107Test()
{
    Solution solution;
    cout<<"This leetcode playground:"<<endl;
    vector<vector<int>> result;
    TreeNode *node1 = new TreeNode(9);
    TreeNode *node2 = new TreeNode(12);
    TreeNode *node3 = new TreeNode(7);
    TreeNode *node4 = new TreeNode(20);
    TreeNode *root = new TreeNode(3);

    root->left = node1;
    root->right = node4;
    node4->left = node2;
    node4->right =node3;
   
    result = solution.levelOrderBottom(root);
    for(vector<vector<int>>::size_type index = 0; index < result.size();index++) {
        vector<int> temp = result[index];
        for(vector<int>::iterator iter = temp.begin(); iter != temp.end(); iter++) {
            cout<<*iter<<" ";
        }
        cout<<endl;
    }

}

void Solution_letterCombinations()
{
    Solution solution;
    string testStr = "23";
    vector<string> resultStrs;
    resultStrs = solution.letterCombinations(testStr);
    for(vector<string>::iterator iter = resultStrs.begin(); iter != resultStrs.end();iter++) {
        cout<<*iter<<endl;
    }
}

void Solution_mergeTest()
{
    Solution solution;
    vector<vector<int>> testVec = {
        {1 , 2},
        {2 , 4},
        {6 , 7},
        {9 , 12}
    };
    vector<vector<int>> result = solution.merge(testVec);
    cout<<"the size of result is"<< result.size() <<endl;
    for(int i = 0; i < result.size(); i++) {
        cout<<"result [0]:"<< result[i][0] <<"result[i][1]:"<< result[i][1]<< endl;
    }
}

void Solution_InsertTest()
{
    Solution solution;
    vector<vector<int>> testVec = {
        {1,2}, {3,5}, {6,7}, {8,10}, {12,16}
    };
    vector<int> insertInterval = {4, 8};
    vector<vector<int>> result = solution.insert(testVec, insertInterval);
    cout<<"the size of result is "<< result.size() <<endl;
    for(int i = 0; i < result.size(); i++) {
        cout<<"result first: "<< result[i][0] <<"result second: "<< result[i][1]<< endl;
    }

}

int main()
{
    Solution_InsertTest();
    cout << __GNUC__ << endl;
    cout << __cplusplus << endl;
    system("pause");
    return 0;
}

     