#include<iostream>
#include <cstdlib>


using namespace std;

string player1[101];
string player2[101];
string item[2001];

void board(){    
    cout << " ______________________________________________________________________" << endl;
	cout << "|  " << "100  " << "|  " << "99  " << "|  " << "98  "  << "|  " << "97  " << "|  " << "96  " << "|  " << "95  " << "|  " << "94  " << "|  " << "93  " << "|  " << "92  " << "|  " << "91  |" <<endl;
	cout << "|" << item[100] << " " <<  player1[100] << player2[100]  << "  |" << item[99] << " " <<  player1[99] << player2[99]  << " |" << item[98] << " " <<  player1[98] << player2[98]  << " |" << item[97] << " " <<  player1[97] << player2[97]  << " |" << item[96] << " " <<  player1[96] << player2[96]  << " |" << item[95] << " " <<  player1[95] << player2[95] << " |" << item[94] << " " <<  player1[94] << player2[94]<< " |" << item[93] << " " <<  player1[93] << player2[93]<< " |" << item[92] << " " <<  player1[92] << player2[92] << " |" << item[91] << " " <<  player1[91] << player2[91] << " |"; 
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "81   " << "|  " << "82  " << "|  " << "83  "  << "|  " << "84  " << "|  " << "85  " << "|  " << "86  " << "|  " << "87  " << "|  " << "88  " << "|  " << "89  " << "|  " << "90  |" <<endl;
	cout << "|" << item[81] << " " <<  player1[81] << player2[81]  << "  |" << item[82] << " " <<  player1[82] << player2[82]  << " |" << item[83] << " " <<  player1[83] << player2[83]  << " |" << item[84] << " " <<  player1[84] << player2[84]  << " |" << item[85] << " " <<  player1[85] << player2[85]  << " |" << item[86] << " " <<  player1[86] << player2[86] << " |" << item[87] << " " <<  player1[87] << player2[87]<< " |" << item[88] << " " <<  player1[88] << player2[88]<< " |" << item[89] << " " <<  player1[89] << player2[89] << " |" << item[90] << " " <<  player1[90] << player2[90] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "80   " << "|  " << "79  " << "|  " << "78  "  << "|  " << "77  " << "|  " << "76  " << "|  " << "75  " << "|  " << "74  " << "|  " << "73  " << "|  " << "72  " << "|  " << "71  |" <<endl;
	cout << "|" << item[80] << " " <<  player1[80] << player2[80]  << "  |" << item[79] << " " <<  player1[79] << player2[79]  << " |" << item[78] << " " <<  player1[78] << player2[78]  << " |" << item[77] << " " <<  player1[77] << player2[77]  << " |" << item[76] << " " <<  player1[76] << player2[76]  << " |" << item[75] << " " <<  player1[75] << player2[75] << " |" << item[74] << " " <<  player1[74] << player2[74]<< " |" << item[73] << " " <<  player1[73] << player2[73]<< " |" << item[72] << " " <<  player1[72] << player2[72] << " |" << item[71] << " " <<  player1[71] << player2[71] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "61   " << "|  " << "62  " << "|  " << "63  "  << "|  " << "64  " << "|  " << "65  " << "|  " << "66  " << "|  " << "67  " << "|  " << "68  " << "|  " << "69  " << "|  " << "70  |" <<endl;
	cout << "|" << item[61] << " " <<  player1[61] << player2[61]  << "  |" << item[62] << " " <<  player1[62] << player2[62]  << " |" << item[63] << " " <<  player1[63] << player2[63]  << " |" << item[64] << " " <<  player1[64] << player2[64]  << " |" << item[65] << " " <<  player1[65] << player2[65]  << " |" << item[66] << " " <<  player1[66] << player2[66] << " |" << item[67] << " " <<  player1[67] << player2[67]<< " |" << item[68] << " " <<  player1[68] << player2[68]<< " |" << item[69] << " " <<  player1[69] << player2[69] << " |" << item[70] << " " <<  player1[70] << player2[70] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "60   " << "|  " << "59  " << "|  " << "58  "  << "|  " << "57  " << "|  " << "56  " << "|  " << "55  " << "|  " << "54  " << "|  " << "53  " << "|  " << "52  " << "|  " << "51  |" <<endl;
	cout << "|" << item[60] << " " <<  player1[60] << player2[60]  << "  |" << item[59] << " " <<  player1[59] << player2[59]  << " |" << item[58] << " " <<  player1[58] << player2[58]  << " |" << item[57] << " " <<  player1[57] << player2[57]  << " |" << item[56] << " " <<  player1[56] << player2[56]  << " |" << item[55] << " " <<  player1[55] << player2[55] << " |" << item[54] << " " <<  player1[54] << player2[54]<< " |" << item[53] << " " <<  player1[53] << player2[53]<< " |" << item[52] << " " <<  player1[52] << player2[52] << " |" << item[51] << " " <<  player1[51] << player2[51] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "41   " << "|  " << "42  " << "|  " << "43  "  << "|  " << "44  " << "|  " << "45  " << "|  " << "46  " << "|  " << "47  " << "|  " << "48  " << "|  " << "49  " << "|  " << "50  |" <<endl;
	cout << "|" << item[41] << " " <<  player1[41] << player2[41]  << "  |" << item[42] << " " <<  player1[42] << player2[42]  << " |" << item[43] << " " <<  player1[43] << player2[43]  << " |" << item[44] << " " <<  player1[44] << player2[44]  << " |" << item[45] << " " <<  player1[45] << player2[45]  << " |" << item[46] << " " <<  player1[46] << player2[46] << " |" << item[47] << " " <<  player1[47] << player2[47]<< " |" << item[48] << " " <<  player1[48] << player2[48]<< " |" << item[49] << " " <<  player1[49] << player2[49] << " |" << item[50] << " " <<  player1[50] << player2[50] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "40   " << "|  " << "39  " << "|  " << "38  "  << "|  " << "37  " << "|  " << "36  " << "|  " << "35  " << "|  " << "34  " << "|  " << "33  " << "|  " << "32  " << "|  " << "31  |" <<endl;
	cout << "|" << item[40] << " " <<  player1[40] << player2[40]  << "  |" << item[39] << " " <<  player1[39] << player2[39]  << " |" << item[38] << " " <<  player1[38] << player2[38]  << " |" << item[37] << " " <<  player1[37] << player2[37]  << " |" << item[36] << " " <<  player1[36] << player2[36]  << " |" << item[35] << " " <<  player1[35] << player2[35] << " |" << item[34] << " " <<  player1[34] << player2[34]<< " |" << item[33] << " " <<  player1[33] << player2[33]<< " |" << item[32] << " " <<  player1[32] << player2[32] << " |" << item[31] << " " <<  player1[31] << player2[31] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "21   " << "|  " << "22  " << "|  " << "23  "  << "|  " << "24  " << "|  " << "25  " << "|  " << "26  " << "|  " << "27  " << "|  " << "28  " << "|  " << "29  " << "|  " << "30  |" <<endl;
	cout << "|" << item[21] << " " <<  player1[21] << player2[21]  << "  |" << item[22] << " " <<  player1[22] << player2[22]  << " |" << item[23] << " " <<  player1[23] << player2[23]  << " |" << item[24] << " " <<  player1[24] << player2[24]  << " |" << item[25] << " " <<  player1[25] << player2[25]  << " |" << item[26] << " " <<  player1[26] << player2[26] << " |" << item[27] << " " <<  player1[27] << player2[27]<< " |" << item[28] << " " <<  player1[28] << player2[28]<< " |" << item[29] << " " <<  player1[29] << player2[29] << " |" << item[30] << " " <<  player1[30] << player2[30] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "20   " << "|  " << "19  " << "|  " << "18  "  << "|  " << "17  " << "|  " << "16  " << "|  " << "15  " << "|  " << "14  " << "|  " << "13  " << "|  " << "12  " << "|  " << "11  |" <<endl;
	cout << "|" << item[20] << " " <<  player1[20] << player2[20]  << "  |" << item[19] << " " <<  player1[19] << player2[19]  << " |" << item[18] << " " <<  player1[18] << player2[18]  << " |" << item[17] << " " <<  player1[17] << player2[17]  << " |" << item[16] << " " <<  player1[16] << player2[16]  << " |" << item[15] << " " <<  player1[15] << player2[15] << " |" << item[14] << " " <<  player1[14] << player2[14]<< " |" << item[13] << " " <<  player1[13] << player2[13]<< " |" << item[12] << " " <<  player1[12] << player2[12] << " |" << item[11] << " " <<  player1[11] << player2[11] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
	cout << "|  " << "1    " << "|  " << "2   " << "|  " << "3   "  << "|  " << "4   " << "|  " << "5   " << "|  " << "6   " << "|  " << "7   " << "|  " << "8   " << "|  " << "9   " << "|  " << "10  |" <<endl;
	cout << "|" << item[1] << " " <<  player1[1] << player2[1]  << "  |" << item[2] << " " <<  player1[2] << player2[2]  << " |" << item[3] << " " <<  player1[3] << player2[3]  << " |" << item[4] << " " <<  player1[4] << player2[4]  << " |" << item[5] << " " <<  player1[5] << player2[5]  << " |" << item[6] << " " <<  player1[6] << player2[6] << " |" << item[7] << " " <<  player1[7] << player2[7]<< " |" << item[8] << " " <<  player1[8] << player2[8]<< " |" << item[9] << " " <<  player1[9] << player2[9] << " |" << item[10] << " " <<  player1[10] << player2[10] << " |";
	cout << endl << " ----------------------------------------------------------------------" << endl;
}

int roll() {
    int p;
    p = rand() % 6 + 1;
    return p;
}

int check(int &p, int s1, int s2, int s3, int t1, int t2, int t3, int l1, int l2, int l3){
    while (p == s1 || p == s2 || p == s3)
    {
        if(p == s1){
            p = l1;
        }
        if(p == s2){
            p = l2;
        }
        if(p == s3){
            p = l3;
        }        
    }

    if(p > 100){
            p = 100;
        }
    
    

    return p;
}

int main(){
    //init
    for(int i = 1; i <= 100; i++){ 
		player1[i] = " ";
		player2[i] = " ";  
        item[i] = "  ";
	}

    int s1 = rand() % 100;
    int t1 = rand() % s1;
    int s2 = rand() % 100;
    int t2 = rand() % s2;
    int s3 = rand() % 100;
    int t3 = rand() % s3;
    int l1 = rand() % 100;
    int l2 = rand() % 100;
    int l3 = rand() % 100;


    item[s1] = "S1";
    item[s2] = "S2";
    item[s3] = "S3";
    item[l1] = "L1";
    item[l2] = "L2";
    item[l3] = "L3";
    item[t1] = "T1";
    item[t2] = "T2";
    item[t3] = "T3"; 


    int p1 = 0;
    int p2 = 0;
    char n;
    int r = 0;
    player1[p1] = '1';
    player2[p2] = '2';
    
    board();

    while(p1 != 100 && p2 != 100){
        player1[p1] = ' ';
        player2[p2] = ' ';
        cout << "Press r to roll a dice" << endl;
        cin >> n;
        r = roll();
        cout << "Player1 got " << r << endl;
        p1 = p1 + r;
        p1 = check(p1, s1, s2, s3, l1, l2, l3, t1, t2, t3);
        cout << "Player1 now at position " << p1 << endl;
    }


}