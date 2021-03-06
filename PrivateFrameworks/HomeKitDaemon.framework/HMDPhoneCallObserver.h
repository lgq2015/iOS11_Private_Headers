/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate> {
    CXCallObserver * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CXCallObserver *observer;
@property (readonly) Class superclass;

+ (id)sharedPhoneCallObserver;

- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (bool)hasActiveCalls;
- (id)init;
- (bool)isActiveCall:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)startObserving;

@end
