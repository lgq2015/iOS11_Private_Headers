/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTimeMarker : NSObject {
    double  _duration;
    unsigned long long  _index;
    int  _markerType;
    NSDictionary * _metadata;
    double  _time;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) double comparableTime;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool hasArtworkAtPlaybackTime;
@property (nonatomic) unsigned long long index;
@property (nonatomic, readonly) int markerType;
@property (nonatomic, readonly) double maxTime;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) double time;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (double)comparableTime;
- (id)description;
- (double)duration;
- (bool)hasArtworkAtPlaybackTime;
- (unsigned long long)index;
- (id)initWithMarkerType:(int)arg1;
- (int)markerType;
- (double)maxTime;
- (id)metadata;
- (void)setDuration:(double)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (double)time;
- (id)title;
- (id)url;
- (id)urlTitleTrimmingCharacterSet;

@end
