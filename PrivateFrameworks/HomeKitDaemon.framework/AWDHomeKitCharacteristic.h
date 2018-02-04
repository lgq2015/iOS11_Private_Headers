/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCharacteristic : PBCodable <NSCopying> {
    NSString * _characteristicType;
    NSString * _serviceType;
}

@property (nonatomic, retain) NSString *characteristicType;
@property (nonatomic, readonly) bool hasCharacteristicType;
@property (nonatomic, readonly) bool hasServiceType;
@property (nonatomic, retain) NSString *serviceType;

- (void).cxx_destruct;
- (id)characteristicType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCharacteristicType;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceType;
- (void)setCharacteristicType:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
