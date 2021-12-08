// Ranklist of students on the basis of their marks
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int calc(vector<int> v){
    return v[0]+v[1]+v[2];
}
bool compare(pair<string,vector<int>> s1, pair<string,vector<int>> s2){
    return calc(s1.second) > calc(s2.second);
}
int main(void){
    vector<pair<string,vector<int>>> student_marks = {
        {"Rohan", {10, 20, 11}},
        {"Prateek", {10, 21, 3}},
        {"Vivek", {4, 5, 6}},
        {"Rijul", {10, 13, 20}}
    };
    sort(student_marks.begin(), student_marks.end(), compare);
    for(auto x:student_marks){
        cout << x.first << " " << calc(x.second) << endl;
    }
}