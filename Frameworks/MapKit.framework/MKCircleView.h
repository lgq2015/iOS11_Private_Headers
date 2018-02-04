/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCircleView : MKOverlayPathView

@property (nonatomic, readonly) MKCircle *circle;

- (id)circle;
- (void)createPath;
- (id)initWithCircle:(id)arg1;

@end
