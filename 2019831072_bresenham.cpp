#include<bits/stdc++.h>



using namespace std;


int main()
{
    int r, c;
    cout << "Enter Screen Width and Height\n";
    cin >> c >> r;
    int x1, y1, x2, y2;
    cout << "Enter Start and End coordinates\n";
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > x2){
        swap(x1, x2);
        swap(y1, y2);
    }
    vector<vector<char>> grid;
    grid.resize(r, vector<char> (c, '.'));
    int dx = x2 - x1, dy = y2 - y1;
    // if m < 1
    if (dx > dy){
        int currX = x1, currY = y1;
        
        while (currX <= x2){
            grid[r - currY][currX - 1] = 'x';
            int pCurr = 2 * dy * currX - 2 * dx * currY;
            if (pCurr > 0){
                currY++;
            }
            currX++;
        }
        

    }
    else {
        // prnt("NOO");
        int currX = x1, currY = y1;
        while (currY <= y2){
            grid[r - currY][currX - 1] = 'x';
            int pCurr = 2 * dx * currY - 2 * dy * currX;
            if (pCurr > 0){
                currX++;
            }
            currY++;
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << grid[i][j];
        }
        cout << "\n";
    }


}