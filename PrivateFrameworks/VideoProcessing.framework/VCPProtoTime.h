/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoTime : PBCodable <NSCopying> {
    long long  _epoch;
    unsigned int  _flags;
    int  _timescale;
    long long  _value;
}

@property (nonatomic) long long epoch;
@property (nonatomic) unsigned int flags;
@property (nonatomic) int timescale;
@property (nonatomic) long long value;

+ (id)timeWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)epoch;
- (unsigned int)flags;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEpoch:(long long)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setTimescale:(int)arg1;
- (void)setValue:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeValue;
- (int)timescale;
- (long long)value;
- (void)writeTo:(id)arg1;

@end
