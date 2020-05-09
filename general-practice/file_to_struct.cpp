// to review how to create an efficient struct to read a file by row using vector
#include <iostream>
#include <vector>

using namespace std;

struct Sequences{

                    double choiceOfSequences;

                    string dataID;
                    double sequences;
                    double clicks;
                    double maximum;

                    double mean;
                    double standardDeviation;
                    double minimum;
                    double coordinates;

                    double orderedClicks;
                    double bubbleOrderedSequences;
                    double selectionOrderedSequences;
                    double bubbleOrderedMeans;
                    double selectionOrderedMeans;
};


int main(){

    vector <Sequences> r;
    vector <vector <Sequences> > m;

    r.push_back(Sequences());
    r[0].dataID = "dataID01 ";
    cout << r[0].dataID;

    m.push_back(vector <Sequences>());

    // Analyzing by steps
    // m[0].push_back(Sequences());
    // m[0][0].sequences = 4324324;
    // cout << m[0][0].sequences << " ";
    // m[0].push_back(Sequences());
    // m[0][1].sequences = 7675864;
    // cout << m[0][1].sequences << " ";
    // m[0].push_back(Sequences());
    // m[0][2].sequences = 1232124;
    // cout << m[0][2].sequences << " ";
    // m[0].push_back(Sequences());
    // m[0][3].sequences = 6546456;
    // cout << m[0][3].sequences << " ";
    // m[0].push_back(Sequences());
    // m[0][4].sequences = 9887867;
    // cout << m[0][4].sequences << " ";


    // processing the same as before but in a loop
    for(int i=0; i<5; i++){
        m.push_back(vector <Sequences>());
        
        for(int j=0; j<5; j++){
            m[i].push_back(Sequences());
            cout << "Enter number: ";
            cin >> m[i][j].sequences;
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << m[i][j].sequences << " ";
        }cout << endl;
    }

    r.push_back(Sequences());
    r[0].clicks = 658734834;
    cout << r[0].clicks << " ";

    r.push_back(Sequences());
    r[0].maximum = 9887867;
    cout << r[0].maximum;



}