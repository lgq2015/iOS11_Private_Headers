/* made by EzioChiu.
 */

@protocol MusicMediaDetailHeaderViewController <NSObject>

@required

- (double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(bool*)arg2;
- (<MusicMediaDetailHeaderViewControllerDelegate> *)mediaHeaderViewControllerDelegate;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)setMediaHeaderViewControllerDelegate:(id <MusicMediaDetailHeaderViewControllerDelegate>)arg1;

@optional

- (void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1;

@end
