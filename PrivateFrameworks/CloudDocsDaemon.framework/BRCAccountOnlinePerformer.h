/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {
    NSString * _accountID;
    NSObject<OS_dispatch_queue> * _queue;
    BRCThrottler * _throttler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)addPerformer:(id)arg1;
+ (void)removePerformer:(id)arg1;

- (void).cxx_destruct;
- (void)_close;
- (id)_key;
- (id)initWithAccountID:(id)arg1;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)perform;
- (void)resumeAndAutoClose;

@end
