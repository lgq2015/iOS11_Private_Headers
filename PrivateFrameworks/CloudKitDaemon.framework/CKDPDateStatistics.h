/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDateStatistics : PBCodable <NSCopying> {
    CKDPDate * _creation;
    CKDPDate * _modification;
}

@property (nonatomic, retain) CKDPDate *creation;
@property (nonatomic, readonly) bool hasCreation;
@property (nonatomic, readonly) bool hasModification;
@property (nonatomic, retain) CKDPDate *modification;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creation;
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
