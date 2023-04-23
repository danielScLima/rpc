
struct numeros
{
	int n1;
	int n2;
};

struct partes
{
	struct numeros parte1;
	struct numeros parte2;
	int peso1;
	float peso2;
	double peso3;
	char tipo;
};

struct resultado
{
	int status;
	double retorno;
};

program SOMA_PROG{
	version SOMA_VERS{
		resultado OPERATION(partes)=1;
	}=1;
}=0x23451111;
