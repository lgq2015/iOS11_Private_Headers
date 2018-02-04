/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPDateStatistics : PBCodable <NSCopying> {
    FCCKPDate * _creation;
    FCCKPDate * _modification;
}

@property (nonatomic, retain) FCCKPDate *creation;
@property (nonatomic, readonly) bool hasCreation;
@property (nonatomic, readonly) bool hasModification;
@property (nonatomic, retain) FCCKPDate *modification;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creation;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreation;
- (bool)hasModification;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modification;
- (bool)readFrom:(id)arg1;
- (void)setCreation:(id)arg1;
- (void)setModification:(id)arg1;
- (void)writeTo:(id)arg1;

@end
