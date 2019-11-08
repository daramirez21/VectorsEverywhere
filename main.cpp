#include <iostream>
#include <cstdio>
#include <ctime>
#include <vector>
using namespace std;

//Prototypes


vector<int> addRandomNumbers(int, vector<int>);


void printVector( vector<int> );

void searchWithinVector(int, vector<int>);

int main()
{
        srand(time(NULL)); //only do once per program run

        int randomNumber;
        int amount;
        int search;
        bool found;
        vector <int> list;

        cout<<"How many numbers should we make? ";
        cin>>amount;
        cout<<"What number should we search for? ";
        cin>>search;
        
        printVector(list);
        
        list = addRandomNumbers(amount, list);
        
        printVector(list);

        list = addRandomNumbers(amount, list);
       
        printVector(list);

        searchWithinVector(search, list);
        
        for(int i=0; i<amount; i++)
        {
                randomNumber = rand() % 10;

                list.push_back(randomNumber);
        }

        for(int i=0; i<list.size(); i++)
        {
                cout<<list[i];
                if( i < list.size()-1 )
                {
                        cout<<", ";
                }
                else
                {
                        cout<<endl;
                }
        }

        for(int i=0; i<list.size(); i++)
        {
                if( search == list.at(i) )
                {
                        cout<<search<<" is at location "<<i<<endl;
                        found = true;
                }
        }
        if( found == false )
        {
                cout<<search<<" is not in the list."<<endl;
        }


        return 0;
}

vector<int> addRandomNumbers(int howMany, vector <int> original)
{
        for(int i=0; i<howMany; i++)
        {
                int randomNumber = rand() % 10;
                original.push_back(randomNumber);
        }
        return original;
}

void printVector( vector <int> printing  )
{
        for(int i = 0; i < printing.size(); i++)
        {
                cout<<printing[i];
                if( i < printing.size()-1)
                {
                        cout << ", ";
                }
                else
                {
                        cout << endl;
                }
        }
}

void searchWithinVector(int searchFor, vector<int> within)
{
    bool found = false;

    for(int i = 0; i<within.size(); i++)
    {
            if( searchFor == within.at(i) )
            {
                cout<<within.at(i)<< " is at location " << i << endl;
                found = true;
            }
    }
      if( found == false)
      {
              cout << searchFor<<" is not in the list";
      }
}





