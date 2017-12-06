# Class Grading System
A grading program for a mock class of students.

### Synopsis
A grading program for a class with the following grading policies:

a. There are two quizzes, each graded on the basis of 10 points.<br />
b. There is one midterm exam and one final exam, each graded on the basis of 100 points.<br />
c. The final exam counts for 50% of the grade, the midterm count for 25%, and the two quizzes<br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;together count for a total of 25%. (Do not forget to normalize the quiz scores. They should<br />
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;be converted to a percentage before they are averaged in.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/class-grading-system.git
   ```
    or [download as ZIP](https://github.com/cramaechi/class-grading-system/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd class-grading-system
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./grading_system
```

Sample Output:
```
Enter quiz 1 grade: 8                                                                                                 
                                                                                                                      
Enter quiz 2 grade: 6                                                                                                 
                                                                                                                      
Enter midterm exam grade: 85                                                                                          
                                                                                                                      
Enter final exam grade: 94                                                                                            
                                                                                                                      
                                         Student Record                                                               
                                         --------------                                                               
                                   Student's quiz 1 score: 8                                                          
                                   Student's quiz 2 score: 6                                                          
                                   Student's midterm exam score: 85                                                   
                                   Student's final exam score: 94                                                     
                                   Student's average score: 85.75                                                     
                                   Student's letter grade: B 
```
