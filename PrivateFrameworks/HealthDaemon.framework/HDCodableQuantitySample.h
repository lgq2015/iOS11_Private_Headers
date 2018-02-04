/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying> {
    struct { 
        unsigned int valueInCanonicalUnit : 1; 
        unsigned int valueInOriginalUnit : 1; 
    }  _has;
    NSString * _originalUnitString;
    HDCodableSample * _sample;
    double  _valueInCanonicalUnit;
    double  _valueInOriginalUnit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasOriginalUnitString;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasValueInCanonicalUnit;
@property (nonatomic) bool hasValueInOriginalUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *originalUnitString;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) double valueInOriginalUnit;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginalUnitString;
- (bool)hasSample;
- (bool)hasValueInCanonicalUnit;
- (bool)hasValueInOriginalUnit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalUnitString;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setHasValueInCanonicalUnit:(bool)arg1;
- (void)setHasValueInOriginalUnit:(bool)arg1;
- (void)setOriginalUnitString:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setValueInCanonicalUnit:(double)arg1;
- (void)setValueInOriginalUnit:(double)arg1;
- (double)valueInCanonicalUnit;
- (double)valueInOriginalUnit;
- (void)writeTo:(id)arg1;

@end
