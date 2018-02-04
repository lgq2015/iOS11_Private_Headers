/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMCallMonitor : NSObject <CXCallObserverDelegate> {
    CXCallObserver * _callCenter;
    NSDate * _lastCallDate;
    bool  _wasOnCall;
}

@property (nonatomic, readonly, retain) NSDate *dateLastCallEnded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOnCall;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)dateLastCallEnded;
- (void)dealloc;
- (id)init;
- (bool)isOnCall;

@end
