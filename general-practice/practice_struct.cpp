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

    
    for(int i=0; i<4; i++){
        r.push_back(Sequences());                  // push_back();
        r[i].mean = 30 + i;
    }
    
    //cout << r[0].mean << endl;

    
    //cout << r[0].standardDeviation << endl;

    for(int i=0; i<4; i++){
        r.push_back(Sequences());                  // push_back();
        r[i].standardDeviation = 3.8 + i/3.8;
    }


    m.push_back(vector<Sequences>());          // push_back();
    for(int i=0; i<4; i++){
        m[0].push_back(Sequences());               // push_back();
        m[0][i].data = 0.784365 + (i * 0.13234);
    }


    for(int i=0; i<4; i++){
        cout << "enter a coordinates: ";
        r.push_back(Sequences());
        cin >> r[i].coordinates;
        cout << endl;
    }
    // cout << m[0][0].data << endl;
    // cout << m[0][1].data << endl;

    //display using loops
    cout << endl;
    
    cout << (long unsigned)sizeof(((struct Sequences*)0)->mean) << "<- size of vector mean\n\n";
    for(int i=0; i<(sizeof ((Sequences*)0)->mean)-1; i++){
        cout <<r[i].mean << "m" << endl;
    }

    cout << sizeof ((Sequences*)0)->standardDeviation << "<- size of vector standardDeviation\n\n";
    for(int i=0; i<(sizeof ((Sequences*)0)->standardDeviation)-1; i++){
        cout <<r[0].standardDeviation << "sd" << endl;
    }

    cout << sizeof ((Sequences*)0)->data << "<- size of vector data\n\n";
    for(int i=0; i<(sizeof ((Sequences*)0)->data)-1;i++){
        cout << m[0][i].data << "data" << endl;
    }

    cout << endl;
    for(int i=0; i<r.size()-1; i++){
        cout <<r[i].coordinates << "coor" << endl;
    }

}

void sumMeanDataSD(vector <Sequences> &r, vector<vector<Sequences> > &m){

    for(int i=0; i<r.size()-1; i++) // r.rize() it is on purpose, as m < r, then the last numbers displayed will be "garbage"
        cout << r[i].mean + r[i].standardDeviation + m[0][i].data << endl;
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