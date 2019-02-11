

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for C:\Users\TroyF\AppData\Local\Temp\RealtimeStreaming.idl-ffa8d290:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=ARM 8.01.0622 
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __RealtimeStreaming_p_h__
#define __RealtimeStreaming_p_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(__cplusplus)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
#endif


/* Forward Declarations */ 

#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIModule_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIModule_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIModule __x_ABI_CRealtimeStreaming_CPlugin_CIModule;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIModule_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager;

#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_FWD_DEFINED__ */


#ifndef ____FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
#define ____FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
typedef interface __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer;

#endif 	/* ____FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__ */


#ifndef ____FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
#define ____FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
typedef interface __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer;

#endif 	/* ____FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
#define ____FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
typedef interface __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer;

#endif 	/* ____FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__ */


#ifndef ____FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
#define ____FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__
typedef interface __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer;

#endif 	/* ____FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_FWD_DEFINED__
#define ____FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection;

#endif 	/* ____FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnection_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnection_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnection __x_ABI_CRealtimeStreaming_CNetwork_CIConnection;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnection_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIListener_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIListener_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIListener __x_ABI_CRealtimeStreaming_CNetwork_CIListener;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIListener_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnector_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnector_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnector __x_ABI_CRealtimeStreaming_CNetwork_CIConnector;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnector_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler;

#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink;

#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer;

#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_FWD_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_FWD_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_FWD_DEFINED__
typedef interface __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics;

#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Media.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_RealtimeStreaming_0000_0000 */
/* [local] */ 












typedef UINT32 __x_ABI_CRealtimeStreaming_CModuleHandle;

#ifndef MODULE_HANDLE
typedef UINT32 MODULE_HANDLE;
#define MODULE_HANDLE_INVALID (UINT)0x0bad
#define MODULE_HANDLE_START (UINT)0x0bae
#endif // MODULE_HANDLE
const ULONG c_cbReceiveBufferSize = 2 * 1024;
const ULONG c_cbMaxBundleSize = 1024 * 1024;
const UINT16 c_cbMaxBufferFailures = 7;
const UINT16 c_cbMaxBundleFailures = 3;
extern wchar_t const __declspec(selectany)c_szNetworkScheme[] = L"mrvc";
extern wchar_t const __declspec(selectany)c_szNetworkSchemeWithColon[] = L"mrvc:";
#ifdef __cplusplus
namespace RealtimeStreaming { namespace Network {
typedef ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::StreamSocketListener*, ABI::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs*> IConnectionReceivedEventHandler;
}}
#endif //__cplusplus
typedef enum __x_ABI_CRealtimeStreaming_CPayloadType __x_ABI_CRealtimeStreaming_CPayloadType;

typedef enum __x_ABI_CRealtimeStreaming_CSampleFlags __x_ABI_CRealtimeStreaming_CSampleFlags;

typedef struct __x_ABI_CRealtimeStreaming_CMF__FLOAT2 __x_ABI_CRealtimeStreaming_CMF__FLOAT2;

typedef struct __x_ABI_CRealtimeStreaming_CPayloadHeader __x_ABI_CRealtimeStreaming_CPayloadHeader;

typedef struct __x_ABI_CRealtimeStreaming_CMediaTypeDescription __x_ABI_CRealtimeStreaming_CMediaTypeDescription;

typedef struct __x_ABI_CRealtimeStreaming_CMediaSampleHeader __x_ABI_CRealtimeStreaming_CMediaSampleHeader;

typedef struct __x_ABI_CRealtimeStreaming_CMediaSampleTransforms __x_ABI_CRealtimeStreaming_CMediaSampleTransforms;

typedef struct __x_ABI_CRealtimeStreaming_CMediaStreamTick __x_ABI_CRealtimeStreaming_CMediaStreamTick;

typedef enum __x_ABI_CRealtimeStreaming_CPlugin_CDeviceType __x_ABI_CRealtimeStreaming_CPlugin_CDeviceType;

typedef enum __x_ABI_CRealtimeStreaming_CPlugin_CPluginEventType __x_ABI_CRealtimeStreaming_CPlugin_CPluginEventType;






















typedef enum __x_ABI_CRealtimeStreaming_CMedia_CSourceStreamState __x_ABI_CRealtimeStreaming_CMedia_CSourceStreamState;

typedef enum __x_ABI_CRealtimeStreaming_CMedia_CSinkStreamState __x_ABI_CRealtimeStreaming_CMedia_CSinkStreamState;

typedef enum __x_ABI_CRealtimeStreaming_CMedia_CSinkStreamOperation __x_ABI_CRealtimeStreaming_CMedia_CSinkStreamOperation;

typedef __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation __x_ABI_CRealtimeStreaming_CMedia_CIDeviceEnumerationOperation;

typedef __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation __x_ABI_CRealtimeStreaming_CMedia_CIDeviceEnumerationCompletedHandler;






/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CPayloadType
    {
        PayloadType_Unknown	= 0,
        PayloadType_State_Scene	= ( PayloadType_Unknown + 1 ) ,
        PayloadType_State_Input	= ( PayloadType_State_Scene + 1 ) ,
        PayloadType_State_CaptureReady	= ( PayloadType_State_Input + 1 ) ,
        PayloadType_State_CaptureStarted	= ( PayloadType_State_CaptureReady + 1 ) ,
        PayloadType_State_CaptureStopped	= ( PayloadType_State_CaptureStarted + 1 ) ,
        PayloadType_RequestMediaDescription	= ( PayloadType_State_CaptureStopped + 1 ) ,
        PayloadType_RequestMediaStart	= ( PayloadType_RequestMediaDescription + 1 ) ,
        PayloadType_RequestMediaStop	= ( PayloadType_RequestMediaStart + 1 ) ,
        PayloadType_RequestMediaCaptureStart	= ( PayloadType_RequestMediaStop + 1 ) ,
        PayloadType_RequestMediaCaptureRecord	= ( PayloadType_RequestMediaCaptureStart + 1 ) ,
        PayloadType_RequestMediaCaptureStop	= ( PayloadType_RequestMediaCaptureRecord + 1 ) ,
        PayloadType_RequestMediaEncodeStart	= ( PayloadType_RequestMediaCaptureStop + 1 ) ,
        PayloadType_RequestMediaEncodeStop	= ( PayloadType_RequestMediaEncodeStart + 1 ) ,
        PayloadType_SendMediaDescription	= ( PayloadType_RequestMediaEncodeStop + 1 ) ,
        PayloadType_SendMediaSample	= ( PayloadType_SendMediaDescription + 1 ) ,
        PayloadType_SendMediaStreamTick	= ( PayloadType_SendMediaSample + 1 ) ,
        PayloadType_SendFormatChange	= ( PayloadType_SendMediaStreamTick + 1 ) ,
        PayloadType_ENDOFLIST	= ( PayloadType_SendFormatChange + 1 ) 
    } ;
/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CSampleFlags
    {
        SampleFlags_SampleFlag_BottomFieldFirst	= 0,
        SampleFlags_SampleFlag_CleanPoint	= 1,
        SampleFlags_SampleFlag_DerivedFromTopField	= 2,
        SampleFlags_SampleFlag_Discontinuity	= 3,
        SampleFlags_SampleFlag_Interlaced	= 4,
        SampleFlags_SampleFlag_RepeatFirstField	= 5,
        SampleFlags_SampleFlag_SingleField	= 6
    } ;
struct __x_ABI_CRealtimeStreaming_CPayloadHeader
    {
    __x_ABI_CRealtimeStreaming_CPayloadType ePayloadType;
    DWORD cbPayloadSize;
    } ;
struct __x_ABI_CRealtimeStreaming_CMediaDescription
    {
    DWORD StreamCount;
    DWORD StreamTypeHeaderSize;
    } ;
struct __x_ABI_CRealtimeStreaming_CMediaTypeDescription
    {
    GUID guiMajorType;
    GUID guiSubType;
    DWORD dwStreamId;
    UINT32 AttributesBlobSize;
    } ;
struct __x_ABI_CRealtimeStreaming_CMF__FLOAT2
    {
    FLOAT x;
    FLOAT y;
    } ;
struct __x_ABI_CRealtimeStreaming_CMFCameraIntrinsic__DistortionModel
    {
    FLOAT Radial_k1;
    FLOAT Radial_k2;
    FLOAT Radial_k3;
    FLOAT Tangential_p1;
    FLOAT Tangential_p2;
    } ;
struct __x_ABI_CRealtimeStreaming_CMediaSampleHeader
    {
    DWORD dwStreamId;
    LONGLONG hnsTimestamp;
    LONGLONG hnsDuration;
    DWORD dwFlags;
    DWORD dwFlagMasks;
    DWORD cbCameraDataSize;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 worldToCameraMatrix;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 cameraProjectionTransform;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 cameraViewTransform;
    } ;
struct __x_ABI_CRealtimeStreaming_CMediaSampleTransforms
    {
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 worldToCameraMatrix;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 cameraProjectionTransform;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 cameraViewTransform;
    } ;
struct __x_ABI_CRealtimeStreaming_CMediaStreamTick
    {
    DWORD dwStreamId;
    LONGLONG hnsTimestamp;
    UINT32 cbAttributesSize;
    } ;
/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CPlugin_CDeviceType
    {
        DeviceType_Null	= 0,
        DeviceType_DX11	= 1,
        DeviceType_Warp	= 2
    } ;
/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CPlugin_CPluginEventType
    {
        PluginEventType_Update	= 1,
        PluginEventType_Render	= 2,
        PluginEventType_Flush	= 3
    } ;


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("742c3239-1cf3-40bb-98c8-73270e0e337f")
    __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ IInspectable *sender) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler * This,
            /* [in] */ IInspectable *sender);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandlerVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_Invoke(This,sender)	\
    ( (This)->lpVtbl -> Invoke(This,sender) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIModule_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIModule_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIModule */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2edeb3fb-8008-4a13-b8d3-7081fd11443f")
    __x_ABI_CRealtimeStreaming_CPlugin_CIModule : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsInitialized( 
            /* [out][retval] */ boolean *isInitialized) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIModuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInitialized )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This,
            /* [out][retval] */ boolean *isInitialized);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModule * This);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIModuleVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIModule
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_get_IsInitialized(This,isInitialized)	\
    ( (This)->lpVtbl -> get_IsInitialized(This,isInitialized) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModule_Uninitialize(This)	\
    ( (This)->lpVtbl -> Uninitialize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIModule_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ee26ebc8-2eba-4476-be2a-4bf9389590bc")
    __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddModule( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIModule *pluginModule,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CModuleHandle *moduleHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetModule( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CModuleHandle moduleHandle,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIModule **pluginModule) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseModule( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CModuleHandle moduleHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *AddModule )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIModule *pluginModule,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CModuleHandle *moduleHandle);
        
        HRESULT ( STDMETHODCALLTYPE *GetModule )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CModuleHandle moduleHandle,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIModule **pluginModule);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseModule )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CModuleHandle moduleHandle);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager * This);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_AddModule(This,pluginModule,moduleHandle)	\
    ( (This)->lpVtbl -> AddModule(This,pluginModule,moduleHandle) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_GetModule(This,moduleHandle,pluginModule)	\
    ( (This)->lpVtbl -> GetModule(This,moduleHandle,pluginModule) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_ReleaseModule(This,moduleHandle)	\
    ( (This)->lpVtbl -> ReleaseModule(This,moduleHandle) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_Uninitialize(This)	\
    ( (This)->lpVtbl -> Uninitialize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5feb052c-d722-4f2a-8bf5-7d03ba808794")
    __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InvalidModuleHandle( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CModuleHandle *moduleHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvalidModuleHandle )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CModuleHandle *moduleHandle);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_get_InvalidModuleHandle(This,moduleHandle)	\
    ( (This)->lpVtbl -> get_InvalidModuleHandle(This,moduleHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIModuleManagerStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9630182-dd7a-4fe8-b797-14aa4daf297a")
    __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ModuleManager( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager **moduleManager) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DirectXManager( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager **dxManager) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleManager )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIModuleManager **moduleManager);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DirectXManager )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager **dxManager);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_get_ModuleManager(This,moduleManager)	\
    ( (This)->lpVtbl -> get_ModuleManager(This,moduleManager) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_get_DirectXManager(This,dxManager)	\
    ( (This)->lpVtbl -> get_DirectXManager(This,dxManager) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("172d17ad-464c-4da4-ad26-34d2a70d4f07")
    __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Instance( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager **pluginManager) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Instance )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManager **pluginManager);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_get_Instance(This,pluginManager)	\
    ( (This)->lpVtbl -> get_Instance(This,pluginManager) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIPluginManagerStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("712c3f26-ea19-44a2-b947-0313c7d41a2b")
    __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManagerVtbl;

    interface __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CPlugin_CIDirectXManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming2Eidl_0000_2084 */




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2084_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming_0000_0008 */
/* [local] */ 

#ifndef DEF___FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer
#define DEF___FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0008_v0_0_s_ifspec;

#ifndef ____FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__
#define ____FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__

/* interface __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02efb54c-9903-5c1a-a1ec-7120567d76e7")
    __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_RealtimeStreaming__CNetwork__CDataBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_RealtimeStreaming__CNetwork__CDataBufferVtbl;

    interface __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer
    {
        CONST_VTBL struct __FIIterator_1_RealtimeStreaming__CNetwork__CDataBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer */


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming2Eidl_0000_2085 */




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2085_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming_0000_0010 */
/* [local] */ 

#ifndef DEF___FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer
#define DEF___FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0010_v0_0_s_ifspec;

#ifndef ____FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__
#define ____FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__

/* interface __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4f439324-d96a-583b-8e44-fb8213a947d6")
    __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_RealtimeStreaming__CNetwork__CDataBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ __FIIterator_1_RealtimeStreaming__CNetwork__CDataBuffer **first);
        
        END_INTERFACE
    } __FIIterable_1_RealtimeStreaming__CNetwork__CDataBufferVtbl;

    interface __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer
    {
        CONST_VTBL struct __FIIterable_1_RealtimeStreaming__CNetwork__CDataBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0011 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_RealtimeStreaming__CNetwork__CDataBuffer */


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming2Eidl_0000_2086 */




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2086_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming_0000_0012 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer
#define DEF___FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0012_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__
#define ____FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__

/* interface __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("24f72ee9-a071-5f09-8215-e73b9083cb55")
    __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **items,
            /* [retval][out] */ unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBufferVtbl;

    interface __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer
    {
        CONST_VTBL struct __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0013 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer */


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming2Eidl_0000_2087 */




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2087_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming_0000_0014 */
/* [local] */ 

#ifndef DEF___FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer
#define DEF___FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0014_v0_0_s_ifspec;

#ifndef ____FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__
#define ____FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__

/* interface __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05fbf735-6444-5217-bc03-6b4495e9d8ce")
    __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetView( 
            /* [retval][out] */ __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer **view) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAt( 
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertAt( 
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **items,
            /* [retval][out] */ unsigned int *actual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceAll( 
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVector_1_RealtimeStreaming__CNetwork__CDataBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [retval][out] */ __FIVectorView_1_RealtimeStreaming__CNetwork__CDataBuffer **view);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item,
            /* [out] */ unsigned int *index,
            /* [retval][out] */ boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *SetAt )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item);
        
        HRESULT ( STDMETHODCALLTYPE *InsertAt )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int index,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *Append )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *item);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **items,
            /* [retval][out] */ unsigned int *actual);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceAll )( 
            __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer * This,
            /* [in] */ unsigned int count,
            /* [size_is][in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **value);
        
        END_INTERFACE
    } __FIVector_1_RealtimeStreaming__CNetwork__CDataBufferVtbl;

    interface __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer
    {
        CONST_VTBL struct __FIVector_1_RealtimeStreaming__CNetwork__CDataBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0015 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVector_1_RealtimeStreaming__CNetwork__CDataBuffer */


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0015_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming2Eidl_0000_2088 */




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2088_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming_0000_0016 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection
#define DEF___FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0016_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ae3bb708-f38a-56e2-8880-278c8627dd05")
    __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [in] */ __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnectionVtbl;

    interface __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0017 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection */


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0017_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming2Eidl_0000_2089 */




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming2Eidl_0000_2089_v0_0_s_ifspec;

/* interface __MIDL_itf_RealtimeStreaming_0000_0018 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection
#define DEF___FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0018_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31717ca0-2cab-56fa-9875-2312ef716900")
    __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [in] */ __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [retval][out] */ __FIAsyncOperationCompletedHandler_1_RealtimeStreaming__CNetwork__CConnection **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection * This,
            /* [retval][out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnectionVtbl;

    interface __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection
    {
        CONST_VTBL struct __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0019 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection */


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0019_v0_0_s_ifspec;

#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f6533cb-58a5-4634-a0ca-1af12e82f508")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *sender) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *sender);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandlerVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_Invoke(This,sender)	\
    ( (This)->lpVtbl -> Invoke(This,sender) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("351aade9-5b42-4ae8-9d72-dd5b765d3420")
    __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *sender,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *sender,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs *args);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandlerVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6f17b4ae-f506-4d6e-a666-893638581b19")
    __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandlerVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_Invoke(This,connection)	\
    ( (This)->lpVtbl -> Invoke(This,connection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectedEventHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3fcabce1-d85d-4990-93cc-64b26b8b9505")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacketVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacketVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataPacket_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0023 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0023_v0_0_s_ifspec;

#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2fffa1dc-aa9b-4f0f-a67c-414da47613b8")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [out][retval] */ DWORD *offset) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ DWORD offset) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLength( 
            /* [out][retval] */ DWORD *currentLength) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CurrentLength( 
            /* [in] */ DWORD currentLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TrimLeft( 
            /* [in] */ ULONG cbSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TrimRight( 
            /* [in] */ ULONG cbSize,
            /* [out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **dataBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [out][retval] */ DWORD *offset);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [in] */ DWORD offset);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLength )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [out][retval] */ DWORD *currentLength);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentLength )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [in] */ DWORD currentLength);
        
        HRESULT ( STDMETHODCALLTYPE *TrimLeft )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [in] */ ULONG cbSize);
        
        HRESULT ( STDMETHODCALLTYPE *TrimRight )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This,
            /* [in] */ ULONG cbSize,
            /* [out] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **dataBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer * This);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_get_Offset(This,offset)	\
    ( (This)->lpVtbl -> get_Offset(This,offset) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_put_Offset(This,offset)	\
    ( (This)->lpVtbl -> put_Offset(This,offset) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_get_CurrentLength(This,currentLength)	\
    ( (This)->lpVtbl -> get_CurrentLength(This,currentLength) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_put_CurrentLength(This,currentLength)	\
    ( (This)->lpVtbl -> put_CurrentLength(This,currentLength) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_TrimLeft(This,cbSize)	\
    ( (This)->lpVtbl -> TrimLeft(This,cbSize) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_TrimRight(This,cbSize,dataBuffer)	\
    ( (This)->lpVtbl -> TrimRight(This,cbSize,dataBuffer) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eb453df3-e098-4fcb-b76c-ef3838583033")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ ULONG size) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics * This,
            /* [in] */ ULONG size);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_Create(This,size)	\
    ( (This)->lpVtbl -> Create(This,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4375ee9d-0302-416b-af1a-2b8ff632a06f")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock : public IInspectable
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLockVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBufferLock_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0026 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0026_v0_0_s_ifspec;

#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("049cd02e-12ec-45dc-8f58-931c342087ed")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BufferCount( 
            /* [out][retval] */ UINT32 *count) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TotalSize( 
            /* [out][retval] */ ULONG *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddBuffer( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertBuffer( 
            /* [in] */ UINT32 index,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveBuffer( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveBufferByIndex( 
            /* [in] */ UINT32 index,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **dataBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferCount )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [out][retval] */ UINT32 *count);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalSize )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [out][retval] */ ULONG *size);
        
        HRESULT ( STDMETHODCALLTYPE *AddBuffer )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *InsertBuffer )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [in] */ UINT32 index,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveBuffer )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveBufferByIndex )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This,
            /* [in] */ UINT32 index,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer **dataBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle * This);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_get_BufferCount(This,count)	\
    ( (This)->lpVtbl -> get_BufferCount(This,count) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_get_TotalSize(This,size)	\
    ( (This)->lpVtbl -> get_TotalSize(This,size) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_AddBuffer(This,dataBuffer)	\
    ( (This)->lpVtbl -> AddBuffer(This,dataBuffer) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_InsertBuffer(This,index,dataBuffer)	\
    ( (This)->lpVtbl -> InsertBuffer(This,index,dataBuffer) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_RemoveBuffer(This,dataBuffer)	\
    ( (This)->lpVtbl -> RemoveBuffer(This,dataBuffer) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_RemoveBufferByIndex(This,index,dataBuffer)	\
    ( (This)->lpVtbl -> RemoveBufferByIndex(This,index,dataBuffer) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bac3c09b-76ca-44d9-ad40-080f3101884a")
    __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBuffer *dataBuffer);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_Create(This,dataBuffer)	\
    ( (This)->lpVtbl -> Create(This,dataBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIDataBundleStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c0d9ad8e-f586-4314-af4d-69b80513b470")
    __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PayloadType( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPayloadType *payloadType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Connection( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **connection) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DataBundle( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle **dataBundle) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RemoteUri( 
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **uri) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PayloadType )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CPayloadType *payloadType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connection )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **connection);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataBundle )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle **dataBundle);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteUri )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs * This,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **uri);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_get_PayloadType(This,payloadType)	\
    ( (This)->lpVtbl -> get_PayloadType(This,payloadType) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_get_Connection(This,connection)	\
    ( (This)->lpVtbl -> get_Connection(This,connection) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_get_DataBundle(This,dataBundle)	\
    ( (This)->lpVtbl -> get_DataBundle(This,dataBundle) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_get_RemoteUri(This,uri)	\
    ( (This)->lpVtbl -> get_RemoteUri(This,uri) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3fa67b47-6b91-42ad-912c-ddd97ce02d50")
    __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CPayloadType type,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle *dataBundle,
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *uri,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs **args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CPayloadType type,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle *dataBundle,
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *uri,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgs **args);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_Create(This,type,connection,dataBundle,uri,args)	\
    ( (This)->lpVtbl -> Create(This,type,connection,dataBundle,uri,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedArgsStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnection_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnection_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnection */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("027d0a6d-3ffb-480e-9e68-255cba264d40")
    __x_ABI_CRealtimeStreaming_CNetwork_CIConnection : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [out][retval] */ boolean *connected) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_Disconnected( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Disconnected( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_Received( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Received( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendPayloadType( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CPayloadType type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendBundle( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle *dataBundle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendBundleAsync( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle *dataBundle,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIAsyncAction **asyncAction) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [out][retval] */ boolean *connected);
        
        HRESULT ( STDMETHODCALLTYPE *add_Disconnected )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDisconnectedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Disconnected )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_Received )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIBundleReceivedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Received )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *SendPayloadType )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CPayloadType type);
        
        HRESULT ( STDMETHODCALLTYPE *SendBundle )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle *dataBundle);
        
        HRESULT ( STDMETHODCALLTYPE *SendBundleAsync )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnection * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIDataBundle *dataBundle,
            /* [out][retval] */ __x_ABI_CWindows_CFoundation_CIAsyncAction **asyncAction);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnection
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_get_IsConnected(This,connected)	\
    ( (This)->lpVtbl -> get_IsConnected(This,connected) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_add_Disconnected(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Disconnected(This,eventHandler,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_remove_Disconnected(This,token)	\
    ( (This)->lpVtbl -> remove_Disconnected(This,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_add_Received(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Received(This,eventHandler,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_remove_Received(This,token)	\
    ( (This)->lpVtbl -> remove_Received(This,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_SendPayloadType(This,type)	\
    ( (This)->lpVtbl -> SendPayloadType(This,type) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_SendBundle(This,dataBundle)	\
    ( (This)->lpVtbl -> SendBundle(This,dataBundle) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnection_SendBundleAsync(This,dataBundle,asyncAction)	\
    ( (This)->lpVtbl -> SendBundleAsync(This,dataBundle,asyncAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnection_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7e41360e-7307-4ee3-8f5d-b644e7e5c55a")
    __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CheckClosed( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WaitForHeader( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WaitForPayload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetBundle( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CheckClosed )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *WaitForHeader )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *WaitForPayload )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetBundle )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal * This);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternalVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_CheckClosed(This)	\
    ( (This)->lpVtbl -> CheckClosed(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_WaitForHeader(This)	\
    ( (This)->lpVtbl -> WaitForHeader(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_WaitForPayload(This)	\
    ( (This)->lpVtbl -> WaitForPayload(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_ResetBundle(This)	\
    ( (This)->lpVtbl -> ResetBundle(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionInternal_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b3c719f9-b1c6-425a-9b21-8a36eaac7be4")
    __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket *streamSocket,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **connection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket *streamSocket,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **connection);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_Create(This,streamSocket,connection)	\
    ( (This)->lpVtbl -> Create(This,streamSocket,connection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectionStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIListener_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIListener_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIListener */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIListener;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("887397c7-ce0f-4ced-86f1-54f4ee079d0b")
    __x_ABI_CRealtimeStreaming_CNetwork_CIListener : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_Closed( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Closed( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ListenAsync( 
            /* [out][retval] */ __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection **operation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIListenerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_Closed )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Closed )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *ListenAsync )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListener * This,
            /* [out][retval] */ __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection **operation);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIListenerVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIListener
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIListenerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_add_Closed(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Closed(This,eventHandler,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_remove_Closed(This,token)	\
    ( (This)->lpVtbl -> remove_Closed(This,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListener_ListenAsync(This,operation)	\
    ( (This)->lpVtbl -> ListenAsync(This,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIListener_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0cfcc430-07f5-49c1-b86a-123da17030b5")
    __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ UINT16 port,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIListener **listener) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics * This,
            /* [in] */ UINT16 port,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIListener **listener);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_Create(This,port,listener)	\
    ( (This)->lpVtbl -> Create(This,port,listener) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIListenerStatics_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnector_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnector_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnector */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIConnector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4d3288f4-b509-4ffe-848d-200218029096")
    __x_ABI_CRealtimeStreaming_CNetwork_CIConnector : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_Closed( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Closed( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectAsync( 
            /* [out][retval] */ __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection **operation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_Closed )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Closed )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectAsync )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnector * This,
            /* [out][retval] */ __FIAsyncOperation_1_RealtimeStreaming__CNetwork__CConnection **operation);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnector
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_add_Closed(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Closed(This,eventHandler,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_remove_Closed(This,token)	\
    ( (This)->lpVtbl -> remove_Closed(This,token) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnector_ConnectAsync(This,operation)	\
    ( (This)->lpVtbl -> ConnectAsync(This,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnector_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5af2e9f2-5052-46f5-a118-85d281b11314")
    __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ HSTRING hostAddress,
            /* [in] */ UINT16 port,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnector **connector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics * This,
            /* [in] */ HSTRING hostAddress,
            /* [in] */ UINT16 port,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnector **connector);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_Create(This,hostAddress,port,connector)	\
    ( (This)->lpVtbl -> Create(This,hostAddress,port,connector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CNetwork_CIConnectorStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_RealtimeStreaming_0000_0037 */
/* [local] */ 

/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CMedia_CSourceStreamState
    {
        SourceStreamState_Invalid	= 0,
        SourceStreamState_Opening	= ( SourceStreamState_Invalid + 1 ) ,
        SourceStreamState_Starting	= ( SourceStreamState_Opening + 1 ) ,
        SourceStreamState_Started	= ( SourceStreamState_Starting + 1 ) ,
        SourceStreamState_Stopped	= ( SourceStreamState_Started + 1 ) ,
        SourceStreamState_Shutdown	= ( SourceStreamState_Stopped + 1 ) ,
        SourceStreamState_Count	= ( SourceStreamState_Shutdown + 1 ) 
    } ;
/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CMedia_CSinkStreamState
    {
        SinkStreamState_NotSet	= 0,
        SinkStreamState_Ready	= ( SinkStreamState_NotSet + 1 ) ,
        SinkStreamState_Started	= ( SinkStreamState_Ready + 1 ) ,
        SinkStreamState_Stopped	= ( SinkStreamState_Started + 1 ) ,
        SinkStreamState_Paused	= ( SinkStreamState_Stopped + 1 ) ,
        SinkStreamState_Count	= ( SinkStreamState_Paused + 1 ) 
    } ;
/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CMedia_CSinkStreamOperation
    {
        SinkStreamOperation_SetMediaType	= 0,
        SinkStreamOperation_Start	= ( SinkStreamOperation_SetMediaType + 1 ) ,
        SinkStreamOperation_Restart	= ( SinkStreamOperation_Start + 1 ) ,
        SinkStreamOperation_Pause	= ( SinkStreamOperation_Restart + 1 ) ,
        SinkStreamOperation_Stop	= ( SinkStreamOperation_Pause + 1 ) ,
        SinkStreamOperation_ProcessSample	= ( SinkStreamOperation_Stop + 1 ) ,
        SinkStreamOperation_PlaceMarker	= ( SinkStreamOperation_ProcessSample + 1 ) ,
        SinkStreamOperation_Count	= ( SinkStreamOperation_PlaceMarker + 1 ) 
    } ;
/* [v1_enum] */ 
enum __x_ABI_CRealtimeStreaming_CMedia_CAudioMixerMode
    {
        AudioMixerMode_Mic	= 0,
        AudioMixerMode_Loopback	= 1,
        AudioMixerMode_MicAndLoopback	= 2
    } ;


extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_RealtimeStreaming_0000_0037_v0_0_s_ifspec;

#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5a4a9427-1f66-40c6-ad6a-b3df73370112")
    __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Connection( 
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **connection) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Connection( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connection )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection **connection);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Connection )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandlerVtbl;

    interface __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_get_Connection(This,connection)	\
    ( (This)->lpVtbl -> get_Connection(This,connection) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_put_Connection(This,connection)	\
    ( (This)->lpVtbl -> put_Connection(This,connection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CIMrvcSchemeHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9fff32c-31f3-452f-b126-3c5c6da57206")
    __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_Closed( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Closed( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnEndOfStream( 
            /* [in] */ DWORD streamId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleError( 
            /* [in] */ HRESULT hr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckShutdown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendDescription( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMediaStreamProperties( 
            /* [in] */ __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType MediaStreamType,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties *mediaEncodingProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_Closed )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CPlugin_CIClosedEventHandler *eventHandler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Closed )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *OnEndOfStream )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [in] */ DWORD streamId);
        
        HRESULT ( STDMETHODCALLTYPE *HandleError )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *CheckShutdown )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendDescription )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetMediaStreamProperties )( 
            __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType MediaStreamType,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties *mediaEncodingProperties);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSinkVtbl;

    interface __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_add_Closed(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Closed(This,eventHandler,token) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_remove_Closed(This,token)	\
    ( (This)->lpVtbl -> remove_Closed(This,token) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_OnEndOfStream(This,streamId)	\
    ( (This)->lpVtbl -> OnEndOfStream(This,streamId) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_HandleError(This,hr)	\
    ( (This)->lpVtbl -> HandleError(This,hr) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_CheckShutdown(This)	\
    ( (This)->lpVtbl -> CheckShutdown(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_SendDescription(This)	\
    ( (This)->lpVtbl -> SendDescription(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_SetMediaStreamProperties(This,MediaStreamType,mediaEncodingProperties)	\
    ( (This)->lpVtbl -> SetMediaStreamProperties(This,MediaStreamType,mediaEncodingProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CINetworkMediaSink_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5e9858a9-5ef5-4b84-9645-eb3c11610a17")
    __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteFrame( 
            /* [in] */ UINT32 bufferSize,
            /* [in][size_is] */ byte *buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentResolution( 
            /* [out] */ UINT32 *pWidth,
            /* [out] */ UINT32 *pHeight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *WriteFrame )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This,
            /* [in] */ UINT32 bufferSize,
            /* [in][size_is] */ byte *buffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentResolution )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer * This,
            /* [out] */ UINT32 *pWidth,
            /* [out] */ UINT32 *pHeight);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerVtbl;

    interface __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_WriteFrame(This,bufferSize,buffer)	\
    ( (This)->lpVtbl -> WriteFrame(This,bufferSize,buffer) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_GetCurrentResolution(This,pWidth,pHeight)	\
    ( (This)->lpVtbl -> GetCurrentResolution(This,pWidth,pHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("da706722-7bf4-4527-ad4c-2222cb81a7ab")
    __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection,
            /* [in] */ GUID inputMediaType,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile *mediaEncodingProfile,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer **RealtimeServer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics * This,
            /* [in] */ __x_ABI_CRealtimeStreaming_CNetwork_CIConnection *connection,
            /* [in] */ GUID inputMediaType,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile *mediaEncodingProfile,
            /* [out][retval] */ __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServer **RealtimeServer);
        
        END_INTERFACE
    } __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStaticsVtbl;

    interface __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics
    {
        CONST_VTBL struct __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_Create(This,connection,inputMediaType,mediaEncodingProfile,RealtimeServer)	\
    ( (This)->lpVtbl -> Create(This,connection,inputMediaType,mediaEncodingProfile,RealtimeServer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CRealtimeStreaming_CMedia_CIRealtimeServerStatics_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


