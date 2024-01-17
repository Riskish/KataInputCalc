#include <iostream>
using namespace std;

// n = max number of inputs
// i = current input
int n, i;
class generalKataInput 
{
    
public:
    void getInputStats ();
    void printInputStats ();
    void calcStartTimeDiff ();

    double GetInputStartTime() { return inputStartTime; }
    void SetInputStartTime(double value) { inputStartTime = value;} 
private:
    double inputStartTime;
    double inputDuration;
    
};

void generalKataInput::getInputStats ()
{
    int nbOfInputs = 0;
    cout<< "Enter Start Time: " ;
    cin>> nbOfInputs;
    SetInputStartTime(nbOfInputs);
    
    //cout<< "Enter Duration: " ;
    //cin>> inputDuration;
} 

void generalKataInput::printInputStats()
{
    cout <<"Input " <<i+1 <<" start Time - " <<inputStartTime <<endl;
    //cout <<"Duration - " <<inputDuration <<endl;

}

int main ()
{
    generalKataInput reflexInput[15];
    cout << "Enter Number of Inputs: ";
    cin >> n;
    
    for (i=0;i<n;i++)
        reflexInput[i].getInputStats();
    
    cout << "Kata Input Stats: " <<endl;
    for (i=0;i<n;i++)
        reflexInput[i].printInputStats();
    
    for (i=0;i<n-1;i++) 
        cout <<"Start Time Differrence between inputs " <<n-n+i+2 <<" and " << n-n+i+1 << " = " << reflexInput[n-n+i+1].inputStartTime - reflexInput[n-n+i].inputStartTime <<endl;
};