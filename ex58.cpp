#include <iostream>
#include <fstream>

using namespace std;



int main()
{
    ofstream fout;
    string fileName = "myFile.txt";
    int n = 10;
    fout.open(fileName);
    
    if(!fout.is_open()) {
        cout << "Wrong!" << endl;
    } else {
        fout << "Try open file again!"<< endl;
    }
    
    for (int i = 0; i < n; i++) {
       if (i % 2 == 0 && i > 0) {
          fout << i;
          fout << "\n";
        }
    }
    
    fout.close();
    

    return 0;
}
