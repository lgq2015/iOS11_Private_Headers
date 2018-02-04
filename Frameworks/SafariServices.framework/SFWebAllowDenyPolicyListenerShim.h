/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebAllowDenyPolicyListenerShim : NSObject <WebAllowDenyPolicyListener> {
    bool  _completed;
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithResult:(bool)arg1;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldClearCache;

@end