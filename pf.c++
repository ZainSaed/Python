#include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Percentage Calculator" << endl;
    cout << "!!! ENTER YOUR PERCENTAGE !!! : " << endl;
    cin >> percentage;
    if (percentage >= 90)
    {
        cout << "Your Grade are A+!" << endl;
    }
    else if (percentage >= 80)
    {
        cout << "Your Grade are A!" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Your Grade are B+!" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Your Grade are B!" << endl;
    }
    else if (percentage >= 50)
    {
        cout << "Your Grade are C!" << endl;
    }
    else if (percentage < 50)
    {
        cout << "Your Grade are F!" << endl;
        cout << "Better Luck, Next Time! ";
        return 0;
    }
}
