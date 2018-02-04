/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKRing : HKAnimatableObject {
    UIColor * _bottomColor;
    double  _bottomColorBlue;
    double  _bottomColorGreen;
    double  _bottomColorRed;
    _HKIcon * _icon;
    double  _opacity;
    float  _percentage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    double  _size;
    double  _thickness;
    UIColor * _topColor;
    double  _topColorBlue;
    double  _topColorGreen;
    double  _topColorRed;
    double  _zRotation;
}

@property (nonatomic, retain) UIColor *bottomColor;
@property (nonatomic, readonly) double bottomColorBlue;
@property (nonatomic, readonly) double bottomColorGreen;
@property (nonatomic, readonly) double bottomColorRed;
@property (nonatomic, retain) _HKIcon *icon;
@property (nonatomic) double opacity;
@property (nonatomic) float percentage;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) double size;
@property (nonatomic) double thickness;
@property (nonatomic, retain) UIColor *topColor;
@property (nonatomic, readonly) double topColorBlue;
@property (nonatomic, readonly) double topColorGreen;
@property (nonatomic, readonly) double topColorRed;
@property (nonatomic) double zRotation;

- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingPropertyType:(unsigned long long)arg2;
- (id)bottomColor;
- (double)bottomColorBlue;
- (double)bottomColorGreen;
- (double)bottomColorRed;
- (id)icon;
- (id)init;
- (double)opacity;
- (float)percentage;
- (struct CGPoint { double x1; double x2; })position;
- (void)removeAllAnimationsForRingPropertyType:(unsigned long long)arg1;
- (void)setBottomColor:(id)arg1;
- (void)setCGPointValue:(struct CGPoint { double x1; double x2; })arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)setFloatValue:(double)arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)setIcon:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setPercentage:(float)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(double)arg1;
- (void)setThickness:(double)arg1;
- (void)setTopColor:(id)arg1;
- (void)setZRotation:(double)arg1;
- (double)size;
- (double)thickness;
- (id)topColor;
- (double)topColorBlue;
- (double)topColorGreen;
- (double)topColorRed;
- (double)zRotation;

@end