#include <iostream>
#include <vector>

using namespace std;


int inOrder(const vector<int> &v){
    // int iter =
    if(v.size() == 1) return true;

    else{
        vector <int> temp = v;
        temp.pop_back();
        int size = v.size() - 1;
        return ((v[0] - 1) > inOrder(temp)) ? (true) : (false);
    }
}
int main(){

    vector <int> temp;
    temp.push_back(4);
    temp.push_back(6);
    temp.push_back(7);
    temp.push_back(19);

    cout << inOrder(temp);

    return 0;
}