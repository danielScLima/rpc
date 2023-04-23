/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "operacao.h"

bool_t
xdr_numeros (XDR *xdrs, numeros *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->n1))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->n2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_partes (XDR *xdrs, partes *objp)
{
	register int32_t *buf;

	 if (!xdr_numeros (xdrs, &objp->parte1))
		 return FALSE;
	 if (!xdr_numeros (xdrs, &objp->parte2))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->peso1))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->peso2))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->peso3))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->tipo))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_resultado (XDR *xdrs, resultado *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->status))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->retorno))
		 return FALSE;
	return TRUE;
}
