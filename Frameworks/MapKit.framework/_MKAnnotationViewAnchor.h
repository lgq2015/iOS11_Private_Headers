/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {
    MKAnnotationView * _annotationView;
}

@property (nonatomic) MKAnnotationView *annotationView;

- (id)annotationView;
- (struct { double x1; double x2; })coordinate;
- (void)setAnnotationView:(id)arg1;

@end
