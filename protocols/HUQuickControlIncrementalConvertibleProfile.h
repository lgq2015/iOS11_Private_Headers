/* made by EzioChiu.
 */

@protocol HUQuickControlIncrementalConvertibleProfile <NSObject>

@required

- (double)percentageValueForViewValue:(id)arg1;
- (id)viewValueForPercentageValue:(double)arg1 round:(bool)arg2;

@optional

- (bool)hasSecondaryValue;
- (void)setHasSecondaryValue:(bool)arg1;

@end
