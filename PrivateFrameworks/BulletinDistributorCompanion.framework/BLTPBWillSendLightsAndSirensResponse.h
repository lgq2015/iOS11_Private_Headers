/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {
    unsigned int  _additionalWait;
    struct { 
        unsigned int additionalWait : 1; 
        unsigned int willSend : 1; 
    }  _has;
    bool  _willSend;
}

@property (nonatomic) unsigned int additionalWait;
@property (nonatomic) bool hasAdditionalWait;
@property (nonatomic) bool hasWillSend;
@property (nonatomic) bool willSend;

- (unsigned int)additionalWait;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdditionalWait;
- (bool)hasWillSend;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdditionalWait:(unsigned int)arg1;
- (void)setHasAdditionalWait:(bool)arg1;
- (void)setHasWillSend:(bool)arg1;
- (void)setWillSend:(bool)arg1;
- (bool)willSend;
- (void)writeTo:(id)arg1;

@end
