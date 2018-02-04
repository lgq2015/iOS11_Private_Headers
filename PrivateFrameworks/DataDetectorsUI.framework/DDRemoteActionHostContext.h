/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteActionHostContext : NSExtensionContext <DDRemoteActionHostProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)enableUserInteraction:(bool)arg1;
- (void)prepareViewControllerWithCompletionHandler:(id /* block */)arg1;
- (id)protocolService;

@end
