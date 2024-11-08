#include<iostream>
using namespace std;
int main() {
    int i = 3;
    while (i > 0)
    {
        int anss[4];
        int score = 0;
        if(i==3)
        cout << "welcome to Guess The Number game\n";
        cout << "you have just "<<i<<" attempts to answer each question\n";
        cout << "1- 2, 4, ??, 8, 10\n ";
        cin >> anss[0];
        cout << "2-  3, 6, 9, ??, 15\n";
        cin >> anss[1];
        cout << "3- 1, 4, 9, 16, ?? \n";
        cin >> anss[2];
        cout << "4-  ??, 45, 40, 35, 30 \n";
        cin >> anss[3];
        int nums[4][5] = {
            {2, 4, 6, 8, 10},
            {3, 6, 9, 12, 15},
            {1, 4, 9, 16, 25},
            {50, 45, 40, 35, 30}
        };
        if (anss[0] == nums[0][2])score++;
        if (anss[1] == nums[1][3])score++;
        if (anss[2] == nums[2][4])score++;
        if (anss[3] == nums[3][0])score++;
        cout << "your score is :" << score << " from 4" << endl;
        if (score == 0 || score == 1) cout << "very weak!\n";
        else if (score == 2) cout << "you just passed!\n";
        else if (score == 3) cout << "good atempt\n";
        else if (score == 4) cout << "fantastic!\n";

       
        if (i == 1)
            break;
        cout << "would you tyr again ?\n";
        cout << "0-No\n";
        cout << "1-Yes\n";
        bool again;
        cin >> again;
        if (!again)
            break;
        i--;
    }


    cout << "let us see you again,good bye\n";
    return 0;
}