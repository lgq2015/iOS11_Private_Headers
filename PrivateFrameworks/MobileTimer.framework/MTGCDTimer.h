/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTGCDTimer : NSObject {
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;
- (void)startTimer:(double)arg1 block:(id /* block */)arg2;

@end
