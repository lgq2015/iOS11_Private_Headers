/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderHostProtocol, NEExtensionProviderProtocol> {
    NEConfiguration * _configuration;
    NSString * _description;
    <NEExtensionProviderHostProtocol> * _hostContext;
    id /* block */  _stopCompletionHandler;
}

@property (retain) NEConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ stopCompletionHandler;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (void)completeSession;
- (id)configuration;
- (id)description;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispose;
- (id)hostContext;
- (long long)neStopReasonToProviderStopReason:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
- (void)setDescription:(id)arg1;
- (void)setStopCompletionHandler:(id /* block */)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startedWithError:(id)arg1;
- (id /* block */)stopCompletionHandler;
- (void)stopWithReason:(int)arg1;
- (void)wake;

@end
