/* made by EzioChiu.
 */

@protocol VKAnnotationTrackingCameraController <NSObject>

@required

- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (long long)annotationTrackingZoomStyle;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isTrackingHeading;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)startTrackingAnnotation:(id <VKTrackableAnnotation>)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (void)stopTrackingAnnotation;
- (<VKTrackableAnnotation> *)trackingAnnotation;

@end
