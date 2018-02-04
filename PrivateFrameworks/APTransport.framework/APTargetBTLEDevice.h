/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

@interface APTargetBTLEDevice : NSObject {
    NSUUID * _deviceID;
    bool  _isFirmwareTracked;
    bool  _isSoloCapable;
    unsigned long long  _lastBeaconTicks;
    struct { 
        unsigned char flags; 
        unsigned char config; 
        unsigned char ipv4[4]; 
    }  _lastData;
    int  _lastRSSI;
    bool  _requestedTracking;
    bool  _supportsMediaControlPort;
}

@property (nonatomic, retain) NSUUID *deviceID;
@property (nonatomic) bool isFirmwareTracked;
@property (nonatomic) bool isSoloCapable;
@property (nonatomic) unsigned long long lastBeaconTicks;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3[4]; } lastData;
@property (nonatomic) int lastRSSI;
@property (nonatomic) bool requestedTracking;
@property (nonatomic) bool supportsMediaControlPort;

- (void)dealloc;
- (id)deviceID;
- (bool)isFirmwareTracked;
- (bool)isSoloCapable;
- (unsigned long long)lastBeaconTicks;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3[4]; })lastData;
- (int)lastRSSI;
- (bool)requestedTracking;
- (void)setDeviceID:(id)arg1;
- (void)setIsFirmwareTracked:(bool)arg1;
- (void)setIsSoloCapable:(bool)arg1;
- (void)setLastBeaconTicks:(unsigned long long)arg1;
- (void)setLastData:(struct { unsigned char x1; unsigned char x2; unsigned char x3[4]; })arg1;
- (void)setLastRSSI:(int)arg1;
- (void)setRequestedTracking:(bool)arg1;
- (void)setSupportsMediaControlPort:(bool)arg1;
- (bool)supportsMediaControlPort;

@end
