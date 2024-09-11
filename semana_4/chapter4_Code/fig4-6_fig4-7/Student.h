#include <string>

class Student {
public:
    
    Student(std::string studentName, int studentAverage)
        : name (studentName){
            setAverage(studentAverage);
        }
    
    void setName (std::string studentName) {
        name = studentName;
    }

    std::string getName() const{
        return name;
    }

    void setAverage(int studentAverage) {
        if (studentAverage>0) {
            if (studentAverage <= 100) {
                average = studentAverage;
            }
        }
    }

    int getAverage() const {
        return average;
    }

    std::string getLetterGrade() const {
        std::string letterGrade;

        if (average >= 90) {
            letterGrade = "A";
        }
        else if (average >= 80) {
            letterGrade = "B";
        }
        else if (average >= 70) {
            letterGrade = "C";
        }
        else if (average >= 60) {
            letterGrade = "D";
        }
        else {
            letterGrade = "F";
        }

        return letterGrade;
    }

private:
    std::string name;
    int average {0};
};