/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaybackPosition : MPModelObject {
    double  _bookmarkTime;
    bool  _hasBeenPlayed;
    bool  _shouldRememberBookmarkTime;
    double  _startTime;
    NSNumber * _stopTime;
    NSString * _storeUbiquitousIdentifier;
    long long  _userPlayCount;
}

@property (nonatomic) double bookmarkTime;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic) bool shouldRememberBookmarkTime;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSNumber *stopTime;
@property (nonatomic, copy) NSString *storeUbiquitousIdentifier;
@property (nonatomic) long long userPlayCount;

+ (id)__MPModelPropertyPlaybackPositionBookmarkTime__PROPERTY;
+ (id)__MPModelPropertyPlaybackPositionHasBeenPlayed__PROPERTY;
+ (id)__MPModelPropertyPlaybackPositionShouldRememberBookmarkTime__PROPERTY;
+ (id)__MPModelPropertyPlaybackPositionStartTime__PROPERTY;
+ (id)__MPModelPropertyPlaybackPositionStopTime__PROPERTY;
+ (id)__MPModelPropertyPlaybackPositionStoreUbiquitousIdentifier__PROPERTY;
+ (id)__MPModelPropertyPlaybackPositionUserPlayCount__PROPERTY;
+ (id)__bookmarkTime__KEY;
+ (id)__hasBeenPlayed__KEY;
+ (id)__shouldRememberBookmarkTime__KEY;
+ (id)__startTime__KEY;
+ (id)__stopTime__KEY;
+ (id)__storeUbiquitousIdentifier__KEY;
+ (id)__userPlayCount__KEY;

- (void).cxx_destruct;
- (double)bookmarkTime;
- (id)descriptionWithType:(long long)arg1;
- (bool)hasBeenPlayed;
- (void)setBookmarkTime:(double)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setShouldRememberBookmarkTime:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(id)arg1;
- (void)setStoreUbiquitousIdentifier:(id)arg1;
- (void)setUserPlayCount:(long long)arg1;
- (bool)shouldRememberBookmarkTime;
- (double)startTime;
- (id)stopTime;
- (id)storeUbiquitousIdentifier;
- (long long)userPlayCount;

@end
