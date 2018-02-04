/* made by EzioChiu.
 */

@protocol UIMovieScrubberDataSource <NSObject>

@required

- (NSArray *)movieScrubber:(UIMovieScrubber *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (void)movieScrubber:(UIMovieScrubber *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2;
- (double)movieScrubberDuration:(UIMovieScrubber *)arg1;
- (double)movieScrubberThumbnailAspectRatio:(UIMovieScrubber *)arg1;

@optional

- (void)movieScrubber:(UIMovieScrubber *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(bool)arg3;

@end
