/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWaveformScrubberView : QLVideoScrubberView {
    UIView * _myFilmStripView;
}

@property (retain) UIView *myFilmStripView;

+ (bool)generateWaveformForWidth:(double)arg1 asset:(id)arg2 updateHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_updateFilmStripViewIfNeeded;
- (id)myFilmStripView;
- (void)setMyFilmStripView:(id)arg1;

@end
