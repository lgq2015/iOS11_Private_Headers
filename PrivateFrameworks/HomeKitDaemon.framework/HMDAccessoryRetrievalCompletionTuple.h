/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject {
    id /* block */  _completion;
    long long  _linkType;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) long long linkType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)completion;
- (long long)linkType;
- (id)queue;
- (void)setCompletion:(id /* block */)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setQueue:(id)arg1;

@end
