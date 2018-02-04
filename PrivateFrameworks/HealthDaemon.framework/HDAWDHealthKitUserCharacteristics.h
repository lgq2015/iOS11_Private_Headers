/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitUserCharacteristics : PBCodable <NSCopying> {
    long long  _ageYears;
    long long  _biologicalSex;
    struct { 
        unsigned int ageYears : 1; 
        unsigned int biologicalSex : 1; 
        unsigned int heightCm : 1; 
        unsigned int weightKg : 1; 
    }  _has;
    long long  _heightCm;
    long long  _weightKg;
}

@property (nonatomic) long long ageYears;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) bool hasAgeYears;
@property (nonatomic) bool hasBiologicalSex;
@property (nonatomic) bool hasHeightCm;
@property (nonatomic) bool hasWeightKg;
@property (nonatomic) long long heightCm;
@property (nonatomic) long long weightKg;

- (long long)ageYears;
- (long long)biologicalSex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAgeYears;
- (bool)hasBiologicalSex;
- (bool)hasHeightCm;
- (bool)hasWeightKg;
- (unsigned long long)hash;
- (long long)heightCm;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAgeYears:(long long)arg1;
- (void)setBiologicalSex:(long long)arg1;
- (void)setHasAgeYears:(bool)arg1;
- (void)setHasBiologicalSex:(bool)arg1;
- (void)setHasHeightCm:(bool)arg1;
- (void)setHasWeightKg:(bool)arg1;
- (void)setHeightCm:(long long)arg1;
- (void)setWeightKg:(long long)arg1;
- (long long)weightKg;
- (void)writeTo:(id)arg1;

@end
