/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMotionActivity : PBCodable <NSCopying> {
    int  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _type;
}

@property (nonatomic) int confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

- (int)StringAsConfidence:(id)arg1;
- (int)StringAsType:(id)arg1;
- (int)confidence;
- (id)confidenceAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
