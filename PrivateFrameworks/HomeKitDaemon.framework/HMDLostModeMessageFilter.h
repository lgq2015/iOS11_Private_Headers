/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLostModeMessageFilter : HMDMessageFilter {
    bool  _deviceLost;
}

@property (getter=isDeviceLost, nonatomic) bool deviceLost;

- (void)_deviceLostStateNotification:(id)arg1;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)initWithName:(id)arg1;
- (bool)isDeviceLost;
- (void)setDeviceLost:(bool)arg1;

@end
