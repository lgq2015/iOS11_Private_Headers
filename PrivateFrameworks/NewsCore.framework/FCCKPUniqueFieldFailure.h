/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPUniqueFieldFailure : PBCodable <NSCopying> {
    FCCKPIdentifier * _identifierForConstraintFailure;
}

@property (nonatomic, readonly) bool hasIdentifierForConstraintFailure;
@property (nonatomic, retain) FCCKPIdentifier *identifierForConstraintFailure;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifierForConstraintFailure;
- (unsigned long long)hash;
- (id)identifierForConstraintFailure;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifierForConstraintFailure:(id)arg1;
- (void)writeTo:(id)arg1;

@end