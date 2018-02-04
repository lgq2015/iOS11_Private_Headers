/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRCompanionAuthOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _companionAuthHandler;
}

@property (nonatomic, copy) id /* block */ companionAuthHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)companionAuthHandler;
- (id)initWithCompanionAuthHandler:(id /* block */)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setCompanionAuthHandler:(id /* block */)arg1;

@end
