#include <stdio.h>

int main(){
	int l1, l2, l3, lm, ld, ln;
	scanf ("%d %d %d", &l1, &l2, &l3);
	
	if (l1>l2 && l1>l3) {
		lm = l1;
		ld = l2;
		ln = l3;
	} else if (l2>l1 && l2>l3) {
		lm = l2;
		ld = l1;
		ln = l3;
	} else if (l3>l1 && l3>l2) {
		lm = l3;
		ld = l2;
		ln = l1;	
	}
	if (ld+ln>=lm){
		if (l1==l2 && l2==l3){
			printf ("EQ");
		} else if (l1!=l2 && l2!=l3){
			printf ("ES");
		} else if (l1==l2 && l2!=l3){
		printf ("IS");
		} else if (l1==l3 && l1!=l2){
		printf ("IS");
		} else if (l2==l3 && l2!=l1)
		printf ("IS");
	} else printf ("NT");
	
	return 0;
}
