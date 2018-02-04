/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackQueueContextProtobuf : PBCodable <NSCopying> {
    NSString * _revision;
}

@property (nonatomic, readonly) bool hasRevision;
@property (nonatomic, retain) NSString *revision;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRevision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)revision;
- (void)setRevision:(id)arg1;
- (void)writeTo:(id)arg1;

@end
