/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEvent * _event;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) double durationWatched;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) long long numberOfDroppedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfSegmentsDownloaded;
@property (nonatomic, readonly) unsigned long long numberOfServerAddressChanges;
@property (nonatomic, readonly) long long numberOfStalls;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) double playbackStartOffset;
@property (nonatomic, readonly) double segmentsDownloadedDuration;
@property (nonatomic, readonly) NSString *serverAddress;

- (void).cxx_destruct;
- (id)URI;
- (id)_initWithAVItemAccessLogEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)durationWatched;
- (double)indicatedBitrate;
- (long long)numberOfBytesTransferred;
- (long long)numberOfDroppedVideoFrames;
- (unsigned long long)numberOfSegmentsDownloaded;
- (unsigned long long)numberOfServerAddressChanges;
- (long long)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end
