/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSBeginPairingMessage : PBCodable <NSCopying> {
    NSString * _appName;
    NSString * _deviceModel;
    NSString * _deviceName;
    NSString * _passcode;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) bool hasAppName;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic, readonly) bool hasPasscode;
@property (nonatomic, retain) NSString *passcode;

- (void).cxx_destruct;
- (id)appName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceModel;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasAppName;
- (bool)hasDeviceModel;
- (bool)hasDeviceName;
- (bool)hasPasscode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passcode;
- (bool)readFrom:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
