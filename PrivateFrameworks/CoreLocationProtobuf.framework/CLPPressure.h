/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPressure : PBCodable <NSCopying> {
    double  _std;
    double  _timestamp;
    double  _value;
}

@property (nonatomic) double std;
@property (nonatomic) double timestamp;
@property (nonatomic) double value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStd:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setValue:(double)arg1;
- (double)std;
- (double)timestamp;
- (double)value;
- (void)writeTo:(id)arg1;

@end
