/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExtensionContext : NSObject <NSCopying, NSSecureCoding, NSXPCListenerDelegate, _NSExtensionAuxHostingBase> {
    NSUUID * __UUID;
    NSXPCConnection * __auxiliaryConnection;
    NSXPCListener * __auxiliaryListener;
    bool  __dummyExtension;
    <_NSExtensionContextHosting> * __extensionHostProxy;
    <_NSExtensionContextVending> * __extensionVendorProxy;
    id  __principalObject;
    id /* block */  __requestCleanUpBlock;
    NSObject<OS_os_transaction> * __transaction;
    NSArray * _inputItems;
}

@property (nonatomic, copy) NSUUID *_UUID;
@property (setter=_setAuxiliaryConnection:, nonatomic, retain) NSXPCConnection *_auxiliaryConnection;
@property (setter=_setAuxiliaryListener:, nonatomic, retain) NSXPCListener *_auxiliaryListener;
@property (getter=_isDummyExtension, setter=_setDummyExtension:, nonatomic) bool _dummyExtension;
@property (setter=_setExtensionHostProxy:, retain) <_NSExtensionContextHosting> *_extensionHostProxy;
@property (setter=_setExtensionVendorProxy:, nonatomic, retain) <_NSExtensionContextVending> *_extensionVendorProxy;
@property (setter=_setPrincipalObject:, nonatomic) id _principalObject;
@property (setter=_setRequestCleanUpBlock:, nonatomic, copy) id /* block */ _requestCleanUpBlock;
@property (getter=_transaction, setter=_setTransaction:, retain) NSObject<OS_os_transaction> *_transaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } hostedViewMaximumAllowedSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } hostedViewMinimumAllowedSize;
@property (setter=_setInputItems:, nonatomic, copy) NSArray *inputItems;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_allowedErrorClasses;
+ (id)_defaultExtensionContextProtocol;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionContextForIdentifier:(id)arg1;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_UUID;
- (void)___nsx_pingHost:(id /* block */)arg1;
- (id)_auxiliaryConnection;
- (id)_auxiliaryListener;
- (void)_completeRequestReturningItemsSecondHalf:(id /* block */)arg1;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)_extensionHostProxy;
- (id)_extensionVendorProxy;
- (bool)_isDummyExtension;
- (bool)_isHost;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_principalObject;
- (id /* block */)_requestCleanUpBlock;
- (void)_setAuxiliaryConnection:(id)arg1;
- (void)_setAuxiliaryListener:(id)arg1;
- (void)_setDummyExtension:(bool)arg1;
- (void)_setExtensionHostProxy:(id)arg1;
- (void)_setExtensionVendorProxy:(id)arg1;
- (void)_setInputItems:(id)arg1;
- (void)_setPrincipalObject:(id)arg1;
- (void)_setRequestCleanUpBlock:(id /* block */)arg1;
- (void)_setTransaction:(id)arg1;
- (id)_transaction;
- (void)_willPerformHostCallback:(id /* block */)arg1;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)didConnectToVendor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)inputItems;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)set_UUID:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (struct CGSize { double x1; double x2; })hostedViewMaximumAllowedSize;
- (struct CGSize { double x1; double x2; })hostedViewMinimumAllowedSize;
- (id)interfaceParametersDescription;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

- (void)completeRequestWithBroadcastURL:(id)arg1 broadcastConfiguration:(id)arg2 setupInfo:(id)arg3;
- (void)completeRequestWithBroadcastURL:(id)arg1 setupInfo:(id)arg2;
- (void)loadBroadcastingApplicationInfoWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (void)setWidgetLargestAvailableDisplayMode:(long long)arg1;
- (long long)widgetActiveDisplayMode;
- (long long)widgetLargestAvailableDisplayMode;
- (struct CGSize { double x1; double x2; })widgetMaximumSizeForDisplayMode:(long long)arg1;

@end
