#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<unistd.h>
using namespace std;

string cp="";
char Arr[31][91];
int Arr1[58][2];
int p11=0, p12=0, p13=0, p14=0, p21=0, p22=0, p23=0, p24=0, p31=0 ,p32=0, p33=0, p34=0, p41=0,p42=0, p43=0, p44=0;
bool a1=false,a2=false,a3=false,a4=false;
bool b1=false,b2=false,b3=false,b4=false;
bool c1=false,c2=false,c3=false,c4=false;
bool d1=false,d2=false,d3=false,d4=false;
bool Play1=true,Play2=true,Play3=true,Play4=true;
int g1=0, g2=0, g3=0, g4=0;
int val1=0,val2=0,val3=0,val4=0;
int sumA=0,sumB=0,sumC=0,sumD=0;
int turnCal=0;
int turnAKill=0,turnBKill=0,turnCKill=0,turnDKill=0;

void Grid(){
	cp =   "...........................................................................................";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.           1   1   1   1           ...................           2   2   2   2           .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",...........................................................................................";
	cp += ",.     .     .     .     .     .     .                 .     .     .     .     .     .     .";
	cp += ",...........................................................................................";
	cp += ",.     .     .     .     .     .     .                 .     .     .     .     .     .     .";
	cp += ",...........................................................................................";
	cp += ",.     .     .     .     .     .     .                 .     .     .     .     .     .     .";
	cp += ",...........................................................................................";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.           4   4   4   4           ...................           3   3   3   3           .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",.                                   ...................                                   .";
	cp += ",.                                   .     .     .     .                                   .";
	cp += ",...........................................................................................";
	int j=0,k=0;
	for(int i=0;cp[i]!='\0';i++){
		if(cp[i]==','){
			j++;k=0;i++;
		}
		Arr[j][k]=cp[i];
		k++;
	}
}

void DrawLudo(){
	for(int i=0;i<31;i++){
		for(int j=0;j<91;j++){
			cout<<Arr[i][j];
		}
		cout<<endl;
	}
	sumA=0;
	sumB=0;
	sumC=0;
	sumD=0;
	
}

void Movement(int who){
	if(who==1){	
		Arr1[0][0]=13;Arr1[0][1]=sumA+7;
		Arr1[1][0]=13;Arr1[1][1]=sumA+13;
		Arr1[2][0]=13;Arr1[2][1]=sumA+19;
		Arr1[3][0]=13;Arr1[3][1]=sumA+25;
		Arr1[4][0]=13;Arr1[4][1]=sumA+31;
		Arr1[5][0]=11;Arr1[5][1]=sumA+37;
		Arr1[6][0]=9;Arr1[6][1]=sumA+37;
		Arr1[7][0]=7;Arr1[7][1]=sumA+37;
		Arr1[8][0]=5;Arr1[8][1]=sumA+37;
		Arr1[9][0]=3;Arr1[9][1]=sumA+37;
		Arr1[10][0]=1;Arr1[10][1]=sumA+37;
		Arr1[11][0]=1;Arr1[11][1]=sumA+43;
		Arr1[12][0]=1;Arr1[12][1]=sumA+49;
		Arr1[13][0]=3;Arr1[13][1]=sumA+49;
		Arr1[14][0]=5;Arr1[14][1]=sumA+49;
		Arr1[15][0]=7;Arr1[15][1]=sumA+49;
		Arr1[16][0]=9;Arr1[16][1]=sumA+49;
		Arr1[17][0]=11;Arr1[17][1]=sumA+49;
		Arr1[18][0]=13;Arr1[18][1]=sumA+55;
		Arr1[19][0]=13;Arr1[19][1]=sumA+61;
		Arr1[20][0]=13;Arr1[20][1]=sumA+67;
		Arr1[21][0]=13;Arr1[21][1]=sumA+73;
		Arr1[22][0]=13;Arr1[22][1]=sumA+79;
		Arr1[23][0]=13;Arr1[23][1]=sumA+85;
		Arr1[24][0]=15;Arr1[24][1]=sumA+85;
		Arr1[25][0]=17;Arr1[25][1]=sumA+85;
		Arr1[26][0]=17;Arr1[26][1]=sumA+79;
		Arr1[27][0]=17;Arr1[27][1]=sumA+73;
		Arr1[28][0]=17;Arr1[28][1]=sumA+67;
		Arr1[29][0]=17;Arr1[29][1]=sumA+61;
		Arr1[30][0]=17;Arr1[30][1]=sumA+55;
		Arr1[31][0]=19;Arr1[31][1]=sumA+49;
		Arr1[32][0]=21;Arr1[32][1]=sumA+49;
		Arr1[33][0]=23;Arr1[33][1]=sumA+49;
		Arr1[34][0]=25;Arr1[34][1]=sumA+49;
		Arr1[35][0]=27;Arr1[35][1]=sumA+49;
		Arr1[36][0]=29;Arr1[36][1]=sumA+49;
		Arr1[37][0]=29;Arr1[37][1]=sumA+43;
		Arr1[38][0]=29;Arr1[38][1]=sumA+37;
		Arr1[39][0]=27;Arr1[39][1]=sumA+37;
		Arr1[40][0]=25;Arr1[40][1]=sumA+37;
		Arr1[41][0]=23;Arr1[41][1]=sumA+37;
		Arr1[42][0]=21;Arr1[42][1]=sumA+37;
		Arr1[43][0]=19;Arr1[43][1]=sumA+37;
		Arr1[44][0]=17;Arr1[44][1]=sumA+31;
		Arr1[45][0]=17;Arr1[45][1]=sumA+25;
		Arr1[46][0]=17;Arr1[46][1]=sumA+19;
		Arr1[47][0]=17;Arr1[47][1]=sumA+13;
		Arr1[48][0]=17;Arr1[48][1]=sumA+7;
		Arr1[49][0]=17;Arr1[49][1]=sumA+1;
		Arr1[50][0]=15;Arr1[50][1]=sumA+1;
		Arr1[51][0]=15;Arr1[51][1]=sumA+7;
		Arr1[52][0]=15;Arr1[52][1]=sumA+13;
		Arr1[53][0]=15;Arr1[53][1]=sumA+19;
		Arr1[54][0]=15;Arr1[54][1]=sumA+25;
		Arr1[55][0]=15;Arr1[55][1]=sumA+31;
		Arr1[56][0]=15;Arr1[56][1]=sumA+37;
	}
	if(who==2){
		Arr1[0][0]=3;Arr1[0][1]=sumB+49;
		Arr1[1][0]=5;Arr1[1][1]=sumB+49;
		Arr1[2][0]=7;Arr1[2][1]=sumB+49;
		Arr1[3][0]=9;Arr1[3][1]=sumB+49;
		Arr1[4][0]=11;Arr1[4][1]=sumB+49;
		Arr1[5][0]=13;Arr1[5][1]=sumB+55;
		Arr1[6][0]=13;Arr1[6][1]=sumB+61;
		Arr1[7][0]=13;Arr1[7][1]=sumB+67;
		Arr1[8][0]=13;Arr1[8][1]=sumB+73;
		Arr1[9][0]=13;Arr1[9][1]=sumB+79;
		Arr1[10][0]=13;Arr1[10][1]=sumB+85;
		Arr1[11][0]=15;Arr1[11][1]=sumB+85;
		Arr1[12][0]=17;Arr1[12][1]=sumB+85;
		Arr1[13][0]=17;Arr1[13][1]=sumB+79;
		Arr1[14][0]=17;Arr1[14][1]=sumB+73;
		Arr1[15][0]=17;Arr1[15][1]=sumB+67;
		Arr1[16][0]=17;Arr1[16][1]=sumB+61;
		Arr1[17][0]=17;Arr1[17][1]=sumB+55;
		Arr1[18][0]=19;Arr1[18][1]=sumB+49;
		Arr1[19][0]=21;Arr1[19][1]=sumB+49;
		Arr1[20][0]=23;Arr1[20][1]=sumB+49;
		Arr1[21][0]=25;Arr1[21][1]=sumB+49;
		Arr1[22][0]=27;Arr1[22][1]=sumB+49;
		Arr1[23][0]=29;Arr1[23][1]=sumB+49;
		Arr1[24][0]=29;Arr1[24][1]=sumB+43;
		Arr1[25][0]=29;Arr1[25][1]=sumB+37;
		Arr1[26][0]=27;Arr1[26][1]=sumB+37;
		Arr1[27][0]=25;Arr1[27][1]=sumB+37;
		Arr1[28][0]=23;Arr1[28][1]=sumB+37;
		Arr1[29][0]=21;Arr1[29][1]=sumB+37;
		Arr1[30][0]=19;Arr1[30][1]=sumB+37;
		Arr1[31][0]=17;Arr1[31][1]=sumB+31;
		Arr1[32][0]=17;Arr1[32][1]=sumB+25;
		Arr1[33][0]=17;Arr1[33][1]=sumB+19;
		Arr1[34][0]=17;Arr1[34][1]=sumB+13;
		Arr1[35][0]=17;Arr1[35][1]=sumB+7;
		Arr1[36][0]=17;Arr1[36][1]=sumB+1;
		Arr1[37][0]=15;Arr1[37][1]=sumB+1;
		Arr1[38][0]=13;Arr1[38][1]=sumB+1;
		Arr1[39][0]=13;Arr1[39][1]=sumB+7;
		Arr1[40][0]=13;Arr1[40][1]=sumB+13;
		Arr1[41][0]=13;Arr1[41][1]=sumB+19;
		Arr1[42][0]=13;Arr1[42][1]=sumB+25;
		Arr1[43][0]=13;Arr1[43][1]=sumB+31;
		Arr1[44][0]=11;Arr1[44][1]=sumB+37;
		Arr1[45][0]=9;Arr1[45][1]=sumB+37;
		Arr1[46][0]=7;Arr1[46][1]=sumB+37;
		Arr1[47][0]=5;Arr1[47][1]=sumB+37;
		Arr1[48][0]=3;Arr1[48][1]=sumB+37;
		Arr1[49][0]=1;Arr1[49][1]=sumB+37;
		Arr1[50][0]=1;Arr1[50][1]=sumB+43;
		Arr1[51][0]=3;Arr1[51][1]=sumB+43;
		Arr1[52][0]=5;Arr1[52][1]=sumB+43;
		Arr1[53][0]=7;Arr1[53][1]=sumB+43;
		Arr1[54][0]=9;Arr1[54][1]=sumB+43;
		Arr1[55][0]=11;Arr1[55][1]=sumB+43;
		Arr1[56][0]=13;Arr1[56][1]=sumB+43;
	}

	if(who==3){
		Arr1[0][0]=17;Arr1[0][1]=sumC+79;
		Arr1[1][0]=17;Arr1[1][1]=sumC+73;
		Arr1[2][0]=17;Arr1[2][1]=sumC+67;
		Arr1[3][0]=17;Arr1[3][1]=sumC+61;
		Arr1[4][0]=17;Arr1[4][1]=sumC+55;
		Arr1[5][0]=19;Arr1[5][1]=sumC+49;
		Arr1[6][0]=21;Arr1[6][1]=sumC+49;
		Arr1[7][0]=23;Arr1[7][1]=sumC+49;
		Arr1[8][0]=25;Arr1[8][1]=sumC+49;
		Arr1[9][0]=27;Arr1[9][1]=sumC+49;
		Arr1[10][0]=29;Arr1[10][1]=sumC+49;
		Arr1[11][0]=29;Arr1[11][1]=sumC+43;
		Arr1[12][0]=29;Arr1[12][1]=sumC+37;
		Arr1[13][0]=27;Arr1[13][1]=sumC+37;
		Arr1[14][0]=25;Arr1[14][1]=sumC+37;
		Arr1[15][0]=23;Arr1[15][1]=sumC+37;
		Arr1[16][0]=21;Arr1[16][1]=sumC+37;
		Arr1[17][0]=19;Arr1[17][1]=sumC+37;
		Arr1[18][0]=17;Arr1[18][1]=sumC+31;
		Arr1[19][0]=17;Arr1[19][1]=sumC+25;
		Arr1[20][0]=17;Arr1[20][1]=sumC+19;
		Arr1[21][0]=17;Arr1[21][1]=sumC+13;
		Arr1[22][0]=17;Arr1[22][1]=sumC+7;
		Arr1[23][0]=17;Arr1[23][1]=sumC+1;
		Arr1[24][0]=15;Arr1[24][1]=sumC+1;
		Arr1[25][0]=13;Arr1[25][1]=sumC+1;
		Arr1[26][0]=13;Arr1[26][1]=sumC+7;
		Arr1[27][0]=13;Arr1[27][1]=sumC+13;
		Arr1[28][0]=13;Arr1[28][1]=sumC+19;
		Arr1[29][0]=13;Arr1[29][1]=sumC+25;
		Arr1[30][0]=13;Arr1[30][1]=sumC+31;
		Arr1[31][0]=11;Arr1[31][1]=sumC+37;
		Arr1[32][0]=9;Arr1[32][1]=sumC+37;
		Arr1[33][0]=7;Arr1[33][1]=sumC+37;
		Arr1[34][0]=5;Arr1[34][1]=sumC+37;
		Arr1[35][0]=3;Arr1[35][1]=sumC+37;
		Arr1[36][0]=1;Arr1[36][1]=sumC+37;
		Arr1[37][0]=1;Arr1[37][1]=sumC+43;
		Arr1[38][0]=1;Arr1[38][1]=sumC+49;
		Arr1[39][0]=3;Arr1[39][1]=sumC+49;
		Arr1[40][0]=5;Arr1[40][1]=sumC+49;
		Arr1[41][0]=7;Arr1[41][1]=sumC+49;
		Arr1[42][0]=9;Arr1[42][1]=sumC+49;
		Arr1[43][0]=11;Arr1[43][1]=sumC+49;
		Arr1[44][0]=13;Arr1[44][1]=sumC+55;
		Arr1[45][0]=13;Arr1[45][1]=sumC+61;
		Arr1[46][0]=13;Arr1[46][1]=sumC+67;
		Arr1[47][0]=13;Arr1[47][1]=sumC+73;
		Arr1[48][0]=13;Arr1[48][1]=sumC+79;
		Arr1[49][0]=13;Arr1[49][1]=sumC+85;
		Arr1[50][0]=15;Arr1[50][1]=sumC+85;
		Arr1[51][0]=15;Arr1[51][1]=sumC+79;
		Arr1[52][0]=15;Arr1[52][1]=sumC+73;
		Arr1[53][0]=15;Arr1[53][1]=sumC+67;
		Arr1[54][0]=15;Arr1[54][1]=sumC+61;
		Arr1[55][0]=15;Arr1[55][1]=sumC+55;
		Arr1[56][0]=15;Arr1[56][1]=sumC+49;
	}
	
	if(who==4){
		Arr1[0][0]=27;Arr1[0][1]=sumD+37;
		Arr1[1][0]=25;Arr1[1][1]=sumD+37;
		Arr1[2][0]=23;Arr1[2][1]=sumD+37;
		Arr1[3][0]=21;Arr1[3][1]=sumD+37;
		Arr1[4][0]=19;Arr1[4][1]=sumD+37;
		Arr1[5][0]=17;Arr1[5][1]=sumD+31;
		Arr1[6][0]=17;Arr1[6][1]=sumD+25;
		Arr1[7][0]=17;Arr1[7][1]=sumD+19;
		Arr1[8][0]=17;Arr1[8][1]=sumD+13;
		Arr1[9][0]=17;Arr1[9][1]=sumD+7;
		Arr1[10][0]=17;Arr1[10][1]=sumD+1;
		Arr1[11][0]=15;Arr1[11][1]=sumD+1;
		Arr1[12][0]=13;Arr1[12][1]=sumD+1;
		Arr1[13][0]=13;Arr1[13][1]=sumD+7;
		Arr1[14][0]=13;Arr1[14][1]=sumD+13;
		Arr1[15][0]=13;Arr1[15][1]=sumD+19;
		Arr1[16][0]=13;Arr1[16][1]=sumD+25;
		Arr1[17][0]=13;Arr1[17][1]=sumD+31;
		Arr1[18][0]=11;Arr1[18][1]=sumD+37;
		Arr1[19][0]=9;Arr1[19][1]=sumD+37;
		Arr1[20][0]=7;Arr1[20][1]=sumD+37;
		Arr1[21][0]=5;Arr1[21][1]=sumD+37;
		Arr1[22][0]=3;Arr1[22][1]=sumD+37;
		Arr1[23][0]=1;Arr1[23][1]=sumD+37;
		Arr1[24][0]=1;Arr1[24][1]=sumD+43;
		Arr1[25][0]=1;Arr1[25][1]=sumD+49;
		Arr1[26][0]=3;Arr1[26][1]=sumD+49;
		Arr1[27][0]=5;Arr1[27][1]=sumD+49;
		Arr1[28][0]=7;Arr1[28][1]=sumD+49;
		Arr1[29][0]=9;Arr1[29][1]=sumD+49;
		Arr1[30][0]=11;Arr1[30][1]=sumD+49;
		Arr1[31][0]=13;Arr1[31][1]=sumD+55;
		Arr1[32][0]=13;Arr1[32][1]=sumD+61;
		Arr1[33][0]=13;Arr1[33][1]=sumD+67;
		Arr1[34][0]=13;Arr1[34][1]=sumD+73;
		Arr1[35][0]=13;Arr1[35][1]=sumD+79;
		Arr1[36][0]=13;Arr1[36][1]=sumD+85;
		Arr1[37][0]=15;Arr1[37][1]=sumD+85;
		Arr1[38][0]=17;Arr1[38][1]=sumD+85;
		Arr1[39][0]=17;Arr1[39][1]=sumD+79;
		Arr1[40][0]=17;Arr1[40][1]=sumD+73;
		Arr1[41][0]=17;Arr1[41][1]=sumD+67;
		Arr1[42][0]=17;Arr1[42][1]=sumD+61;
		Arr1[43][0]=17;Arr1[43][1]=sumD+55;
		Arr1[44][0]=19;Arr1[44][1]=sumD+49;
		Arr1[45][0]=21;Arr1[45][1]=sumD+49;
		Arr1[46][0]=23;Arr1[46][1]=sumD+49;
		Arr1[47][0]=25;Arr1[47][1]=sumD+49;
		Arr1[48][0]=27;Arr1[48][1]=sumD+49;
		Arr1[49][0]=29;Arr1[49][1]=sumD+49;
		Arr1[50][0]=29;Arr1[50][1]=sumD+43;
		Arr1[51][0]=27;Arr1[51][1]=sumD+43;
		Arr1[52][0]=25;Arr1[52][1]=sumD+43;
		Arr1[53][0]=23;Arr1[53][1]=sumD+43;
		Arr1[54][0]=21;Arr1[54][1]=sumD+43;
		Arr1[55][0]=19;Arr1[55][1]=sumD+43;
		Arr1[56][0]=17;Arr1[56][1]=sumD+43;
	}

}


int Random(){
	int x = rand()%6;
	return x+1;
}

void Player1(){
	val1 = Random();
	if(val1!=6){
		turnAKill++;
	}
	cout<<"Dice: "<<val1<<endl;
	int check=val1;
	if(val1==6){
		val1=0;
		g1++;
		if(g1==1){
			a1=true;
		}
		if(g1==2){
			a2=true;
		}
		if(g1==3){
			a3=true;
		}
		if(g1==4){
			a4=true;
		}
	}
	int pl1=1;
	int tok=0;
	if(a1 && !a2 && !a3 && !a4){
		p11+=val1;//p2=0,p3=0,p4=0;
		Arr[6][12]=' ';
		Movement(pl1);
		cout<<"Player 1 g1: "<<p11<<endl;
		cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
		Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
	}
	else if(a1 && a2 && !a3 && !a4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val1=check;}
			Arr[6][12]=' ';
			p11+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
		}
		else if(tok==2){
			Arr[6][12]=' ';
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			p12+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
		}
	}
	else if(a1 && a2 && a3 && !a4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val1=check;}
			Arr[6][12]=' ';
			p11+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
		}
		else if(tok==2){
			Arr[6][12]=' ';
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
	//		if (check==6) {val1=check;}
			p12+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
		}
		else if(tok==3){
			Arr[6][12]=' ';
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
			p13+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
		}
	}
	else if(a1 && a2 && a3 && a4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cout<<"Enter 4 to move token g4"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val1=check;}
			Arr[6][12]=' ';
			p11+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
			
			sumA=3;
			Arr[6][24]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p14<<endl;
			cout<<"Player 1 g3: "<<Arr1[p14][0]<<"\t"<<Arr1[p14][1]<<endl;
			Arr[Arr1[p14][0]][Arr1[p14][1]]='1';
		}
		else if(tok==2){
			Arr[6][12]=' ';
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
	//		if (check==6) {val1=check;}
			p12+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
			
			sumA=3;
			Arr[6][24]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p14<<endl;
			cout<<"Player 1 g3: "<<Arr1[p14][0]<<"\t"<<Arr1[p14][1]<<endl;
			Arr[Arr1[p14][0]][Arr1[p14][1]]='1';
		}
		else if(tok==3){
			Arr[6][12]=' ';
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
	//		if (check==6) {val1=check;}
			p13+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
			
			sumA=3;
			Arr[6][24]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p14<<endl;
			cout<<"Player 1 g3: "<<Arr1[p14][0]<<"\t"<<Arr1[p14][1]<<endl;
			Arr[Arr1[p14][0]][Arr1[p14][1]]='1';
		}
		else if(tok==4){
			Arr[6][12]=' ';
			Movement(pl1);
			cout<<"Player 1 g1: "<<p11<<endl;
			cout<<"Player 1 g1: "<<Arr1[p11][0]<<"\t"<<Arr1[p11][1]<<endl;
			Arr[Arr1[p11][0]][Arr1[p11][1]]='1';
			
			sumA=1;
			Arr[6][16]=' ';
			Movement(pl1);
			cout<<"Player 1 g2: "<<p12<<endl;
			cout<<"Player 1 g2: "<<Arr1[p12][0]<<"\t"<<Arr1[p12][1]<<endl;
			Arr[Arr1[p12][0]][Arr1[p12][1]]='1';
			
			sumA=2;
			Arr[6][20]=' ';
			Movement(pl1);
			cout<<"Player 1 g3: "<<p13<<endl;
			cout<<"Player 1 g3: "<<Arr1[p13][0]<<"\t"<<Arr1[p13][1]<<endl;
			Arr[Arr1[p13][0]][Arr1[p13][1]]='1';
			
			sumA=3;
			Arr[6][24]=' ';
			p14+=val1;//p2=0,p3=0,p4=0;
			Movement(pl1);
			cout<<"Player 1 g3: "<<p14<<endl;
			cout<<"Player 1 g3: "<<Arr1[p14][0]<<"\t"<<Arr1[p14][1]<<endl;
			Arr[Arr1[p14][0]][Arr1[p14][1]]='1';
		}
	}
}

void Player2(){
	val2 = Random();
	if(val2!=6){
		turnBKill++;
	}
	cout<<"Dice: "<<val2<<endl;
	int check=val2;
	if(val2==6){
		val2=0;
		g2++;
		if(g2==1){
			b1=true;
		}
		if(g2==2){
			b2=true;
		}
		if(g2==3){
			b3=true;
		}
		if(g2==4){
			b4=true;
		}
	}
	int pl2=2;
	int tok=0;
	if(b1 && !b2 && !b3 && !b4){
		p21+=val2;//p2=0,p3=0,p4=0;
		Arr[6][66]=' ';
		Movement(pl2);
		cout<<"Player 2 g1: "<<p21<<endl;
		cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
		Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
	}
	else if(b1 && b2 && !b3 && !b4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[6][66]=' ';
			p21+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
		}
		else if(tok==2){
			Arr[6][66]=' ';
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			p22+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
		}
	}
	else if(b1 && b2 && b3 && !b4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[6][66]=' ';
			p21+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
			
			sumB=2;
			Arr[6][74]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
		}
		else if(tok==2){
			Arr[6][66]=' ';
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
	//		if (check==6) {val2=check;}
			p22+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
			
			sumB=2;
			Arr[6][74]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
		}
		else if(tok==3){
			Arr[6][66]=' ';
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
			
			sumB=2;
			Arr[6][74]=' ';
			p23+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
		}
	}
	else if(b1 && b2 && b3 && b4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cout<<"Enter 4 to move token g4"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[6][66]=' ';
			p21+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
			
			sumB=2;
			Arr[6][74]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
			
			sumB=3;
			Arr[6][78]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p24<<endl;
			cout<<"Player 2 g3: "<<Arr1[p24][0]<<"\t"<<Arr1[p24][1]<<endl;
			Arr[Arr1[p24][0]][Arr1[p24][1]]='2';
		}
		else if(tok==2){
			Arr[6][66]=' ';
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
	//		if (check==6) {val2=check;}
			p22+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
			
			sumB=2;
			Arr[6][74]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
			
			sumB=3;
			Arr[6][78]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p24<<endl;
			cout<<"Player 2 g3: "<<Arr1[p24][0]<<"\t"<<Arr1[p24][1]<<endl;
			Arr[Arr1[p24][0]][Arr1[p24][1]]='2';
		}
		else if(tok==3){
			Arr[6][66]=' ';
			Movement(pl2);
			cout<<"Player 2 g1: "<<p21<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
			
			sumB=2;
			Arr[6][74]=' ';
	//		if (check==6) {val2=check;}
			p23+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
			
			sumB=3;
			Arr[6][78]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p24<<endl;
			cout<<"Player 2 g3: "<<Arr1[p24][0]<<"\t"<<Arr1[p24][1]<<endl;
			Arr[Arr1[p24][0]][Arr1[p24][1]]='2';
		}
		else if(tok==4){
			Arr[6][66]=' ';
			Movement(pl2);
			cout<<"Player 2 g1: "<<p12<<endl;
			cout<<"Player 2 g1: "<<Arr1[p21][0]<<"\t"<<Arr1[p21][1]<<endl;
			Arr[Arr1[p21][0]][Arr1[p21][1]]='2';
			
			sumB=1;
			Arr[6][70]=' ';
			Movement(pl2);
			cout<<"Player 2 g2: "<<p22<<endl;
			cout<<"Player 2 g2: "<<Arr1[p22][0]<<"\t"<<Arr1[p22][1]<<endl;
			Arr[Arr1[p22][0]][Arr1[p22][1]]='2';
		 
			sumB=2;
			Arr[6][74]=' ';
			Movement(pl2);
			cout<<"Player 2 g3: "<<p23<<endl;
			cout<<"Player 2 g3: "<<Arr1[p23][0]<<"\t"<<Arr1[p23][1]<<endl;
			Arr[Arr1[p23][0]][Arr1[p23][1]]='2';
			
			sumB=3;
			Arr[6][78]=' ';
			p24+=val2;//p2=0,p3=0,p4=0;
			Movement(pl2);
			cout<<"Player 2 g3: "<<p24<<endl;
			cout<<"Player 2 g3: "<<Arr1[p24][0]<<"\t"<<Arr1[p24][1]<<endl;
			Arr[Arr1[p24][0]][Arr1[p24][1]]='2';
		}
	}
}

void Player3(){
	val3 = Random();
	if(val3!=6){
		turnCKill++;
	}
	cout<<"Dice: "<<val3<<endl;
	int check=val3;
	if(val3==6){
		val3=0;
		g3++;
		if(g3==1){
			c1=true;
		}
		if(g3==2){
			c2=true;
		}
		if(g3==3){
			c3=true;
		}
		if(g3==4){
			c4=true;
		}
	}
	int pl3=3;
	int tok=0;
	if(c1 && !c2 && !c3 && !c4){
		p31+=val3;//p2=0,p3=0,p4=0;
		Arr[24][66]=' ';
		Movement(pl3);
		cout<<"Player 3 g1: "<<p31<<endl;
		cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
		Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
	}
	else if(c1 && c2 && !c3 && !c4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[24][66]=' ';
			p31+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
		}
		else if(tok==2){
			Arr[24][66]=' ';
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			p32+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
		}
	}
	else if(c1 && c2 && c3 && !c4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[24][66]=' ';
			p31+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
			
			sumC=2;
			Arr[24][74]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p33<<endl;
			cout<<"Player 3 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
		}
		else if(tok==2){
			Arr[24][66]=' ';
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
	//		if (check==6) {val2=check;}
			p32+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
			
			sumC=2;
			Arr[24][74]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p33<<endl;
			cout<<"Player 3 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
		}
		else if(tok==3){
			Arr[24][66]=' ';
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
			
			sumC=2;
			Arr[24][74]=' ';
			p33+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 1 g3: "<<p33<<endl;
			cout<<"Player 1 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
		}
	}
	else if(c1 && c2 && c3 && c4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cout<<"Enter 4 to move token g4"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[24][66]=' ';
			p31+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
			
			sumC=2;
			Arr[24][74]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p33<<endl;
			cout<<"Player 3 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
			
			sumC=3;
			Arr[24][78]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p34<<endl;
			cout<<"Player 3 g3: "<<Arr1[p34][0]<<"\t"<<Arr1[p34][1]<<endl;
			Arr[Arr1[p34][0]][Arr1[p34][1]]='3';
		}
		else if(tok==2){
			Arr[24][66]=' ';
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
	//		if (check==6) {val2=check;}
			p32+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
			
			sumC=2;
			Arr[24][74]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p33<<endl;
			cout<<"Player 3 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
			
			sumC=3;
			Arr[24][78]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p34<<endl;
			cout<<"Player 3 g3: "<<Arr1[p34][0]<<"\t"<<Arr1[p34][1]<<endl;
			Arr[Arr1[p34][0]][Arr1[p34][1]]='3';
		}
		else if(tok==3){
			Arr[24][66]=' ';
			Movement(pl3);
			cout<<"Player 3 g1: "<<p31<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
			
			sumC=2;
			Arr[24][74]=' ';
	//		if (check==6) {val2=check;}
			p33+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g3: "<<p33<<endl;
			cout<<"Player 3 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
			
			sumC=3;
			Arr[24][78]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p34<<endl;
			cout<<"Player 3 g3: "<<Arr1[p34][0]<<"\t"<<Arr1[p34][1]<<endl;
			Arr[Arr1[p34][0]][Arr1[p34][1]]='3';
		}
		else if(tok==4){
			Arr[24][66]=' ';
			Movement(pl3);
			cout<<"Player 3 g1: "<<p32<<endl;
			cout<<"Player 3 g1: "<<Arr1[p31][0]<<"\t"<<Arr1[p31][1]<<endl;
			Arr[Arr1[p31][0]][Arr1[p31][1]]='3';
			
			sumC=1;
			Arr[24][70]=' ';
			Movement(pl3);
			cout<<"Player 3 g2: "<<p32<<endl;
			cout<<"Player 3 g2: "<<Arr1[p32][0]<<"\t"<<Arr1[p32][1]<<endl;
			Arr[Arr1[p32][0]][Arr1[p32][1]]='3';
		 
			sumC=2;
			Arr[24][74]=' ';
			Movement(pl3);
			cout<<"Player 3 g3: "<<p33<<endl;
			cout<<"Player 3 g3: "<<Arr1[p33][0]<<"\t"<<Arr1[p33][1]<<endl;
			Arr[Arr1[p33][0]][Arr1[p33][1]]='3';
			
			sumC=3;
			Arr[24][78]=' ';
			p34+=val3;//p2=0,p3=0,p4=0;
			Movement(pl3);
			cout<<"Player 3 g3: "<<p34<<endl;
			cout<<"Player 3 g3: "<<Arr1[p34][0]<<"\t"<<Arr1[p34][1]<<endl;
			Arr[Arr1[p34][0]][Arr1[p34][1]]='3';
		}
	}
}

void Player4(){
	val4 = Random();
	if(val4!=6){
		turnDKill++;
	}
	cout<<"Dice: "<<val4<<endl;
	int check=val4;
	if(val4==6){
		val4=0;
		g4++;
		if(g4==1){
			d1=true;
		}
		if(g4==2){
			d2=true;
		}
		if(g4==3){
			d3=true;
		}
		if(g4==4){
			d4=true;
		}
	}
	int pl4=4;
	int tok=0;
	if(d1 && !d2 && !d3 && !d4){
		p41+=val4;//p2=0,p3=0,p4=0;
		Arr[24][12]=' ';
		Movement(pl4);
		cout<<"Player 4 g1: "<<p41<<endl;
		cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
		Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
	}
	else if(d1 && d2 && !d3 && !d4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[24][12]=' ';
			p41+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
		}
		else if(tok==2){
			Arr[24][12]=' ';
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			p42+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
		}
	}
	else if(d1 && d2 && d3 && !d4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[24][12]=' ';
			p41+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
			
			sumD=2;
			Arr[24][20]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
		}
		else if(tok==2){
			Arr[24][12]=' ';
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
	//		if (check==6) {val2=check;}
			p42+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
			
			sumD=2;
			Arr[24][20]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
		}
		else if(tok==3){
			Arr[24][12]=' ';
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
			
			sumD=2;
			Arr[24][20]=' ';
			p43+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
		}
	}
	else if(d1 && d2 && d3 && d4){
		cout<<"Enter 1 to move token g1"<<endl;
		cout<<"Enter 2 to move token g2"<<endl;
		cout<<"Enter 3 to move token g3"<<endl;
		cout<<"Enter 4 to move token g4"<<endl;
		cin>>tok;
		if(tok==1){
	//		if (check==6) {val2=check;}
			Arr[24][12]=' ';
			p41+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
			
			sumD=2;
			Arr[24][20]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
			
			sumD=3;
			Arr[24][24]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p44<<endl;
			cout<<"Player 4 g3: "<<Arr1[p44][0]<<"\t"<<Arr1[p44][1]<<endl;
			Arr[Arr1[p44][0]][Arr1[p44][1]]='4';
		}
		else if(tok==2){
			Arr[24][12]=' ';
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
	//		if (check==6) {val2=check;}
			p42+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
			
			sumD=2;
			Arr[24][20]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
			
			sumD=3;
			Arr[24][24]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p44<<endl;
			cout<<"Player 4 g3: "<<Arr1[p44][0]<<"\t"<<Arr1[p44][1]<<endl;
			Arr[Arr1[p44][0]][Arr1[p44][1]]='4';
		}
		else if(tok==3){
			Arr[24][12]=' ';
			Movement(pl4);
			cout<<"Player 4 g1: "<<p41<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
			
			sumD=2;
			Arr[24][20]=' ';
	//		if (check==6) {val2=check;}
			p43+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
			
			sumD=3;
			Arr[24][24]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p44<<endl;
			cout<<"Player 4 g3: "<<Arr1[p44][0]<<"\t"<<Arr1[p44][1]<<endl;
			Arr[Arr1[p44][0]][Arr1[p44][1]]='4';
		}
		else if(tok==4){
			Arr[24][12]=' ';
			Movement(pl4);
			cout<<"Player 4 g1: "<<p42<<endl;
			cout<<"Player 4 g1: "<<Arr1[p41][0]<<"\t"<<Arr1[p41][1]<<endl;
			Arr[Arr1[p41][0]][Arr1[p41][1]]='4';
			
			sumD=1;
			Arr[24][16]=' ';
			Movement(pl4);
			cout<<"Player 4 g2: "<<p42<<endl;
			cout<<"Player 4 g2: "<<Arr1[p42][0]<<"\t"<<Arr1[p42][1]<<endl;
			Arr[Arr1[p42][0]][Arr1[p42][1]]='4';
		 
			sumD=2;
			Arr[24][20]=' ';
			Movement(pl4);
			cout<<"Player 4 g3: "<<p43<<endl;
			cout<<"Player 4 g3: "<<Arr1[p43][0]<<"\t"<<Arr1[p43][1]<<endl;
			Arr[Arr1[p43][0]][Arr1[p43][1]]='4';
			
			sumD=3;
			Arr[24][24]=' ';
			p44+=val4;//p2=0,p3=0,p4=0;
			Movement(pl4);
			cout<<"Player 4 g3: "<<p44<<endl;
			cout<<"Player 4 g3: "<<Arr1[p44][0]<<"\t"<<Arr1[p44][1]<<endl;
			Arr[Arr1[p44][0]][Arr1[p44][1]]='4';
		}
	}
}

void crashByA(){
	if(Arr1[p11][0] == Arr1[p21][0]){
		if(Arr1[p11][1] == Arr1[p21][1]){
			cout<<"Token g1 killed token g2"<<endl;
		}
	}
	if(Arr1[p11][0] + 1 == Arr1[p22][0]){
		if(Arr1[p11][1] == Arr1[p22][1]){
			cout<<"Token g1 killed token g2"<<endl;
		}
	}
	if(Arr1[p11][0] + 2 == Arr1[p23][0]){
		if(Arr1[p11][1] == Arr1[p23][1]){
			cout<<"Token g1 killed token g2"<<endl;
		}
	}
	if(Arr1[p11][0] + 3 == Arr1[p24][0]){
		if(Arr1[p11][1] == Arr1[p24][1]){
			cout<<"Token g1 killed token g2"<<endl;
		}
	}
}

void masterThread(){
	turnCal++;
	if(turnCal==20){
		if(turnAKill==20){
			Play1=false;
			cout<<"Player 1 disqualified"<<endl;
		}
		if(turnBKill==20){
			Play2=false;
			cout<<"Player 2 disqualified"<<endl;
		}
		if(turnCKill==20){
			Play3=false;
			cout<<"Player 3 disqualified"<<endl;
		}
		if(turnDKill==20){
			Play4=false;
			cout<<"Player 4 disqualified"<<endl;
		}
	}
}


int main(){
	srand(time(0));
	for(int i=0;i<25;i++){
		Grid();
		Player1();
		Player2();
		Player3();
		Player4();
		masterThread();
		DrawLudo();
		sleep(1);
	}
	return 0;
} 
