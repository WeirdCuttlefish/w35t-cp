#include <bits/stdc++.h>

using namespace std;

/*
Big O isn't perfect, it doesn't take into account use case or practical runtime.
You might use a data structure to get a lower Big O but for small cases the naive
solution may be faster.

Big O is a measure of growth approaching infinity. Although it isn't the end all
be all it is what most of your focus will be on in competitive programming

The following code will help you understand this concept

Note: Later on you won't really need to calculate Big O, you'll just know what's faster
      This is mainly just for understanding
*/

void operation(){
    cout << "operation ";
}

void practiceOne(vector<int> arr){
    for(int i = 0; i << arr.size(); i++){
        for(int j = 0; j< arr.size(); j++){
            operation();
        }
    }

    for(int i = 0; i << arr.size(); i++){
        operation();
    }
}

/*
Can you guess the Big O of the above method?

If you said that the method was Big O of N^2 + N you'd be wrong!

The Big O is actually O(N^2). This is because N^2 dominates the growth of N
When approaching infinity N is quickly dwarfed by N^2 and thus isn't considered

Here's some practice for now, as we learn more algorithms and data structures we'll
do more work with this
*/

void practiceTwo(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            for(int k = 0; k < arr.size(); k++){
                operation();
            }
        }
    }

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            operation();
        }
    }
}

/*
Solution: O(N^3); N^3 dominates N^2
*/

int main(){
    vector<int> arr(3);
    practiceOne(arr);
    practiceTwo(arr);
}