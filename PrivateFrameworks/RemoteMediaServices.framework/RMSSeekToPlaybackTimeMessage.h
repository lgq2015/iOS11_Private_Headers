/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSeekToPlaybackTimeMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int playbackTime : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _playbackTime;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasPlaybackTime;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) int playbackTime;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaybackTime;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)playbackTime;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasPlaybackTime:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setPlaybackTime:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end