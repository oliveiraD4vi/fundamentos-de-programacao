#include <stdio.h>

int main(){
	int g1, g2;
	scanf ("%d %d", &g1, &g2);
	
	if (g1==1 && g2==2) printf ("1");
		else if (g1==1 && g2==3) printf ("2");
			else if (g1==1 && g2==1) printf ("0");
				else if (g1==2 && g2==3) printf ("1");
					else if (g1==2 && g2==1) printf ("2");
						else if (g1==2 && g2==2) printf ("0");
							else if (g1==3 && g2==1) printf ("1");
								else if (g1==3 && g2==2) printf ("2");
									else if (g1==3 && g2==3) printf ("0");
	
	return 0;
}
