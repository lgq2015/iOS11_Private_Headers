/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBehaviorOverride : PBCodable <NSCopying> {
    unsigned long long  _behaviorOverrideMode;
    unsigned long long  _behaviorOverrideType;
    NSMutableArray * _effectiveIntervals;
    struct { 
        unsigned int behaviorOverrideMode : 1; 
        unsigned int behaviorOverrideType : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long behaviorOverrideMode;
@property (nonatomic) unsigned long long behaviorOverrideType;
@property (nonatomic, retain) NSMutableArray *effectiveIntervals;
@property (nonatomic) bool hasBehaviorOverrideMode;
@property (nonatomic) bool hasBehaviorOverrideType;

- (void).cxx_destruct;
- (void)addEffectiveIntervals:(id)arg1;
- (unsigned long long)behaviorOverrideMode;
- (unsigned long long)behaviorOverrideType;
- (void)clearEffectiveIntervals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)effectiveIntervals;
- (id)effectiveIntervalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)effectiveIntervalsCount;
- (bool)hasBehaviorOverrideMode;
- (bool)hasBehaviorOverrideType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBehaviorOverrideMode:(unsigned long long)arg1;
- (void)setBehaviorOverrideType:(unsigned long long)arg1;
- (void)setEffectiveIntervals:(id)arg1;
- (void)setHasBehaviorOverrideMode:(bool)arg1;
- (void)setHasBehaviorOverrideType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
