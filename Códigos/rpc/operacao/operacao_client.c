/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "operacao.h"


void
soma_prog_1(char *host)
{
	CLIENT *clnt;
	resultado  *result_1;
	partes  operation_1_arg;

	operation_1_arg.parte1.n1 = 1;
	operation_1_arg.parte1.n2 = 2;
	operation_1_arg.parte2.n1 = 3;
	operation_1_arg.parte2.n2 = 4;
	operation_1_arg.peso1 = 7;
	operation_1_arg.peso2 = 7.77;
	operation_1_arg.peso3 = 7.7777777;
	operation_1_arg.tipo = 'a';

#ifndef	DEBUG
	clnt = clnt_create (host, SOMA_PROG, SOMA_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = operation_1(&operation_1_arg, clnt);
	if (result_1 == (resultado *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else
	{
		printf("O retorno é: %lf\n", result_1->retorno);
		printf("O status é: %d\n", result_1->status);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	soma_prog_1 (host);
exit (0);
}
