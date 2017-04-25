#include <iostream>

using namespace std;

void output_matrix(int ** matrix, int m, int n) {

	cout << "Your matrix: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void move (int ** towers, int n, int from, int to) {
    int from_pos;
    int to_pos;

    for (int i = 0; i < n; i++) {
        if (towers[from][i] != 0) {
            from_pos = i; break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (towers[to][i] != 0) {
            to_pos = i + 1; break;
        }
    }

    int temp;
    towers[to][to_pos] = towers[from][from_pos];
    towers[from][from_pos] = 0;

    output_matrix(towers, 3, n);

}

void towers(int num, int from, int to, int buffer, int ** towers_arr)
{
    if (num == 1)
    {
        move(towers_arr, num, from, to);
        return;
    }

    towers(num - 1, from, buffer, to, towers_arr);

    move(towers_arr, num, from, to);

    towers(num - 1, buffer, to, from, towers_arr);
}

int main(int argc, char const *argv[]) {

    int n; cin >> n;

    int ** tow = new int * [3];

    for (int i = 0; i < 3; i++) {
        tow[i] = new int[n];
        for (int j = 0; j < n; j ++) {
            tow[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        tow[0][i] = i;
    }

    towers(n, 0, 1, 2, tow);



    return 0;
}
