/* made by EzioChiu.
 */

@protocol PUVideoEditScrubberControllerDelegate <NSObject>

@optional

- (void)scrubberController:(PUVideoEditScrubberController *)arg1 didBeginScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 didEndScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 editingEndValueDidChange:(double)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 editingStartValueDidChange:(double)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 slomoRegionsDidChangeWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 valueDidChange:(double)arg2;
- (void)scrubberControllerDidBeginEditingSlomoRegions:(PUVideoEditScrubberController *)arg1;
- (void)scrubberControllerDidEndEditingSlomoRegions:(PUVideoEditScrubberController *)arg1;

@end