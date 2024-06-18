#include <iostream>
#include <string>
using std::string;
using std::cout;

class Grades {
private:
    string subject;
    float grade;

public:
    Grades(){}; // Default constructor
    void setSubject(string subj){
        subject = subj;
    }
    void setGrade(float grd){
        grade = grd;
    }
    string checkPassFail(){
        if (grade < 0 || grade >100){
            cout << "Invalid grade.";
        } else {
            if (grade >=60){
                return "Passed.";
            } else {
                return "Failed.";
            }
        }
    }

    float getGrade(){
        return grade;
    }

    string getSubj(){
        return subject;
    }
    };

