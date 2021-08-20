#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student {
    private :
        int total_score = 0;
        vector <int> scores ;

    public:
        void input(void){
            int input_score;
            cout << "enter score \n";
            for(int i = 0; i < 5;i++){
                cin >> input_score;
                scores.push_back(input_score);
            }
        }
        int calculateTotalScore(void){
            for (int i = 0;  i< scores.size();i++){
                total_score += scores[i];
            }
            return total_score;
        }

        void print_scores(){
            for(int i=0; i< 5; i++){
                cout << scores[i]<<" ";
            }
                cout << "\n";

        }
};


int main() {
    int n; // number of students
    cout << "enter number of students\n";
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }


    for(int i = 0; i < n; i++){
        s[i].print_scores();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    cout << "Kristen Score "<< kristen_score<<"\n";
    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout <<"Students have "<< count<<" more than kristen";
    
    return 0;
}
