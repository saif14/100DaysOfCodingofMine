#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
=======
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> max_val_indexes;

int find_max_idx(vector<int> A, int s){
    int max_num = -2147483648;
    int max_idx = 0;
    for(int i=0; i<s; i++){
        if(A[i] > max_num)
        {
            max_num = A[i];
            max_idx = i;
    
        }

    }

    for(int i = 0; i<s; i++){
        if(A[i] == max_num)
          max_val_indexes.push_back(i);  
    }
    return max_idx;
}
int count_stroke(vector<int> A, int max_val, int s)
{
    int count =0;
    
    for(int i =0; i<s; i++)
    {
        if (A[i] == max_val)
        {
            if (i == 0)
            {
                count++;
            }
            else if (i > 0 && A[i - 1] != max_val)
            {
                count++;
            }
        }       
        
    }

    return count;
}
void change_max_val(vector<int> &A, int s){
    for(int i =0; i<s; i++){
        A[i] -= 1;
    }
}
int solution(vector<int> &A) {
    int s = A.size();
    int count_min_stroke = 0;
    int s2 = A[find_max_idx(A,s)];
    for(int i=0;  i<s2; i++){
        int max_idx = find_max_idx(A, s);
        int max_val = A[max_idx];
        count_min_stroke+=count_stroke(A, max_val,s);
        change_max_val(A,s);
        max_val_indexes.clear();
    }
    return count_min_stroke;
}
>>>>>>> 99a4dd74ee29cd18f0f482e6d43b922a7081f2ef

int main()
{

    vector<int> A = {5,8};
    cout<<solution(A);
    
}
