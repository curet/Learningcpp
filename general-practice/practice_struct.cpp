// just to practice structuring the data
#include <iostream>
#include <vector>

using namespace std;

struct Random{

    int numberOfSequences;
    double data;
    double standardDeviation;
    double mean;
    double click;
    double maximum;

};

void testVectorStructs(vector <Random> r, vector<vector<Random> > normal){

    r.push_back(Random());                  // push_back();
    r[0].mean = 30;
    cout << r[0].mean << endl;

    r.push_back(Random());                  // push_back();
    r[0].standardDeviation = 3.8;
    cout << r[0].standardDeviation << endl;

    normal.push_back(vector<Random>());     // push_back();
    normal[0].push_back(Random());          // push_back();
    normal[0][0].data = 0.784365;
    cout << normal[0][0].data << endl;

}


int main(){

    vector <Random> r;
    vector<vector<Random> > normal;
    testVectorStructs(r,normal);

    return 0;
}