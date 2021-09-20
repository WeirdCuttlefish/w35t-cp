#include <bits/stdc++.h>

using namespace std;

//Assume that the size of an array nums is called "N" throughout this code
//In competitive programming you want to limit your time complexity (and space complexity)
//The way to measure this (besides irl time and space usage) is known as Big O
//Optimal solutions generally have a lower Big O in both space and time
//If you don't know what this is I would reccomend starting with LeetCode

void operation(){
    cout << "Operation ";
}

void singleLoop(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){//This will loop N times
        operation(); //This will occur N times, it is Big O of N or O(N)
    }
    cout << endl; //Don't worry about this line, it's just for clarity
}

void doubleForLoops(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){//This will loops N times
        for(int j = 0; j < nums.size(); j++){//This will loop N times, N times
            operation(); //This will occur N*N or N^2 times, it is Big O of N^2 or O(N^2)
        }
    }
    cout << endl;
}

int main(){
    vector<int> nums(3);
    singleLoop(nums);
    doubleForLoops(nums);
}