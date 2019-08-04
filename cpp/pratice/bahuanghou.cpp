#include <iostream>
#include <vector>

using namespace std;

struct Res {
            int x;
            int y;
        };

class Ba{
    public:
        Ba(size_t lenth_):lenth(lenth_){
            init();
        };
        void init();
        void findQueen(int i,  vector<Res> & rst);
        void print();
        bool checkPosIsAvaliable(int x, int y);

    private:
    
    size_t lenth;
    vector<vector<bool>> board;
    vector<vector<Res>> res;
    vector<Res> rst;
    size_t num{0};
      
};

void Ba::init() {
    board.resize(lenth);
    res.resize(1000);
    for(size_t i =0; i < lenth; i++) {
        board[i].resize(lenth, false);
    }
}

bool Ba::checkPosIsAvaliable(int x, int y) {
    for(size_t i = 0; i < lenth; i++) {
        if (board[i][y] == true)
        {
            return false;
        }
    }

    for(int i = x -1, k = y-1; k>=0 && i >=0; i--,k--) {
        if (board[i][k] == true)
        {
            return false;
        }
    }

    for(int i = x -1, k = y+1; k < lenth && i >=0; i--,k++) {
        if (board[i][k] == true)
        {
            return false;
        }
    }
    return true;

}

void Ba::findQueen(int i, vector<Res> & rst1) {
    if (i > lenth - 1) {
        res[num++] = rst;
        return;
    }
    else {
        for (size_t loop = 0; loop < lenth; loop++) {
            if (checkPosIsAvaliable(i, loop)) { 
                board[i][loop] = true;
                rst.push_back(Res{i,(int)loop});
                findQueen(i+1,  rst);
                board[i][loop] = false;
                rst.pop_back();
            }

        }     
    }

}

void Ba::print()
{
    /*
    for (auto var: res) {
        for (auto pos: var)
        {
            cout << pos.x << "  " << pos.y << " ";
        }
        cout << endl;
    } */
    cout << num;
}
int main(){
    Ba test(8);
    vector<Res>  rst;
    test.findQueen(0, rst);
    test.print();
    return 0;
}