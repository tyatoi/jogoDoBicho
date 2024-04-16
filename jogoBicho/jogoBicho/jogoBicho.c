#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int d = 0, l = 0, ant = 0, at = 0, p = 0, s = 0;
	printf("Digite o numero correspondente ao seu dia da semana (segunda: 2, terca: 3, quarta: 4, quinta: 5, sexta: 6, sabado: 7, domingo: 8):");
	scanf("%d", &d);
	l = d * 1000;
	ant = 1;
	at = 1;
	p = 2;
	while (p < l) {
		if (p % 2 == 1) {
			s = s + p;
		}
		p = ant + at;
		ant = at;
		at = p;
	}
	s = s + 2;
	printf("Aqui esta o seu numero da sorte: %d", s);
	return 0;
}