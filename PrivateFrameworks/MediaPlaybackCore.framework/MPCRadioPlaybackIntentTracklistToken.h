/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {
    MPCModelRadioContentReference * _nowPlayingContentReference;
    RadioStationMatchContext * _nowPlayingContext;
    MPCRadioStationPlaybackMetadata * _radioStationPlaybackMetadata;
    MPCModelRadioContentReference * _seedContentReference;
    RadioStationMatchContext * _stationMatchContext;
}

@property (nonatomic, copy) MPCModelRadioContentReference *nowPlayingContentReference;
@property (nonatomic, retain) RadioStationMatchContext *nowPlayingContext;
@property (nonatomic, copy) MPCRadioStationPlaybackMetadata *radioStationPlaybackMetadata;
@property (nonatomic, copy) MPCModelRadioContentReference *seedContentReference;
@property (nonatomic, retain) RadioStationMatchContext *stationMatchContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nowPlayingContentReference;
- (id)nowPlayingContext;
- (id)radioStationPlaybackMetadata;
- (id)seedContentReference;
- (void)setNowPlayingContentReference:(id)arg1;
- (void)setNowPlayingContext:(id)arg1;
- (void)setRadioStationPlaybackMetadata:(id)arg1;
- (void)setSeedContentReference:(id)arg1;
- (void)setStationMatchContext:(id)arg1;
- (id)stationMatchContext;

@end
