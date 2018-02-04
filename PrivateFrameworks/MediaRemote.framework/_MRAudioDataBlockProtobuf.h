/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {
    _MRAudioBufferProtobuf * _buffer;
    double  _gain;
    struct { 
        unsigned int gain : 1; 
    }  _has;
    _MRAudioTimeProtobuf * _time;
}

@property (nonatomic, retain) _MRAudioBufferProtobuf *buffer;
@property (nonatomic) double gain;
@property (nonatomic, readonly) bool hasBuffer;
@property (nonatomic) bool hasGain;
@property (nonatomic, readonly) bool hasTime;
@property (nonatomic, retain) _MRAudioTimeProtobuf *time;

- (id)buffer;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)gain;
- (bool)hasBuffer;
- (bool)hasGain;
- (bool)hasTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuffer:(id)arg1;
- (void)setGain:(double)arg1;
- (void)setHasGain:(bool)arg1;
- (void)setTime:(id)arg1;
- (id)time;
- (void)writeTo:(id)arg1;

@end
