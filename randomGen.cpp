#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
  FILE* fp = fopen("data/inputGeekBoys.txt","w");
  int i=0;
  for(i=0;i<10;i++){
  	fprintf(fp,"G%d %d %d %d 0 %d\n",i,rand()%10,rand()%10,rand()%1000000,rand()%10);
  }
  fprintf(fp, "0 0 0 0 0 0\n");
  fp = fopen("data/inputGenerousBoys.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"Ge%d %d %d %d 0 %d\n",i,rand()%10,rand()%10,rand()%1000000,rand()%10);
  }
  fprintf(fp, "0 0 0 0 0 0\n");
  fp = fopen("data/inputMiserBoys.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"M%d %d %d %d 0 %d\n",i,rand()%10,rand()%10,rand()%1000000,rand()%10);
  }
  fprintf(fp, "0 0 0 0 0 0\n");
  fp = fopen("data/inputNormalGirls.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"N%d %d %d %d 0\n",i,rand()%10,rand()%10,rand()%1000000);
  }
  fprintf(fp, "0 0 0 0 0\n");
  fp = fopen("data/inputDesperateGirls.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"D%d %d %d %d 0\n",i,rand()%10,rand()%10,rand()%1000000);
  }
  fprintf(fp, "0 0 0 0 0\n");
  fp = fopen("data/inputChoosyGirls.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"C%d %d %d %d 0\n",i,rand()%10,rand()%10,rand()%1000000);
  }
  fprintf(fp, "0 0 0 0 0\n");
  fp = fopen("data/inputEssentialGifts.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"E%d %d %d \n",i,rand()%10000,rand()%10);
  }
  fprintf(fp, "0 0 0\n");
  fp = fopen("data/inputUtilityGifts.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"U%d %d %d %d\n",i,rand()%10000,rand()%10,rand()%100);
  }
  fprintf(fp, "0 0 0 0\n");
  fp = fopen("data/inputLuxuryGifts.txt","w");
  for(i=0;i<10;i++){
  	fprintf(fp,"L%d %d %d %d %d\n",i,rand()%100000,rand()%10,rand()%10,rand()%10);
  }
  fprintf(fp, "0 0 0 0 0\n");
  return 0;
}
