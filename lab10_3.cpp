#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    
    float x = 0;
    string t;
    float count = 0;
    float z = 0;
    ifstream source("score.txt");
    while (getline(source,t))
        {
                x += atof(t.c_str());
                z += pow(atof(t.c_str()), 2);
                count++;
        }
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << x / count << endl;
    cout << "Standard deviation = " << sqrt((z / count) - pow((x / count), 2));
}