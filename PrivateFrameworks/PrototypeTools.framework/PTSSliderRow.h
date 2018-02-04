/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSliderRow : PTSRow {
    double  _maxValue;
    double  _minValue;
}

@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;

- (id)init;
- (double)maxValue;
- (double)minValue;
- (id)minValue:(double)arg1 maxValue:(double)arg2;
- (Class)rowTableViewCellClass;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)updateWithRow:(id)arg1;

@end
