/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface TwoPartTextLabel : UILabel {
    double  _minPart2Width;
    struct CGSize { 
        double width; 
        double height; 
    }  _part2Size;
    NSString * _secondTextPart;
    bool  _strikethroughPart1;
    bool  _strikethroughPart2;
}

@property (nonatomic) bool strikethroughPart1;
@property (nonatomic) bool strikethroughPart2;

- (void).cxx_destruct;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasTwoParts;
- (struct CGSize { double x1; double x2; })idealSize;
- (double)rightmostDisplayedPartWidth;
- (void)setMinimumPart2Width:(double)arg1;
- (void)setStrikethroughPart1:(bool)arg1;
- (void)setStrikethroughPart2:(bool)arg1;
- (void)setTextPart1:(id)arg1;
- (void)setTextPart1:(id)arg1 part2:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)strikethroughPart1;
- (bool)strikethroughPart2;
- (struct CGSize { double x1; double x2; })textPart2Size;

@end
