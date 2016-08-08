#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#define INT_MAX 1000
#define SIZE 100
using namespace std;

int Board[SIZE];
int Distance[SIZE];
int Queue[SIZE];
int QueueSize = 0;

void QuickestWay(int Cell)
{
	QueueSize--;
	for(int i=0; i<QueueSize; ++i)
		Queue[i] = Queue[i+1];

	for(int i=1; i<=6; ++i) {
		int NewCell = Cell + i;
		int NewDistance = Distance[Cell] + 1;
		if(NewCell < SIZE && NewDistance < Distance[NewCell]) {
			Distance[NewCell] = NewDistance;
			if(Board[NewCell] && NewDistance < Distance[Board[NewCell]]) {
				Distance[Board[NewCell]] = NewDistance;
				Queue[QueueSize++] = Board[NewCell];
			}
			else {
				Queue[QueueSize++] = NewCell;
			}
		}
	}
}

int main(void)
{
	int t, Number, Start, End, u = 2;
	cin >> t;
	while(t--) {
		for(int i=0; i<SIZE; ++i) {
			Distance[i] = INT_MAX;
			Board[i] = 0;
		}
		while(u--) {
			cin >> Number;
			while(Number--) {
				cin >> Start >> End;
				Board[Start-1] = End-1;
			}
		}
		QueueSize = 1;
		Queue[0] = Distance[0] = 0;
		while(QueueSize) QuickestWay(Queue[0]);
		cout << (Distance[99] == INT_MAX ? -1 : Distance[99]) << '\n';
		u = 2;
	}
	return 0;
}
