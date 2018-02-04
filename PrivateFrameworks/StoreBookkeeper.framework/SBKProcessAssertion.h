/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKProcessAssertion : NSObject {
    BKSProcessAssertion * _bkProcessAssertion;
    id /* block */  _expirationBlock;
    id  _expirationObserver;
    unsigned long long  _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) BKSProcessAssertion *bkProcessAssertion;
@property (retain) id expirationObserver;
@property (readonly) unsigned long long identifier;

- (void).cxx_destruct;
- (void)_expireBackgroundTask;
- (void)_onQueueSetBkProcessAssertion:(id)arg1;
- (id)bkProcessAssertion;
- (void)dealloc;
- (id)description;
- (id)expirationObserver;
- (unsigned long long)identifier;
- (id)initWithExpirationBlock:(id /* block */)arg1 debugDescription:(id)arg2;
- (void)invalidate;
- (void)setBkProcessAssertion:(id)arg1;
- (void)setExpirationObserver:(id)arg1;

@end