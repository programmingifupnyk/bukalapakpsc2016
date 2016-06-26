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

int main()
{
    int T;
    int N;
    scanf("%d",&T);

    while(T--)
    {
      scanf("%d",&N);
       if(N%2 == 0)
        printf("Kung\n");
        else
            printf("Kang\n");
    }

}
