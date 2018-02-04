/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECFeedbackProvider : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)setCategory:(unsigned long long)arg1;
+ (id)sharedInstance;
+ (void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3;
+ (void)userAbandoned:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3;
+ (void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3;
+ (void)userEngaged:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3;

- (void).cxx_destruct;
- (id)init;

@end
