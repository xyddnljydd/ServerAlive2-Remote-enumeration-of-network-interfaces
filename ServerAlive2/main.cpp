#include<stdio.h>
#include<windows.h>
#include"cai_h.h"

handle_t BindingHandle = NULL;

NTSTATUS BindingRpc() {
    RPC_STATUS status;
    unsigned int  cMinCalls = 1;
    RPC_SECURITY_QOS SecurityQOS = {};
    RPC_WSTR StringBinding = nullptr;
    status = RpcStringBindingComposeW((RPC_WSTR)L"99fcfec4-5260-101b-bbcb-00aa0021347a", (RPC_WSTR)L"ncacn_ip_tcp", (RPC_WSTR)L"192.168.171.157", (RPC_WSTR)L"135", nullptr, &StringBinding);

    if (status) {
        printf("RpcStringBindingComposeW Failed:%d\n", status);
        return(status);
    }

    status = RpcBindingFromStringBindingW(StringBinding, &BindingHandle);
    RpcStringFreeW(&StringBinding);
    if (status) {
        printf("RpcBindingFromStringBindingW Failed:%d\n", status);
        return(status);
    }
    SecurityQOS.Version = 1;
    SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_IMPERSONATE;
    SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_DEFAULT;
    SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_STATIC;

    status = RpcBindingSetAuthInfoExW(BindingHandle, 0, RPC_C_AUTHN_LEVEL_NONE, RPC_C_AUTHN_NONE, 0, 0, (RPC_SECURITY_QOS*)&SecurityQOS);//RPC_C_AUTHN_LEVEL_DEFAULT
    if (status) {
        printf("RpcBindingSetAuthInfoExW Failed:%d\n", status);
        return(status);
    }

    status = RpcEpResolveBinding(BindingHandle, cai_v0_0_c_ifspec);

    if (status) {
        printf("RpcEpResolveBinding Failed:%d\n", status);
        return(status);
    }

    return status;
}

int main() {
    BindingRpc();
    COMVERSION comversion = { 0 };
    DUALSTRINGARRAY* dup = (DUALSTRINGARRAY*)malloc(0x1000);
    DWORD reserve = 0;
    //memset(dup, 0, 0x1000);//RPC_S_INVALID_BOUND

    error_status_t status = ServerAlive2(BindingHandle,&comversion,&dup,&reserve); 
    
    if (ERROR_SUCCESS == status){
        printf("comversion.MajorVersion %d  comversion.MinorVersion %d \n", comversion.MajorVersion,comversion.MinorVersion);
        WCHAR* ipaddress = (PWCHAR)dup + 3;//(sizeof(short)*2 +sizeof(wchar))/2

        for (int i = 0, j = 0; *(DWORD*)(ipaddress + i) != 0; i++) {
            if(i == 0)
                printf("index[%d]  %ls \n",++j,ipaddress);
            if(ipaddress[i] == 7)
                printf("index[%d]  %ls \n",++j,ipaddress + 1 + i);
        } 
    }else
        printf("error_status_t %d \n", status);

    system("pause");
    
	return 0;
}

/******************************************************/
/*         MIDL allocate and free                     */
/******************************************************/

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}

void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);
}