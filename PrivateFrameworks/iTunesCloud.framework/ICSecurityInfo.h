/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSecurityInfo : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _classCUnlocked;
    int  _firstUnlockNotificationToken;
    NSMutableArray * _pendingFirstUnlockBlocks;
}

@property (getter=isContentProtectionEnabled, nonatomic, readonly) bool contentProtectionEnabled;
@property (getter=isDeviceClassCUnlocked, nonatomic, readonly) bool deviceClassCUnlocked;
@property (getter=isDeviceUnlocked, nonatomic, readonly) bool deviceUnlocked;

+ (id)sharedSecurityInfo;

- (void).cxx_destruct;
- (void)_processFirstUnlockNotification;
- (void)dealloc;
- (id)init;
- (bool)isContentProtectionEnabled;
- (bool)isDeviceClassCUnlocked;
- (bool)isDeviceUnlocked;
- (void)performBlockAfterFirstUnlock:(id /* block */)arg1;

@end
