/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWiFiLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedLogger;

- (void).cxx_destruct;
- (int)_captureLogs;
- (void)captureLogs;
- (void)dealloc;
- (id)init;

@end