// to illustrate hierarchial inheritance
#include <iostream>
using namespace std;
class cricketer
{
protected:
    char name[20];
    int age;
    int noMatch;

public:
    void getCricketer()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter no of match played: ";
        cin >> noMatch;
    }
    void displayCricketer()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Match Played: " << noMatch << endl;
    }
};
class bowler : public cricketer
{
private:
    int noWicket;

public:
    void getBowler()
    {
        cout << "Enter no of wickets taken: ";
        cin >> noWicket;
    }
    void displyBowler()
    {
        displayCricketer();
        cout << "Wickets taken: " << noWicket << endl;
    }
};
class batsman : public cricketer
{
private:
    int noRuns;

public:
    void getBatsman()
    {
        cout << "Enter total runs: ";
        cin >> noRuns;
    }
    void displayBatsman()
    {
        displayCricketer();
        cout << "No of Runs: " << noRuns << endl;
    }
};

int main()
{
    bowler b;
    batsman bt;
    cout << "For batsman: " << endl;
    b.getCricketer();
    b.getBowler();

    cout << "for batsman: " << endl;
    bt.getCricketer();
    bt.getBatsman();
    cout << "Bowler: " << endl;
    b.displyBowler();
    cout << "Batsman: " << endl;
    bt.displayBatsman();
    return 0;
}