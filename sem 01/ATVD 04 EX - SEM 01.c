#include <stdio.h>

int main(){
	int l1, l2, l3;
	scanf ("%d %d %d", &l1, &l2, &l3);
	
	int t1, t2, t3;
	t1 = l1+l2;
	t2 = l1+l3;
	t3 = l2+l3;
	
	if (t1>=l3 || t2>=l2 || t3>=l1){
		if (l1==l2 && l2==l3){
		printf ("EQ");
	} else if (l1!=l2 && l2!=l3){
		printf ("ES");
	} else if (l1==l2 && l2!=l3){
		printf ("IS");
	} else if (l1==l3 && l1!=l2){
		printf ("IS");
	} else if (l2==l3 && l2!=l1){
		printf ("IS");
	} else printf ("NT");
	} else printf ("NT");
	
	return 0;
}
