/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRCompletionOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)completionHandler;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
