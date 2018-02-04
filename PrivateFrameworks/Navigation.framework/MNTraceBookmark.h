/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceBookmark : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSData * _imageData;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageData;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
