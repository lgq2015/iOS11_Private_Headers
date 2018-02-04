/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLVideoScrubberView : PHVideoScrubberView {
    bool  _userInteractingWithScrubber;
}

@property (readonly) UIScrollView *scrollView;
@property (getter=isUserInteractingWithScrubber) bool userInteractingWithScrubber;

- (void)_handleInteractionBegan;
- (void)_handleInteractionEndedAndTogglePlayState:(bool)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (bool)isUserInteractingWithScrubber;
- (id)scrollView;
- (void)setUserInteractingWithScrubber:(bool)arg1;

@end
