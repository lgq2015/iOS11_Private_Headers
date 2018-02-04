/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreWiFiManagerClient : NSObject {
    struct __WiFiManagerClient { } * _primitiveWiFiManagerClient;
    int  _rssi;
    int  _snr;
    int  _type;
}

- (struct __WiFiManagerClient { }*)_primitiveWiFiManagerClient;
- (void)_setWiFiManagerClientType:(int)arg1;
- (void)dealloc;
- (void)disableWiFiTimeout;
- (void)enableWiFiTimeout;
- (bool)hasAssociatedNetworkWithRSSI:(int*)arg1 andSNR:(int*)arg2 andPhyMode:(id*)arg3 andChannelInfo:(id*)arg4;
- (id)init;
- (bool)isWifiEnabled;
- (void)registerOneShotEnabledHandler:(id /* block */)arg1;

@end
