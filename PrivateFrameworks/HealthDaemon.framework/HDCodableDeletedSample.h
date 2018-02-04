/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableDeletedSample : PBCodable <NSCopying> {
    HDCodableSample * _sample;
}

@property (nonatomic, readonly) bool hasSample;
@property (nonatomic, retain) HDCodableSample *sample;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSample;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setSample:(id)arg1;
- (void)writeTo:(id)arg1;

@end
