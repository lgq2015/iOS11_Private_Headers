/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {
    NSString * _companionBundleIdentifier;
    struct { 
        unsigned int playbackState : 1; 
    }  _has;
    NSData * _iconDigest;
    NSString * _localizedDisplayName;
    unsigned int  _playbackState;
    NSString * _watchBundleIdentifier;
}

@property (nonatomic, retain) NSString *companionBundleIdentifier;
@property (nonatomic, readonly) bool hasCompanionBundleIdentifier;
@property (nonatomic, readonly) bool hasIconDigest;
@property (nonatomic, readonly) bool hasLocalizedDisplayName;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic, readonly) bool hasWatchBundleIdentifier;
@property (nonatomic, retain) NSData *iconDigest;
@property (nonatomic, retain) NSString *localizedDisplayName;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, retain) NSString *watchBundleIdentifier;

- (void).cxx_destruct;
- (id)companionBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompanionBundleIdentifier;
- (bool)hasIconDigest;
- (bool)hasLocalizedDisplayName;
- (bool)hasPlaybackState;
- (bool)hasWatchBundleIdentifier;
- (unsigned long long)hash;
- (id)iconDigest;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (void)mergeFrom:(id)arg1;
- (unsigned int)playbackState;
- (bool)readFrom:(id)arg1;
- (void)setCompanionBundleIdentifier:(id)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setIconDigest:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setWatchBundleIdentifier:(id)arg1;
- (id)watchBundleIdentifier;
- (void)writeTo:(id)arg1;

@end
