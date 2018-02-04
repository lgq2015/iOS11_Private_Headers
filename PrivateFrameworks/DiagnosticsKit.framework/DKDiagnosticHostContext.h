/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter> {
    <DKExtensionHostAdapterDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKExtensionHostAdapterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (void)remoteHostCompleteWithResult:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteHostEnableVolumeHUD:(bool)arg1;
- (void)remoteHostGetAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)startWithPayload:(id)arg1 completion:(id /* block */)arg2;

@end
