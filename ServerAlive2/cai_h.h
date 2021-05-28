

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for cai.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __cai_h_h__
#define __cai_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cai_0000_0000 */
/* [local] */ 

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef struct _GUID2
    {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    byte Data4[ 8 ];
    } 	GUID2;

typedef struct _GUID2 UUID2;

typedef struct _GUID2 *PGUID2;

typedef GUID2 CLSID2;

typedef GUID2 IID2;

typedef MIDL_uhyper ID;

typedef MIDL_uhyper OXID;

typedef MIDL_uhyper OID;

typedef MIDL_uhyper SETID;

typedef GUID2 IPID2;

typedef GUID2 CID2;

typedef const GUID2 *REFIPID2;

typedef struct tagCOMVERSION
    {
    unsigned short MajorVersion;
    unsigned short MinorVersion;
    } 	COMVERSION;

typedef struct tagORPC_EXTENT
    {
    GUID2 id;
    unsigned long size;
    /* [size_is] */ byte data[ 1 ];
    } 	ORPC_EXTENT;

typedef struct tagORPC_EXTENT_ARRAY
    {
    unsigned long size;
    unsigned long reserved;
    /* [unique][size_is][size_is] */ ORPC_EXTENT **extent;
    } 	ORPC_EXTENT_ARRAY;

typedef struct tagORPCTHIS
    {
    COMVERSION version;
    unsigned long flags;
    unsigned long reserved1;
    CID2 CID2;
    /* [unique] */ ORPC_EXTENT_ARRAY *extensions;
    } 	ORPCTHIS;

typedef struct tagORPCTHAT
    {
    unsigned long flags;
    /* [unique] */ ORPC_EXTENT_ARRAY *extensions;
    } 	ORPCTHAT;

typedef struct tagDUALSTRINGARRAY
    {
    unsigned short wNumEntries;
    unsigned short wSecurityOffset;
    /* [size_is] */ unsigned short aStringArray[ 1 ];
    } 	DUALSTRINGARRAY;


enum tagCPFLAGS
    {
        CPFLAG_PROPAGATE	= 0x1,
        CPFLAG_EXPOSE	= 0x2,
        CPFLAG_ENVOY	= 0x4
    } ;
typedef struct tagMInterfacePointer
    {
    unsigned long ulCntData;
    /* [size_is] */ byte abData[ 1 ];
    } 	MInterfacePointer;

typedef /* [unique] */ MInterfacePointer *PMInterfacePointer;

typedef struct tagErrorObjectData
    {
    DWORD dwVersion;
    DWORD dwHelpContext;
    IID2 IID2;
    /* [string][unique] */ wchar_t *pszSource;
    /* [string][unique] */ wchar_t *pszDescription;
    /* [string][unique] */ wchar_t *pszHelpFile;
    } 	ErrorObjectData;



extern RPC_IF_HANDLE __MIDL_itf_cai_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cai_0000_0000_v0_0_s_ifspec;

#ifndef __cai_INTERFACE_DEFINED__
#define __cai_INTERFACE_DEFINED__

/* interface cai */
/* [implicit_handle][unique][uuid] */ 

/* [idempotent] */ error_status_t ResolveOxid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ OXID *pOxid,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][ref][in] */ unsigned short arRequestedProtseqs[  ],
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [ref][out] */ IPID2 *pIPID2RemUnknown,
    /* [ref][out] */ DWORD *pAuthnHint);

/* [idempotent] */ error_status_t SimplePing( 
    /* [in] */ handle_t hRpc,
    /* [in] */ SETID *pSetId);

/* [idempotent] */ error_status_t ComplexPing( 
    /* [in] */ handle_t hRpc,
    /* [out][in] */ SETID *pSetId,
    /* [in] */ unsigned short SequenceNum,
    /* [in] */ unsigned short cAddToSet,
    /* [in] */ unsigned short cDelFromSet,
    /* [size_is][unique][in] */ OID AddToSet[  ],
    /* [size_is][unique][in] */ OID DelFromSet[  ],
    /* [out] */ unsigned short *pPingBackoffFactor);

/* [idempotent] */ error_status_t ServerAlive( 
    /* [in] */ handle_t hRpc);

/* [idempotent] */ error_status_t ResolveOxid2( 
    /* [in] */ handle_t hRpc,
    /* [in] */ OXID *pOxid,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][ref][in] */ unsigned short arRequestedProtseqs[  ],
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [ref][out] */ IPID2 *pIPID2RemUnknown,
    /* [ref][out] */ DWORD *pAuthnHint,
    /* [ref][out] */ COMVERSION *pComVersion);

/* [idempotent] */ error_status_t ServerAlive2( 
    /* [in] */ handle_t hRpc,
    /* [ref][out] */ COMVERSION *pComVersion,
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOrBindings,
    /* [ref][out] */ DWORD *pReserved);


extern handle_t cai_IfHandle;


extern RPC_IF_HANDLE cai_v0_0_c_ifspec;
extern RPC_IF_HANDLE cai_v0_0_s_ifspec;
#endif /* __cai_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


