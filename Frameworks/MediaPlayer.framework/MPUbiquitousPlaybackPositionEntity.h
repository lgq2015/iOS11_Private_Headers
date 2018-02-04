/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUbiquitousPlaybackPositionEntity : NSObject {
    double  _bookmarkTime;
    double  _bookmarkTimestamp;
    bool  _hasBeenPlayed;
    NSString * _ubiquitousIdentifier;
    unsigned long long  _userPlayCount;
}

@property (nonatomic) double bookmarkTime;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic, readonly, copy) NSString *ubiquitousIdentifier;
@property (nonatomic) unsigned long long userPlayCount;

+ (id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1;

- (void).cxx_destruct;
- (double)bookmarkTime;
- (bool)bookmarkTimeModified;
- (double)bookmarkTimestamp;
- (bool)bookmarkTimestampModified;
- (bool)hasBeenPlayed;
- (bool)hasBeenPlayedModified;
- (id)init;
- (id)initWithUbiquitousIdentifier:(id)arg1;
- (void)setBookmarkTime:(double)arg1;
- (void)setBookmarkTimestamp:(double)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setUserPlayCount:(unsigned long long)arg1;
- (id)ubiquitousIdentifier;
- (unsigned long long)userPlayCount;
- (bool)userPlayCountModified;

@end
