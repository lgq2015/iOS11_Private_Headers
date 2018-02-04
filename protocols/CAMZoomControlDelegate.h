/* made by EzioChiu.
 */

@protocol CAMZoomControlDelegate <NSObject>

@required

- (void)zoomControl:(CAMZoomControl *)arg1 didChangeZoomFactor:(double)arg2;
- (void)zoomControl:(CAMZoomControl *)arg1 didTapEmptySpaceAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)zoomControlDidTapButton:(CAMZoomControl *)arg1;

@end
