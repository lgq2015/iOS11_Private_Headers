/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReporterContext : NSExtensionContext <DKReporterRemoteContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)completeWithReport:(id)arg1 completion:(id /* block */)arg2;
- (void)startRemoteReportWithComponentIdentity:(id)arg1 completion:(id /* block */)arg2;

@end
