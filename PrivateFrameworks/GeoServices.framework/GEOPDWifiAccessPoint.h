/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDWifiAccessPoint : PBCodable <NSCopying> {
    unsigned int  _age;
    int  _channel;
    struct { 
        unsigned int scanTimestamp : 1; 
        unsigned int age : 1; 
        unsigned int channel : 1; 
        unsigned int rssi : 1; 
    }  _has;
    NSString * _macId;
    int  _rssi;
    unsigned long long  _scanTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int age;
@property (nonatomic) int channel;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasChannel;
@property (nonatomic, readonly) bool hasMacId;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasScanTimestamp;
@property (nonatomic, retain) NSString *macId;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned long long scanTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)age;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasChannel;
- (bool)hasMacId;
- (bool)hasRssi;
- (bool)hasScanTimestamp;
- (unsigned long long)hash;
- (id)initWithGEOWifiAccessPoint:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)macId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (unsigned long long)scanTimestamp;
- (void)setAge:(unsigned int)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasScanTimestamp:(bool)arg1;
- (void)setMacId:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setScanTimestamp:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end