/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBMigrationDevices : PBCodable <NSCopying> {
    NSMutableArray * _devices;
    NSData * _phoneUDIDHash;
}

@property (nonatomic, retain) NSMutableArray *devices;
@property (nonatomic, readonly) bool hasPhoneUDIDHash;
@property (nonatomic, retain) NSData *phoneUDIDHash;

+ (Class)devicesType;

- (void).cxx_destruct;
- (void)addDevices:(id)arg1;
- (void)clearDevices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devices;
- (id)devicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicesCount;
- (id)dictionaryRepresentation;
- (bool)hasPhoneUDIDHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneUDIDHash;
- (bool)readFrom:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setPhoneUDIDHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end
