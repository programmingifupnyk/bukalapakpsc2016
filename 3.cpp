#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>
#include <stack>
#include <list>

using namespace std;

char bl[7][11] = {

    {'#','#','#','#','.','.','#','.','.','.','.'},
    {'#','.','.','.','#','.','#','.','.','.','.'},
    {'#','.','.','.','#','.','#','.','.','.','.'},
    {'#','#','#','#','.','.','#','.','.','.','.'},
    {'#','.','.','.','#','.','#','.','.','.','.'},
    {'#','.','.','.','#','.','#','.','.','.','.'},
    {'#','#','#','#','.','.','#','#','#','#','#'}
};

string bls[9] = {
    {"..........."},
    {"####..#...."},
    {"#...#.#...."},
    {"#...#.#...."},
    {"####..#...."},
    {"#...#.#...."},
    {"#...#.#...."},
    {"####..#####"},
    {"..........."}
};

string b_hors = "...........";
int main()
{
    int R,C;
    scanf("%d %d",&R,&C);

    for(int bar = 0; bar < R; bar++)
    {

        for(int i=0; i<8; i++)
        {
            if(i == 0 )
            {
                for(int kol = 0; kol < C; kol++)
                {
                      cout << '.';
                      cout << bls[0];
                    if(kol == C-1)
                    {
                        cout << '.';
                    }
                }
            }else
            {
                for(int kol = 0; kol < C; kol++)
                {
                    cout << '.';
                    for(int j = 0; j < 11; j++)
                     cout << bls[i][j];
                    if(kol == C-1)
                    {
                        cout << '.';
                    }
                }
            }
            cout << endl;
        }
        if(bar == R-1)
        {
            for(int kol = 0; kol < C; kol++)
            {
                  cout << '.';
                  cout << bls[0];
                if(kol == C-1)
                {
                    cout << '.';
                }
            }
        }

    }
    cout << endl;
}
