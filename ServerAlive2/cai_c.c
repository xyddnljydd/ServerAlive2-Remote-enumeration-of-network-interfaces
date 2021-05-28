

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "cai_h.h"

#define TYPE_FORMAT_STRING_SIZE   123                               
#define PROC_FORMAT_STRING_SIZE   349                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _cai_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } cai_MIDL_TYPE_FORMAT_STRING;

typedef struct _cai_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } cai_MIDL_PROC_FORMAT_STRING;

typedef struct _cai_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } cai_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const cai_MIDL_TYPE_FORMAT_STRING cai__MIDL_TypeFormatString;
extern const cai_MIDL_PROC_FORMAT_STRING cai__MIDL_ProcFormatString;
extern const cai_MIDL_EXPR_FORMAT_STRING cai__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: __MIDL_itf_cai_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: cai, ver. 0.0,
   GUID={0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}} */

handle_t cai_IfHandle;


static const RPC_CLIENT_INTERFACE cai___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE cai_v0_0_c_ifspec = (RPC_IF_HANDLE)& cai___RpcClientInterface;

extern const MIDL_STUB_DESC cai_StubDesc;

static RPC_BINDING_HANDLE cai__MIDL_AutoBindHandle;


/* [idempotent] */ error_status_t ResolveOxid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ OXID *pOxid,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][ref][in] */ unsigned short arRequestedProtseqs[  ],
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [ref][out] */ IPID2 *pIPID2RemUnknown,
    /* [ref][out] */ DWORD *pAuthnHint)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&cai_StubDesc,
                  (PFORMAT_STRING) &cai__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&hRpc);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [idempotent] */ error_status_t SimplePing( 
    /* [in] */ handle_t hRpc,
    /* [in] */ SETID *pSetId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&cai_StubDesc,
                  (PFORMAT_STRING) &cai__MIDL_ProcFormatString.Format[70],
                  ( unsigned char * )&hRpc);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [idempotent] */ error_status_t ComplexPing( 
    /* [in] */ handle_t hRpc,
    /* [out][in] */ SETID *pSetId,
    /* [in] */ unsigned short SequenceNum,
    /* [in] */ unsigned short cAddToSet,
    /* [in] */ unsigned short cDelFromSet,
    /* [size_is][unique][in] */ OID AddToSet[  ],
    /* [size_is][unique][in] */ OID DelFromSet[  ],
    /* [out] */ unsigned short *pPingBackoffFactor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&cai_StubDesc,
                  (PFORMAT_STRING) &cai__MIDL_ProcFormatString.Format[110],
                  ( unsigned char * )&hRpc);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [idempotent] */ error_status_t ServerAlive( 
    /* [in] */ handle_t hRpc)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&cai_StubDesc,
                  (PFORMAT_STRING) &cai__MIDL_ProcFormatString.Format[186],
                  ( unsigned char * )&hRpc);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [idempotent] */ error_status_t ResolveOxid2( 
    /* [in] */ handle_t hRpc,
    /* [in] */ OXID *pOxid,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][ref][in] */ unsigned short arRequestedProtseqs[  ],
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [ref][out] */ IPID2 *pIPID2RemUnknown,
    /* [ref][out] */ DWORD *pAuthnHint,
    /* [ref][out] */ COMVERSION *pComVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&cai_StubDesc,
                  (PFORMAT_STRING) &cai__MIDL_ProcFormatString.Format[220],
                  ( unsigned char * )&hRpc);
    return ( error_status_t  )_RetVal.Simple;
    
}


/* [idempotent] */ error_status_t ServerAlive2( 
    /* [in] */ handle_t hRpc,
    /* [ref][out] */ COMVERSION *pComVersion,
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOrBindings,
    /* [ref][out] */ DWORD *pReserved)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&cai_StubDesc,
                  (PFORMAT_STRING) &cai__MIDL_ProcFormatString.Format[296],
                  ( unsigned char * )&hRpc);
    return ( error_status_t  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const cai_MIDL_PROC_FORMAT_STRING cai__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ResolveOxid */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x1 ),	/* 1 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x2a ),	/* 42 */
/* 16 */	NdrFcShort( 0x68 ),	/* 104 */
/* 18 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 20 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pOxid */

/* 28 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 34 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arRequestedProtseqs */

/* 40 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ppdsaOxidBindings */

/* 46 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pIPID2RemUnknown */

/* 52 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 54 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 56 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter pAuthnHint */

/* 58 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 60 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 62 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 64 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 66 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 68 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure SimplePing */

/* 70 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 72 */	NdrFcLong( 0x1 ),	/* 1 */
/* 76 */	NdrFcShort( 0x1 ),	/* 1 */
/* 78 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 80 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 84 */	NdrFcShort( 0x24 ),	/* 36 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 90 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSetId */

/* 98 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 102 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 108 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ComplexPing */

/* 110 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 112 */	NdrFcLong( 0x1 ),	/* 1 */
/* 116 */	NdrFcShort( 0x2 ),	/* 2 */
/* 118 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 124 */	NdrFcShort( 0x36 ),	/* 54 */
/* 126 */	NdrFcShort( 0x46 ),	/* 70 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 130 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSetId */

/* 138 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter SequenceNum */

/* 144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cAddToSet */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cDelFromSet */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 160 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter AddToSet */

/* 162 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 164 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 166 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter DelFromSet */

/* 168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 170 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 172 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pPingBackoffFactor */

/* 174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 176 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 178 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 184 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive */

/* 186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 188 */	NdrFcLong( 0x1 ),	/* 1 */
/* 192 */	NdrFcShort( 0x3 ),	/* 3 */
/* 194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 196 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 218 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ResolveOxid2 */

/* 220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 222 */	NdrFcLong( 0x1 ),	/* 1 */
/* 226 */	NdrFcShort( 0x4 ),	/* 4 */
/* 228 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 230 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 234 */	NdrFcShort( 0x2a ),	/* 42 */
/* 236 */	NdrFcShort( 0x90 ),	/* 144 */
/* 238 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 240 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pOxid */

/* 248 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 252 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 258 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arRequestedProtseqs */

/* 260 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 264 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ppdsaOxidBindings */

/* 266 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 270 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pIPID2RemUnknown */

/* 272 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 274 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 276 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter pAuthnHint */

/* 278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 280 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pComVersion */

/* 284 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 286 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 288 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */

	/* Return value */

/* 290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 292 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 294 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive2 */

/* 296 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 298 */	NdrFcLong( 0x1 ),	/* 1 */
/* 302 */	NdrFcShort( 0x5 ),	/* 5 */
/* 304 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 306 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x4c ),	/* 76 */
/* 314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 316 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pComVersion */

/* 324 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */

	/* Parameter ppdsaOrBindings */

/* 330 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pReserved */

/* 336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 346 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const cai_MIDL_TYPE_FORMAT_STRING cai__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 20 */	NdrFcShort( 0x2 ),	/* Offset= 2 (22) */
/* 22 */	
			0x12, 0x0,	/* FC_UP */
/* 24 */	NdrFcShort( 0xe ),	/* Offset= 14 (38) */
/* 26 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 28 */	NdrFcShort( 0x2 ),	/* 2 */
/* 30 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 32 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 34 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 36 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 38 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 40 */	NdrFcShort( 0x4 ),	/* 4 */
/* 42 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (26) */
/* 44 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 46 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 48 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 50 */	NdrFcShort( 0x8 ),	/* Offset= 8 (58) */
/* 52 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 58 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 60 */	NdrFcShort( 0x10 ),	/* 16 */
/* 62 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 64 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 66 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (52) */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 80 */	NdrFcShort( 0x8 ),	/* 8 */
/* 82 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 84 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 86 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 88 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 90 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 104 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 106 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 108 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 110 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 112 */	NdrFcShort( 0x2 ),	/* Offset= 2 (114) */
/* 114 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short cai_FormatStringOffsetTable[] =
    {
    0,
    70,
    110,
    186,
    220,
    296
    };


static const MIDL_STUB_DESC cai_StubDesc = 
    {
    (void *)& cai___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &cai_IfHandle,
    0,
    0,
    0,
    0,
    cai__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

