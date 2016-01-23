/* rpcproc.h
 *
 * Copyright (c) 2000 Sean Walton and Macmillan Publishers.  Use may be in
 * whole or in part in accordance to the General Public License (GPL).
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
*/

/*****************************************************************************/
/*** rpcproc.h                                                             ***/
/***                                                                       ***/
/*****************************************************************************/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPCPROC_H_RPCGEN
#define _RPCPROC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct proc_res {
	int Err;
	union {
		char *Data;
	} proc_res_u;
};
typedef struct proc_res proc_res;

#define RPCPROC 2000025
#define RPCPROCVERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define READPROC 1
extern  proc_res * readproc_1(char **, CLIENT *);
extern  proc_res * readproc_1_svc(char **, struct svc_req *);
extern int rpcproc_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define READPROC 1
extern  proc_res * readproc_1();
extern  proc_res * readproc_1_svc();
extern int rpcproc_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_proc_res (XDR *, proc_res*);

#else /* K&R C */
extern bool_t xdr_proc_res ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RPCPROC_H_RPCGEN */
