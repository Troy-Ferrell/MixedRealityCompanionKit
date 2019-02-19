/* Header file automatically generated from DirectXManager.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0223 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __DirectXManager_h__
#define __DirectXManager_h__
#ifndef __DirectXManager_p_h__
#define __DirectXManager_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "oaidl.h"
#include "ocidl.h"
#include "d3d11.h"
#include "ModuleManager.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
/* Forward Declarations */
#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__
namespace ABI {
    namespace RealtimeStreaming {
        namespace Plugin {
            interface IDirectXManager;
        } /* RealtimeStreaming */
    } /* Plugin */} /* ABI */
#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager ABI::RealtimeStreaming::Plugin::IDirectXManager

#endif // ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__


namespace ABI {
    namespace RealtimeStreaming {
        namespace Plugin {
            class DirectXManager;
        } /* RealtimeStreaming */
    } /* Plugin */} /* ABI */



/*
 *
 * Interface RealtimeStreaming.Plugin.IDirectXManager
 *
 * Interface is a part of the implementation of type RealtimeStreaming.Plugin.DirectXManager
 *
 *
 * The IID for this interface was automatically generated by MIDLRT.
 *
 * Interface IID generation seed: RealtimeStreaming.Plugin.IDirectXManager:HRESULT Lost();HRESULT Reset();
 *
 *
 */
#if !defined(____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__)
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_RealtimeStreaming_Plugin_IDirectXManager[] = L"RealtimeStreaming.Plugin.IDirectXManager";
namespace ABI {
    namespace RealtimeStreaming {
        namespace Plugin {
            /* [uuid("42e42f0f-4ca4-56f5-9214-974abec8b0c2"), version, object, exclusiveto] */
            MIDL_INTERFACE("42e42f0f-4ca4-56f5-9214-974abec8b0c2")
            IDirectXManager : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Lost(void) = 0;
                virtual HRESULT STDMETHODCALLTYPE Reset(void) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IDirectXManager=_uuidof(IDirectXManager);
            
        } /* RealtimeStreaming */
    } /* Plugin */} /* ABI */

EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager;
#endif /* !defined(____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__) */


/*
 *
 * Class RealtimeStreaming.Plugin.DirectXManager
 *
 * Class implements the following interfaces:
 *    RealtimeStreaming.Plugin.IDirectXManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_RealtimeStreaming_Plugin_DirectXManager_DEFINED
#define RUNTIMECLASS_RealtimeStreaming_Plugin_DirectXManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_RealtimeStreaming_Plugin_DirectXManager[] = L"RealtimeStreaming.Plugin.DirectXManager";
#endif


#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager;

#endif // ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__



/*
 *
 * Interface RealtimeStreaming.Plugin.IDirectXManager
 *
 * Interface is a part of the implementation of type RealtimeStreaming.Plugin.DirectXManager
 *
 *
 * The IID for this interface was automatically generated by MIDLRT.
 *
 * Interface IID generation seed: RealtimeStreaming.Plugin.IDirectXManager:HRESULT Lost();HRESULT Reset();
 *
 *
 */
#if !defined(____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__)
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_RealtimeStreaming_Plugin_IDirectXManager[] = L"RealtimeStreaming.Plugin.IDirectXManager";
/* [uuid("42e42f0f-4ca4-56f5-9214-974abec8b0c2"), version, object, exclusiveto] */
typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Lost )(
        __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This
        );
    END_INTERFACE
    
} __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManagerVtbl;

interface __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager
{
    CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_Lost(This) \
    ( (This)->lpVtbl->Lost(This) )

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_Reset(This) \
    ( (This)->lpVtbl->Reset(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager;
#endif /* !defined(____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__) */


/*
 *
 * Class RealtimeStreaming.Plugin.DirectXManager
 *
 * Class implements the following interfaces:
 *    RealtimeStreaming.Plugin.IDirectXManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_RealtimeStreaming_Plugin_DirectXManager_DEFINED
#define RUNTIMECLASS_RealtimeStreaming_Plugin_DirectXManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_RealtimeStreaming_Plugin_DirectXManager[] = L"RealtimeStreaming.Plugin.DirectXManager";
#endif


#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __DirectXManager_p_h__

#endif // __DirectXManager_h__