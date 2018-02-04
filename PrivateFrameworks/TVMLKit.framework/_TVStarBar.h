/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStarBar : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _barMargin;
    double  _barWidth;
    NSAttributedString * _countStr;
    double  _height;
    unsigned long long  _numStars;
    double  _value;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } barMargin;
@property (nonatomic) double barWidth;
@property (nonatomic, retain) NSAttributedString *countStr;
@property (nonatomic) double height;
@property (nonatomic) unsigned long long numStars;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })barMargin;
- (double)barWidth;
- (id)countStr;
- (double)height;
- (unsigned long long)numStars;
- (void)setBarMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBarWidth:(double)arg1;
- (void)setCountStr:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setNumStars:(unsigned long long)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
