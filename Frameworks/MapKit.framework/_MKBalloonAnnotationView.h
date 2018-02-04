/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKBalloonAnnotationView : MKAnnotationView {
    UIColor * _balloonStrokeColor;
    UIColor * _balloonTintColor;
    CALayer * _baseLayer;
    _MKBalloonCalloutView * _calloutView;
    UIImage * _largeImage;
    UIImageView * _smallImageView;
    long long  _style;
}

@property (nonatomic, copy) UIColor *balloonStrokeColor;
@property (nonatomic, copy) UIColor *balloonTintColor;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) UIImage *largeImage;
@property (nonatomic, copy) UIImage *smallImage;

- (void).cxx_destruct;
- (id)_baseTransitionAnimation:(bool)arg1;
- (void)_updateBaseImage;
- (id)balloonStrokeColor;
- (id)balloonTintColor;
- (id)contentView;
- (void)didMoveToWindow;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithAnnotation:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)largeImage;
- (void)setBalloonStrokeColor:(id)arg1;
- (void)setBalloonTintColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSmallImage:(id)arg1;
- (id)smallImage;

@end
