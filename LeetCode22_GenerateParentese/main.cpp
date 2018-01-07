//
//  main.cpp
//  LeetCode22_GenerateParentese
//
//  Created by Rui on 1/6/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateParenthesisDFS(n, n,"", res);
        return res;
        
    }
    
    void generateParenthesisDFS(int left, int right, string out, vector<string> &res)
    {
        if(left > right)
            return;
        if(left == 0 && right == 0)
            res.push_back(out);
        else{
            if(left > 0)
                generateParenthesisDFS(left - 1, right, out + "(", res);
            if(right > 0)
                generateParenthesisDFS(left, right - 1, out + ")", res);
        }
    }
};
