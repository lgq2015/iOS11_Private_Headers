/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCWatchdogTimer : NSObject {
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void).cxx_destruct;
- (void)cancel;
- (bool)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* block */)arg2;
- (void)start;

@end
