/*
    Oxygen Value

    The selection of MPCS exams includes a fitness test which is conducted on the ground. There will be a batch of 3 trainees, appearing for a running test on track for 3 rounds. You need to record their oxygen level after every round. After trainees are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select the one with the highest average oxygen level as the fittest trainee. If more than one trainee attains the same highest average level, they all need to be selected. Display the fittest trainee(or trainers) and the highest average oxygen level.

    Note:
    1.The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
    2.If the calculated maximum average oxygen value of the trainees is below 70 then declare the trainees as unfit with a meaningful message as “All trainees are unfit”
    3.Average oxygen values should be rounded

    Example 1:
    Input #1:
    95 92 95
    92 90 92 
    90 92 90
    Output:
    Trainee Number: 1
    Trainee Number: 3


    Input #2:
    91 92 45
    92 80 90
    90 92 90
    Output:
    Trainee Number: 1

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> levels(9);
    for(int i=0; i<9; i++){
        cin>>levels[i];
        if(levels[i]<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
    }

    int t1=levels[0]+levels[3]+levels[6], t2=levels[1]+levels[4]+levels[7], t3=levels[2]+levels[5]+levels[8];
    float T1=t1/3, T2=t2/3, T3=t3/3;

    if(T1 >= T2 && T1>= T3)
        cout << "Trainee Number: 1"<< endl;
    if(T2 >= T1 && T2 >= T3)
        cout << "Trainee Number: 2"<< endl;
    if(T3 >= T1 && T3 >= T2)
        cout << "Trainee Number: 3" << endl;

    return 0;
}