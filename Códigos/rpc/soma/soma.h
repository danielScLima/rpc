/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SOMA_H_RPCGEN
#define _SOMA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numeros {
	int n1;
	int n2;
};
typedef struct numeros numeros;

#define SOMA_PROG 0x23451111
#define SOMA_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SOMA 1
extern  int * soma_1(numeros *, CLIENT *);
extern  int * soma_1_svc(numeros *, struct svc_req *);
extern int soma_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SOMA 1
extern  int * soma_1();
extern  int * soma_1_svc();
extern int soma_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numeros (XDR *, numeros*);

#else /* K&R C */
extern bool_t xdr_numeros ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SOMA_H_RPCGEN */
