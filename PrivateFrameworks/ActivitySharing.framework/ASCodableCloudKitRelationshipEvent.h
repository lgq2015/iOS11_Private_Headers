/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableCloudKitRelationshipEvent : PBCodable <NSCopying> {
    long long  _anchor;
    double  _date;
    struct { 
        unsigned int anchor : 1; 
        unsigned int date : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _type;
}

@property (nonatomic) long long anchor;
@property (nonatomic) double date;
@property (nonatomic) bool hasAnchor;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasType;
@property (nonatomic) long long type;

- (long long)anchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnchor;
- (bool)hasDate;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1;
- (void)setDate:(double)arg1;
- (void)setHasAnchor:(bool)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
