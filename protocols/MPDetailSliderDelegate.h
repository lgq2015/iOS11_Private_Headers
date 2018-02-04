/* made by EzioChiu.
 */

@protocol MPDetailSliderDelegate <NSObject>

@optional

- (void)detailSlider:(MPDetailSlider *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(MPDetailSlider *)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(MPDetailSlider *)arg1;
- (void)detailSliderTrackingDidCancel:(MPDetailSlider *)arg1;
- (void)detailSliderTrackingDidEnd:(MPDetailSlider *)arg1;

@end
