/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFNetManager : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HMFNetManagerWoWAssertion * _wowAssertion;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property _HMFNetManagerWoWAssertion *wowAssertion;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)deregisterObject:(id)arg1;
- (void)deregisterWoWAssertionForObject:(id)arg1;
- (id)init;
- (void)registerWoWAssertionForObject:(id)arg1;
- (void)setWowAssertion:(id)arg1;
- (id)wowAssertion;

@end
