#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> exam;
    exam.push_back(10);
    exam.push_back(20);
    exam.push_back(30);

    for (int i = 0; i < exam.size(); i++)
    {
        cout<<"vector : "<<exam.at(i)<<endl;
    }
    return 0;
}