#include <stdio.h>

int main(){
	FILE *outFile = fopen("out.mob","w");

	int sX = 0; //x座標始点
	int sY = 750; //y座標始点
	int eX = 1000; //x座標終点
	int eY = 1750; //y座標終点

	int pX = 13; //ノードのx方向個数
	int pY = 13;

	int xdis = 70; //ノード間距離
	int ydis = 70;

	int nodenum = 169; //ノード数
	int startnum = 200; //ノード番号のはじまり


	int i = 0, j = 0;
	int offsetX = 70; //
	int offsetY = 70; //
	int thisnum = startnum;
	int thisX = sX + offsetX;
	int thisY = sY + offsetY;
	int count = 0;
	/*for(i = 1; i <= pX; i++){
		for(j = 1; j <= pY; j++) {
			fprintf(outFile,"$node_(%d) set X_ %d\n",thisnum,thisX);
			fprintf(outFile, "$node_(%d) set Y_ %d\n", thisnum, thisY);
			fprintf(outFile,"$node_(%d) set Z_ 0\n",thisnum);

			thisnum++;
			thisY = thisY + ydis;
		}

		thisX = thisX + xdis;
		thisY = sY + offsetY;
	}*/

	for(i = 1; i <= pY; i++){
		for(j = 1; j <= pX; j++) {
			fprintf(outFile,"$node_(%d) set X_ %d\n",thisnum,thisX);
			fprintf(outFile, "$node_(%d) set Y_ %d\n", thisnum, thisY);
			fprintf(outFile,"$node_(%d) set Z_ 0\n",thisnum);

			thisnum++;
			thisX = thisX + xdis;
		}

		thisY = thisY + ydis;
		thisX = sX + offsetX;
	}
}
