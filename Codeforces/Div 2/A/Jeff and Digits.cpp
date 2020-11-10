#include <iostream>
using namespace std;
int main() {
	int n, fives = 0, zeros = 0, aux;
	cin >> n;
	while (n--) {
		cin >> aux;
		if (aux == 0) zeros++;
		else fives++;	
	}
	if (fives / 9 < 1 && zeros >= 1) 
		cout << "0" << endl;
	else if (zeros >= 1){ 
		string answer = "";
		for (int i = 0; i < fives - (fives % 9); i++)
			answer += "5";
		for (int i = 0; i < zeros; i++)
			answer += "0";
		cout << answer << endl;
	}
	else cout << "-1" << endl;
	return 0;
}

//PYTHON3
/*
n = int(input())
cards = [int(x) for x in input().split()]

zeros = 0
fives = 0

for digit in cards:
    if digit == 0:
        zeros += 1
    else:
        fives += 1

if zeros >= 1:
    if (fives / 9) >= 1:
        answer = ""
        for i in range(fives - (fives % 9)):
            answer += "5"
        for i in range (zeros):
            answer += "0"
        print(answer)
    else:
        print("0")

else:
    print("-1")
*/
