/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartAxisLabel : NSObject {
    UIColor * _labelColor;
    id  _location;
    double  _shadowBlur;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    NSString * _text;
    bool  _useReversePlacement;
}

@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) id location;
@property (nonatomic) double shadowBlur;
@property (nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) bool useReversePlacement;

- (void).cxx_destruct;
- (id)description;
- (id)labelColor;
- (id)location;
- (void)setLabelColor:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setUseReversePlacement:(bool)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (id)text;
- (bool)useReversePlacement;

@end
