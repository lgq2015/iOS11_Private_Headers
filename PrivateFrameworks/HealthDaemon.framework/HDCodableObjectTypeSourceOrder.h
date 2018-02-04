/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {
    struct { 
        unsigned int objectType : 1; 
        unsigned int userOrdered : 1; 
    }  _has;
    long long  _objectType;
    NSData * _sourceUUIDs;
    bool  _userOrdered;
}

@property (nonatomic) bool hasObjectType;
@property (nonatomic, readonly) bool hasSourceUUIDs;
@property (nonatomic) bool hasUserOrdered;
@property (nonatomic) long long objectType;
@property (nonatomic, retain) NSData *sourceUUIDs;
@property (nonatomic) bool userOrdered;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)decodedDataTypeCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectType;
- (bool)hasSourceUUIDs;
- (bool)hasUserOrdered;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)objectType;
- (bool)readFrom:(id)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setHasUserOrdered:(bool)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setSourceUUIDs:(id)arg1;
- (void)setUserOrdered:(bool)arg1;
- (id)sourceUUIDs;
- (bool)userOrdered;
- (void)writeTo:(id)arg1;

@end