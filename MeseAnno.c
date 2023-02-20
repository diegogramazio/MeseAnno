#include <stdio.h>
/* Applicazione che chiede all'utente di inserire 2 interi m ed a
 * da tastiera, li legge e stampa un messaggio che informa l'utente 
 * su quale sia il mese successivo al mese m dell'anno a */
int main() {
		int m, a;            // mese ed anno 
		int m1, a1;      // mese ed anno succesivi 
		
		/* INPUT */ 
		printf("Caro utente, introduci mese ed anno\n");
		scanf("%d%d", &m, &a);
		
		/* CALCOLA IL PROSSIMO MESE ED ANNO */
		if(m==12) {    // dicembre
		        m1 = 1;
				a1 = a+1;
		}
		else {  // non dicembre
		        m1 = m+1;
				a1 = a;
		}
		
		/* OUTPUT */
		printf("Il mese successivo a quello da te inserito e' il %d%d\n", m1, a1);
}
