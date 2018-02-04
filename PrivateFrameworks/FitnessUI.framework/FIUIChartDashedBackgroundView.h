/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartDashedBackgroundView : FIUIChartBackgroundView {
    UIColor * _color;
    long long  _direction;
    NSArray * _linePositions;
    long long  _lineType;
    unsigned long long  _numLines;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long direction;
@property (nonatomic) long long lineType;
@property (nonatomic) unsigned long long numLines;

- (void).cxx_destruct;
- (id)color;
- (long long)direction;
- (void)drawLine:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)lineType;
- (unsigned long long)numLines;
- (void)setColor:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setLineType:(long long)arg1;
- (void)setNumLines:(unsigned long long)arg1;

@end
