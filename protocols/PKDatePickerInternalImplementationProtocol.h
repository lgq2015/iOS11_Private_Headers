/* made by EzioChiu.
 */

@protocol PKDatePickerInternalImplementationProtocol <NSObject>

@required

- (NSDate *)date;
- (id)initShowingDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 useDarkAppearance:(bool)arg4;
- (void)prepareToDie;
- (void)setDate:(NSDate *)arg1;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end
