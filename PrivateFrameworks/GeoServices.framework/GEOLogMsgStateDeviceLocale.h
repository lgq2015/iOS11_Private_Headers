/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {
    NSString * _deviceInputLocale;
    NSString * _deviceOutputLocale;
    NSString * _deviceSettingsLocale;
}

@property (nonatomic, retain) NSString *deviceInputLocale;
@property (nonatomic, retain) NSString *deviceOutputLocale;
@property (nonatomic, retain) NSString *deviceSettingsLocale;
@property (nonatomic, readonly) bool hasDeviceInputLocale;
@property (nonatomic, readonly) bool hasDeviceOutputLocale;
@property (nonatomic, readonly) bool hasDeviceSettingsLocale;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInputLocale;
- (id)deviceOutputLocale;
- (id)deviceSettingsLocale;
- (id)dictionaryRepresentation;
- (bool)hasDeviceInputLocale;
- (bool)hasDeviceOutputLocale;
- (bool)hasDeviceSettingsLocale;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInputLocale:(id)arg1;
- (void)setDeviceOutputLocale:(id)arg1;
- (void)setDeviceSettingsLocale:(id)arg1;
- (void)writeTo:(id)arg1;

@end
