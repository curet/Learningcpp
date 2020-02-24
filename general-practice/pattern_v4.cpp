// Pattern Jose Constantino Sanchez Curet

#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    string repeat;
    char pattern;

    cout << "This is a patterns loop using nested for loops" << endl;

    do
    {
        cout << "\nEnter the amount of rows you would like it to have: ";
        cin >> totalRows;
        cout << "Enter the type of pattern you would like as output: " << endl;
        cout << "Such as '*', '%', '$', etc.. ";
        cin >> pattern;

        int row, column, space;

        for(int row=1; row <=totalRows; row++)
        {
            for(column=1; column <=row; column++)
                {
                    cout << pattern;
                }
            for(space=0; space<=totalRows-row; space++)
                {
                    cout << " ";
                }
            for(column=totalRows; column >= row; column--)
                {
                    cout << pattern;
                }
            for(space=0; space < row; space++)
                {
                    cout << " ";
                }
                
            cout << endl;
        }

        cout << "Would you like to repeat the program?" << endl;
        cout << "Enter Y or y if you would like to repeat it" << endl;
        cin >> repeat;
    
    } while (repeat == "Y" || repeat == "y");
    
    
    return 0;
}