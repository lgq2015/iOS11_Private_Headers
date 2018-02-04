/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditViewControllerSpec : PUViewControllerSpec {
    bool  _wantsScrubberInToolbar;
}

@property (nonatomic, readonly) double scrubberEdgeMargins;
@property (nonatomic, readonly) double toolbarLongSideMargin;
@property (nonatomic) bool wantsScrubberInToolbar;

- (id)newSpecChange;
- (double)scrubberEdgeMargins;
- (void)setWantsScrubberInToolbar:(bool)arg1;
- (double)toolbarLongSideMargin;
- (void)updateIfNeeded;
- (bool)wantsScrubberInToolbar;

@end
