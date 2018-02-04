/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoPoint : PBCodable <NSCopying> {
    double  _x;
    double  _y;
}

@property (nonatomic) double x;
@property (nonatomic) double y;

+ (id)pointWithPoint:(struct CGPoint { double x1; double x2; })arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointValue;
- (bool)readFrom:(id)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)x;
- (double)y;

@end
