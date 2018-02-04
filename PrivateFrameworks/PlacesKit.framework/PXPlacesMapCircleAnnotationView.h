/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapCircleAnnotationView : MKAnnotationView {
    double  _circleAnnotationSize;
    CATextLayer * _textLayer;
}

@property (nonatomic) double circleAnnotationSize;
@property (nonatomic, retain) CATextLayer *textLayer;

+ (struct CGColor { }*)colorForCircle;

- (void).cxx_destruct;
- (double)circleAnnotationSize;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)renderCircleWithRadius:(double)arg1;
- (id)renderTextLayerWithSize:(struct CGSize { double x1; double x2; })arg1 usingFontName:(id)arg2 fontSize:(long long)arg3 text:(id)arg4;
- (void)setCircleAnnotationSize:(double)arg1;
- (void)setCircleText:(id)arg1;
- (void)setTextLayer:(id)arg1;
- (id)textLayer;

@end
