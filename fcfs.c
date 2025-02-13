#include <stdio.h>
int main(){
	int bt[20],wt[20],tt[20],i,n;
	float avgwt,avgtt;
	printf("Enter number of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter Burst time for process %d :",i+1);
		scanf("%d",&bt[i]);
	}
	wt[0]=avgwt=0;
	tt[0]=avgtt=bt[0];
	for(i=1;i<n;i++){
		wt[i]=wt[i-1]+bt[i-1];
		tt[i]=tt[i-1]+bt[i];
		avgwt=avgwt+ wt[i];
		avgtt= avgtt + tt[i];
	}
	printf("\t Process \t Burst Time \t Waiting Time \t TurnAround Time \n");
	for(i=0;i<n;i++)
		printf("\n\t P%d\t\t %d\t\t %d\t\t %d",i+1,bt[i],wt[i],tt[i]);
	printf("\n Average Waiting Time :%f",avgwt/n);
	printf("\n Average TurnAround Time : %f\n",avgtt/n); 
}
