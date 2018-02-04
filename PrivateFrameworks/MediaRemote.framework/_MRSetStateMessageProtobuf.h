/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {
    NSString * _displayID;
    NSString * _displayName;
    struct { 
        unsigned int playbackState : 1; 
    }  _has;
    _MRNowPlayingInfoProtobuf * _nowPlayingInfo;
    _MRPlaybackQueueProtobuf * _playbackQueue;
    _MRPlaybackQueueCapabilitiesProtobuf * _playbackQueueCapabilities;
    unsigned int  _playbackState;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    _MRPlaybackQueueRequestProtobuf * _request;
    _MRSupportedCommandsProtobuf * _supportedCommands;
}

@property (nonatomic, retain) NSString *displayID;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayID;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (nonatomic, readonly) bool hasPlaybackQueue;
@property (nonatomic, readonly) bool hasPlaybackQueueCapabilities;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasSupportedCommands;
@property (nonatomic, retain) _MRNowPlayingInfoProtobuf *nowPlayingInfo;
@property (nonatomic, retain) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic, retain) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) _MRPlaybackQueueRequestProtobuf *request;
@property (nonatomic, retain) _MRSupportedCommandsProtobuf *supportedCommands;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayID;
- (id)displayName;
- (bool)hasDisplayID;
- (bool)hasDisplayName;
- (bool)hasNowPlayingInfo;
- (bool)hasPlaybackQueue;
- (bool)hasPlaybackQueueCapabilities;
- (bool)hasPlaybackState;
- (bool)hasPlayerPath;
- (bool)hasRequest;
- (bool)hasSupportedCommands;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (id)playbackQueue;
- (id)playbackQueueCapabilities;
- (unsigned int)playbackState;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setDisplayID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackQueueCapabilities:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;
- (void)writeTo:(id)arg1;

@end
