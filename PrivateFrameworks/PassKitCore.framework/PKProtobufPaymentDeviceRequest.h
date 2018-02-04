/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying> {
    NSString * _deviceName;
    struct { 
        unsigned int protocolVersion : 1; 
        unsigned int shouldAdvertise : 1; 
    }  _has;
    NSMutableArray * _knownManifestHashes;
    unsigned int  _protocolVersion;
    bool  _shouldAdvertise;
}

@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasShouldAdvertise;
@property (nonatomic, retain) NSMutableArray *knownManifestHashes;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) bool shouldAdvertise;

+ (Class)knownManifestHashesType;

- (void).cxx_destruct;
- (void)addKnownManifestHashes:(id)arg1;
- (void)clearKnownManifestHashes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasDeviceName;
- (bool)hasProtocolVersion;
- (bool)hasShouldAdvertise;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)knownManifestHashes;
- (id)knownManifestHashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)knownManifestHashesCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)protocolVersion;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDeviceName:(id)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasShouldAdvertise:(bool)arg1;
- (void)setKnownManifestHashes:(id)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setShouldAdvertise:(bool)arg1;
- (bool)shouldAdvertise;
- (void)writeTo:(id)arg1;

@end
