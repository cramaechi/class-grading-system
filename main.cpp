//Program reads in a couple of student class scores and outputs the students record for that class.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct StudentRecord
{
    double quiz1;//grade
    double quiz2;//grade
    double midTerm;//grade
    double finalExam;//grade
    double averageScore;//grade
    char letterGrade;//letter grade
};

void studentInput(StudentRecord& myStudentRecord);
//Postcondition: myStudentRecord has been initialized to suitable values.

int main()
{
    StudentRecord chike;
    studentInput(chike);

    double quizAverage = ((((chike.quiz1/10)*100) + ((chike.quiz2/10)*100))/2)*.25;
    double midTermAverage = ((chike.midTerm/100)*100)*.25;
    double finalAverage = ((chike.finalExam/100)*100)*.50;
    chike.averageScore = quizAverage+midTermAverage+finalAverage;

    if (chike.averageScore >= 90)
        chike.letterGrade = 'A';
    else if (chike.averageScore >= 80 && chike.averageScore < 90)
        chike.letterGrade = 'B';
    else if (chike.averageScore >= 70 && chike.averageScore < 80)
        chike.letterGrade = 'C';
    else if (chike.averageScore >= 60 && chike.averageScore < 70)
        chike.letterGrade = 'D';
    else
        chike.letterGrade = 'F';

    cout<<setw(55)<<"Student Record"<<endl;
    cout<<setw(55)<<"--------------"<<endl;
    cout<<setw(59)<<"Student's quiz 1 score: "<<chike.quiz1<<endl;
    cout<<setw(59)<<"Student's quiz 2 score: "<<chike.quiz2<<endl;
    cout<<setw(65)<<"Student's midterm exam score: "<<chike.midTerm<<endl;
    cout<<setw(63)<<"Student's final exam score: "<<chike.finalExam<<endl;
    cout<<setw(60)<<"Student's average score: "<<chike.averageScore<<endl;
    cout<<setw(59)<<"Student's letter grade: "<<chike.letterGrade<<"\n\n";

    return 0;
}

void studentInput(StudentRecord& myStudentRecord)
{
    cout<<"Enter quiz 1 grade: ";
    cin>>myStudentRecord.quiz1;
    cout<<"\nEnter quiz 2 grade: ";
    cin>>myStudentRecord.quiz2;
    cout<<"\nEnter midterm exam grade: ";
    cin>>myStudentRecord.midTerm;
    cout<<"\nEnter final exam grade: ";
    cin>>myStudentRecord.finalExam;
    cout<<endl;
}
