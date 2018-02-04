/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPDevice : NSObject {
    NSData * _authTag;
    NSData * _bleAdvertisementData;
    NSData * _bleDeviceAddress;
    unsigned int  _blePaired;
    unsigned char  _deviceActionType;
    unsigned int  _deviceType;
    NSUUID * _identifier;
    CUMobileDevice * _mobileDevice;
    NSString * _model;
    NSString * _name;
    bool  _needsSetup;
    CUPairedPeer * _pairedPeer;
    NSUUID * _pairingIdentifier;
    int  _rawRSSI;
    int  _smoothedRSSI;
    unsigned int  _systemPairState;
    NSData * _txtData;
    NSDictionary * _txtDictionary;
    NSString * _udid;
    NSData * _wifiAddress;
    NSData * _wifiBSSID;
    NSData * _wifiDeviceIEDeviceID;
    unsigned int  _wifiDeviceIEFlags;
    NSData * _wifiDeviceIEName;
    NSData * _wifiIEData;
    id  _wifiPlatformObject;
    NSString * _wifiSSID;
}

@property (nonatomic, readonly, copy) NSData *authTag;
@property (nonatomic, readonly, copy) NSData *bleAdvertisementData;
@property (nonatomic, readonly, copy) NSData *bleDeviceAddress;
@property (nonatomic, readonly) unsigned int blePaired;
@property (nonatomic, readonly) unsigned char deviceActionType;
@property (nonatomic, readonly) unsigned int deviceType;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) CUMobileDevice *mobileDevice;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool needsSetup;
@property (nonatomic, retain) CUPairedPeer *pairedPeer;
@property (nonatomic, copy) NSUUID *pairingIdentifier;
@property (nonatomic, readonly) int rawRSSI;
@property (nonatomic, readonly) int smoothedRSSI;
@property (nonatomic) unsigned int systemPairState;
@property (nonatomic, readonly, copy) NSData *txtData;
@property (nonatomic, readonly, copy) NSDictionary *txtDictionary;
@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSData *wifiAddress;
@property (nonatomic, copy) NSData *wifiBSSID;
@property (nonatomic, copy) NSData *wifiDeviceIEDeviceID;
@property (nonatomic, readonly) unsigned int wifiDeviceIEFlags;
@property (nonatomic, copy) NSData *wifiDeviceIEName;
@property (nonatomic, copy) NSData *wifiIEData;
@property (nonatomic, retain) id wifiPlatformObject;
@property (nonatomic, copy) NSString *wifiSSID;

- (void).cxx_destruct;
- (void)_updateTXTDictionary:(id)arg1;
- (id)authTag;
- (id)bleAdvertisementData;
- (id)bleDeviceAddress;
- (unsigned int)blePaired;
- (id)description;
- (unsigned char)deviceActionType;
- (unsigned int)deviceType;
- (id)identifier;
- (id)init;
- (id)mobileDevice;
- (id)model;
- (id)name;
- (bool)needsSetup;
- (id)pairedPeer;
- (id)pairingIdentifier;
- (int)rawRSSI;
- (void)setIdentifier:(id)arg1;
- (void)setMobileDevice:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairedPeer:(id)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setSystemPairState:(unsigned int)arg1;
- (void)setUdid:(id)arg1;
- (void)setWifiAddress:(id)arg1;
- (void)setWifiBSSID:(id)arg1;
- (void)setWifiDeviceIEDeviceID:(id)arg1;
- (void)setWifiDeviceIEName:(id)arg1;
- (void)setWifiIEData:(id)arg1;
- (void)setWifiPlatformObject:(id)arg1;
- (void)setWifiSSID:(id)arg1;
- (int)smoothedRSSI;
- (unsigned int)systemPairState;
- (id)txtData;
- (id)txtDictionary;
- (id)udid;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithMobileDevice:(id)arg1;
- (void)updateWithSFDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)updateWithSystemInfo:(id)arg1;
- (void)updateWithWiFiDevice:(id)arg1 changes:(unsigned int)arg2;
- (id)wifiAddress;
- (id)wifiBSSID;
- (id)wifiDeviceIEDeviceID;
- (unsigned int)wifiDeviceIEFlags;
- (id)wifiDeviceIEName;
- (id)wifiIEData;
- (id)wifiPlatformObject;
- (id)wifiSSID;

@end
