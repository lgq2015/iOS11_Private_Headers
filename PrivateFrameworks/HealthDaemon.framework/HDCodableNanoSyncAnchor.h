/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying> {
    long long  _anchor;
    struct { 
        unsigned int anchor : 1; 
        unsigned int objectType : 1; 
    }  _has;
    int  _objectType;
}

@property (nonatomic) long long anchor;
@property (nonatomic) bool hasAnchor;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) int objectType;

- (int)StringAsObjectType:(id)arg1;
- (long long)anchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnchor;
- (bool)hasObjectType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (int)objectType;
- (id)objectTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1;
- (void)setHasAnchor:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setObjectType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
