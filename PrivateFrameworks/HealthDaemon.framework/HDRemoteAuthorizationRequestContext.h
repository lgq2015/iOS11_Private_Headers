/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDRemoteAuthorizationRequestContext : NSObject {
    id /* block */  _completion;
    HKAuthorizationRequestRecord * _requestRecord;
    id /* block */  _requestSentHandler;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) HKAuthorizationRequestRecord *requestRecord;
@property (nonatomic, copy) id /* block */ requestSentHandler;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)requestRecord;
- (id /* block */)requestSentHandler;
- (void)setCompletion:(id /* block */)arg1;
- (void)setRequestRecord:(id)arg1;
- (void)setRequestSentHandler:(id /* block */)arg1;

@end
