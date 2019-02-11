#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


double FindMedianScore(vector<int>& scores);
string CalculateLetterGrade(int totalScore);



int main()
{
    double firstExam = 0.0;
    double secondExam = 0.0;
    double finalExam = 0.0;
    
    vector<int> scores;
    
    cout << "Dr. DoLittle's Grading Program ....." << endl << endl;
    
    while (true)
    {
        cout << "Please enter in the score for the first exam : ";
        
        cin >> firstExam;
        
        //is it not a number?
        if (cin.fail()) //(!cin)
        {
            cout << "Sorry, your input must be an integer. Please try again." << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
        //is it not between 0 and 100?
        else if (firstExam < 0 || firstExam > 100)
        {
            cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
        }
        else
        {
            break;
        }
    }
    
    while (true)
    {
        cout << endl << "Please enter in the score for the second exam : ";
        
        cin >> secondExam;
        
        //is it not a number?
        if (cin.fail()) //(!cin)
        {
            cout << "Sorry, your input must be an integer. Please try again." << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
        //is it not between 0 and 100?
        else if (secondExam < 0 || secondExam > 100)
        {
            cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
        }
        else
        {
            break;
        }
    }
    
    while (true)
    {
        cout  << endl << "Please enter in the score for the final exam : ";
        
        cin >> finalExam;
        
        //is it not a number?
        if (cin.fail()) //(!cin)
        {
            cout << "Sorry, your input must be an integer. Please try again." << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
        //is it not between 0 and 100?
        else if (finalExam < 0 || finalExam > 100)
        {
            cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
        }
        else
        {
            break;
        }
    }
    
    int inputValue = 0;
    while (inputValue != -1)
    {
        while (true)
        {
            cout << endl << "Enter the score for a homework assignment: ";
            
            cin >> inputValue;
            
            //is it not a number?
            if (cin.fail()) //(!cin)
            {
                cout << "Sorry, your input must be an integer. Please try again." << endl;
                cin.clear();
                cin.ignore(1024, '\n');
            }
            //is it not between 0 and 100?
            else if (inputValue < -1 || inputValue > 100)
            {
                cout << "Sorry, your input must be between 0 and 100. Please try again." << endl;
            }
            else
            {
                if (inputValue != -1)
                {
                    scores.push_back(inputValue);
                }
                break;
            }
        }
    }
    
    double median = FindMedianScore(scores);
    
    double total = firstExam + secondExam + finalExam + median;
    
    string letterGrade = CalculateLetterGrade(total);
    
    cout << endl << "The median homework score was " << median << endl;
    cout << "The total points earned was " << total << endl;
    cout << "The letter calculated letter grade is " << letterGrade << endl;
}


double FindMedianScore(vector<int>& scores)
{
    double median = 0.0;
    bool even;


    
    //sort vector
    sort(scores.begin(), scores.end());
    
    //determine if its even or odd size
    if (scores.size() % 2 == 1)
    {
        even = false;
    }
    else
    {
        even = true;
    }
    
    //get median
    if(even == true)
    {
        median = (scores[scores.size()/2 - 1] + scores[scores.size()/2]) / 2.0;
    }
    if(even == false)
    {
        median = scores[scores.size()/2];
    }
    
    return median;
}


string CalculateLetterGrade(int totalScore)
{
    string letterGrade;
    
    if(totalScore <= 180)
    {
        letterGrade = "fail";
    }
    
    else if(totalScore <= 200)
    {
        letterGrade = "D-";
    }
    
    else if(totalScore <= 220)
    {
        letterGrade = "D";
    }
    
    else if(totalScore <= 240)
    {
        letterGrade = "D+";
    }
    
    else if(totalScore <= 260)
    {
        letterGrade = "C-";
    }
    
    else if(totalScore <= 280)
    {
        letterGrade = "C";
    }
    
    else if(totalScore <= 300)
    {
        letterGrade = "C+";
    }
    
    else if(totalScore <= 320)
    {
        letterGrade = "B-";
    }
    
    else if(totalScore <= 340)
    {
        letterGrade = "B";
    }
    
    else if(totalScore <= 360)
    {
        letterGrade = "B+";
    }
    
    else if(totalScore <= 380)
    {
        letterGrade = "A-";
    }
    
    else if(totalScore <= 400)
    {
        letterGrade = "A";
    }
    
    return letterGrade;
}
