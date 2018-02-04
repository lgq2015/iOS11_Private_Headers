/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPoiTriggerEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int triggerTimestamp : 1; 
        unsigned int providerIdentifier : 1; 
        unsigned int triggerSubType : 1; 
        unsigned int triggerType : 1; 
    }  _has;
    unsigned long long  _muid;
    int  _providerIdentifier;
    int  _triggerSubType;
    double  _triggerTimestamp;
    int  _triggerType;
}

@property (nonatomic) bool hasProviderIdentifier;
@property (nonatomic) bool hasTriggerSubType;
@property (nonatomic) bool hasTriggerTimestamp;
@property (nonatomic) bool hasTriggerType;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) int providerIdentifier;
@property (nonatomic) int triggerSubType;
@property (nonatomic) double triggerTimestamp;
@property (nonatomic) int triggerType;

- (int)StringAsTriggerType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProviderIdentifier;
- (bool)hasTriggerSubType;
- (bool)hasTriggerTimestamp;
- (bool)hasTriggerType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (int)providerIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setHasProviderIdentifier:(bool)arg1;
- (void)setHasTriggerSubType:(bool)arg1;
- (void)setHasTriggerTimestamp:(bool)arg1;
- (void)setHasTriggerType:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setProviderIdentifier:(int)arg1;
- (void)setTriggerSubType:(int)arg1;
- (void)setTriggerTimestamp:(double)arg1;
- (void)setTriggerType:(int)arg1;
- (int)triggerSubType;
- (double)triggerTimestamp;
- (int)triggerType;
- (id)triggerTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
