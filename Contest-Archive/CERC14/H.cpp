#include <iostream>
#include <algorithm>

using namespace std;

int ar[202], i, k, T;

int main(){

	for (i = 1; i <= 200; i++)
		ar[i] = i;

	ar[21] = 22;
	ar[24] = 25;
	ar[27] = 28;
	ar[30] = 29;
	ar[31] = 33;
	ar[32] = 33;
	ar[34] = 33;
	ar[35] = 36;
	ar[37] = 36;
	ar[38] = 39;
	ar[41] = 40;
	ar[42] = 40;
	ar[43] = 44;
	ar[51] = 50;
	ar[52] = 50;
	ar[53] = 55;
	ar[54] = 55;
	ar[57] = 58;
	ar[60] = 59;
	ar[61] = 59;
	ar[62] = 59;
	ar[63] = 66;
	ar[64] = 66;
	ar[65] = 66;
	ar[67] = 66;
	ar[68] = 69;
	ar[71] = 70;
	ar[72] = 70;
	ar[73] = 70;
	ar[74] = 77;
	ar[75] = 77;
	ar[76] = 77;
	ar[81] = 80;
	ar[82] = 80;
	ar[83] = 80;
	ar[84] = 80;
	ar[85] = 88;
	ar[86] = 88;
	ar[87] = 88;
	ar[90] = 89;
	ar[91] = 89;
	ar[92] = 89;
	ar[93] = 89;
	ar[94] = 89;
	ar[95] = 99;
	ar[96] = 99;
	ar[97] = 99;
	ar[98] = 99;
	

	for (i = 110; i < 200; i++)
		ar[i] = 100 + ar[i-100];

	ar[101] = 100;
	ar[102] = 100;
	ar[103] = 100;
	ar[104] = 100; 
	ar[105] = 100;
	ar[106] = 110;
	ar[107] = 110;
	ar[108] = 110;
	ar[109] = 110;
	cin >> T;
	while (T--){

		cin >> k;
		cout << ar[k] << endl;
		
	}

}
