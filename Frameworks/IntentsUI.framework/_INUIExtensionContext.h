/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {
    _INUIExtensionContextState * _currentExtensionContextState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_bestAllowedSizeForAllowedSizesDictionary:(id)arg1;
- (id)_errorHandlingHostProxy;
- (void)_requestHandlingOfIntent:(id)arg1;
- (struct CGSize { double x1; double x2; })hostedViewMaximumAllowedSize;
- (struct CGSize { double x1; double x2; })hostedViewMinimumAllowedSize;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)interfaceParametersDescription;
- (void)setExtensionContextState:(id)arg1 completion:(id /* block */)arg2;

@end
