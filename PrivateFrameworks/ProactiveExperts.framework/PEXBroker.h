/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXBroker : NSObject {
    NSArray * _servants;
}

@property (nonatomic, retain) NSArray *servants;

- (void).cxx_destruct;
- (void)enumerateGlobalExplanationQueueAndFlushWithBlock:(id /* block */)arg1;
- (id)init;
- (void)itemEngaged:(id)arg1;
- (id)servants;
- (void)setServants:(id)arg1;

@end
