/* made by EzioChiu.
 */

@protocol MKCalloutSource <NSObject>

@required

- (struct CGPoint { double x1; double x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3;
- (NSString *)debugAnchorPointString;
- (struct CGPoint { double x1; double x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2;
- (NSString *)title;

@optional

- (UIView *)detailCalloutAccessoryView;
- (UIView *)leftCalloutAccessoryView;
- (UIView *)rightCalloutAccessoryView;
- (NSString *)subtitle;

@end
