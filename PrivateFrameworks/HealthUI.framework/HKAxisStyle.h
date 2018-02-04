/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisStyle : NSObject <NSCopying> {
    unsigned long long  _axisLabelPosition;
    HKStrokeStyle * _axisLineStyle;
    HKStrokeStyle * _borderStyleForFill;
    double  _fillInnerPadding;
    double  _fillOuterPadding;
    HKFillStyle * _fillStyle;
    HKStrokeStyle * _gridLineStyle;
    HKAxisLabelStyle * _labelStyle;
    long long  _location;
    HKStrokeStyle * _minorGridLineStyle;
    HKStrokeStyle * _referenceGridLineStyle;
    bool  _showGridLines;
    unsigned long long  _tickPositions;
    HKTickStyle * _tickStyle;
}

@property (nonatomic) unsigned long long axisLabelPosition;
@property (nonatomic, retain) HKStrokeStyle *axisLineStyle;
@property (nonatomic, retain) HKStrokeStyle *borderStyleForFill;
@property (nonatomic) double fillInnerPadding;
@property (nonatomic) double fillOuterPadding;
@property (nonatomic, retain) HKFillStyle *fillStyle;
@property (nonatomic, retain) HKStrokeStyle *gridLineStyle;
@property (nonatomic, retain) HKAxisLabelStyle *labelStyle;
@property (nonatomic) long long location;
@property (nonatomic, retain) HKStrokeStyle *minorGridLineStyle;
@property (nonatomic, retain) HKStrokeStyle *referenceGridLineStyle;
@property (nonatomic) bool showGridLines;
@property (nonatomic) unsigned long long tickPositions;
@property (nonatomic, retain) HKTickStyle *tickStyle;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (unsigned long long)axisLabelPosition;
- (id)axisLineStyle;
- (id)borderStyleForFill;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fillInnerPadding;
- (double)fillOuterPadding;
- (id)fillStyle;
- (id)gridLineStyle;
- (id)labelStyle;
- (long long)location;
- (id)minorGridLineStyle;
- (id)referenceGridLineStyle;
- (void)setAxisLabelPosition:(unsigned long long)arg1;
- (void)setAxisLineStyle:(id)arg1;
- (void)setBorderStyleForFill:(id)arg1;
- (void)setFillInnerPadding:(double)arg1;
- (void)setFillOuterPadding:(double)arg1;
- (void)setFillStyle:(id)arg1;
- (void)setGridLineStyle:(id)arg1;
- (void)setLabelStyle:(id)arg1;
- (void)setLocation:(long long)arg1;
- (void)setMinorGridLineStyle:(id)arg1;
- (void)setReferenceGridLineStyle:(id)arg1;
- (void)setShowGridLines:(bool)arg1;
- (void)setTickPositions:(unsigned long long)arg1;
- (void)setTickStyle:(id)arg1;
- (bool)showGridLines;
- (unsigned long long)tickPositions;
- (id)tickStyle;

@end
