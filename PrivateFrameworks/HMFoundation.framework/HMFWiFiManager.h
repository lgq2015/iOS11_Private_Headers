/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFWiFiManager : HMFObject {
    bool  _hmdWoWAssterted;
    struct __WiFiManagerClient { } * _wifiClientReference;
    struct __WiFiDeviceClient { } * _wifiDeviceReference;
    bool  _wifiLinkState;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool hmdWoWAssterted;
@property (nonatomic) struct __WiFiManagerClient { }*wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient { }*wifiDeviceReference;
@property (nonatomic) bool wifiLinkState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_initalizeWiFiDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)dealloc;
- (void)handleWiFiLinkChange:(bool)arg1;
- (bool)hmdWoWAssterted;
- (id)init;
- (void)releaseWoWAssertion;
- (void)setHmdWoWAssterted:(bool)arg1;
- (void)setWifiClientReference:(struct __WiFiManagerClient { }*)arg1;
- (void)setWifiDeviceReference:(struct __WiFiDeviceClient { }*)arg1;
- (void)setWifiLinkState:(bool)arg1;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)takeWoWAssertion;
- (struct __WiFiManagerClient { }*)wifiClientReference;
- (struct __WiFiDeviceClient { }*)wifiDeviceReference;
- (bool)wifiLinkState;
- (id)workQueue;

@end
