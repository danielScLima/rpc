/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _EXIBE_H_RPCGEN
#define _EXIBE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define EXIBE_PROG 0x23451111
#define EXIBE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define exibe 1
extern  void * exibe_1(void *, CLIENT *);
extern  void * exibe_1_svc(void *, struct svc_req *);
extern int exibe_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define exibe 1
extern  void * exibe_1();
extern  void * exibe_1_svc();
extern int exibe_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_EXIBE_H_RPCGEN */
