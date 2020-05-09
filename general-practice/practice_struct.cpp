// just to practice structuring the data
#include <iostream>
#include <vector>

using namespace std;

struct Sequences{

    int numberOfSequences;
    int coordinates;
    double data;
    double standardDeviation;
    double mean;
    double clicks;
    double maximum;
    double minimum;

};

enum DISPLAY{TEST = 1, SUM = 2} USER; // to test enum

void testVectorStructs(vector <Sequences> &r, vector<vector<Sequences> > &m){

    r.push_back(Sequences());                  // push_back();
    r[0].mean = 30;
    //cout << r[0].mean << endl;

    r.push_back(Sequences());                  // push_back();
    r[0].standardDeviation = 3.8;
    //cout << r[0].standardDeviation << endl;

    m.push_back(vector<Sequences>());          // push_back();
    m[0].push_back(Sequences());               // push_back();
    m[0][0].data = 0.784365;
    

    m.push_back(vector<Sequences>());          // push_back();
    m[0].push_back(Sequences());               // push_back();
    m[0][1].data = 0.6793425;

    // cout << m[0][0].data << endl;
    // cout << m[0][1].data << endl;

    //display using loops
    cout << endl;
    
    for(int i=0; i<r.size()-1; i++){
        cout <<r[0].mean << "m" << endl;
    }

    for(int i=0; i<r.size()-1; i++){
        cout <<r[0].standardDeviation << "sd" << endl;
    }

    for(int i=0; i<m.size();i++){
        cout << m[0][i].data << endl;
    }

}

void sumMeanDataSD(vector <Sequences> &r, vector<vector<Sequences> > &m){
    cout << r[0].mean + r[0].standardDeviation + m[0][0].data << endl;
}

int main(){

    int choice;
    
    vector <Sequences> r;
    vector<vector<Sequences> > m;

    cout << "\nDo you want to test or to sum? ";
    cout << "\n\n[1]. testVectorStructs(r,m);";
    cout << "\n[2]. sumMeanDataSD(r,m);\n";
    cin >> choice;
    if(choice == 1) testVectorStructs(r,m);
    else {testVectorStructs(r,m); sumMeanDataSD(r,m);}

    return 0;
}