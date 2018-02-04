/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUIDateLabel : UILabel {
    HKValueRange * _dateRange;
    bool  _useUppercase;
}

@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic) bool useUppercase;

+ (id)_formattedTextFromDate:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(bool)arg3;
+ (id)dateStringForDateRange:(id)arg1 formatTemplate:(long long)arg2 useUppercase:(bool)arg3;

- (void).cxx_destruct;
- (bool)_setDateRange:(id)arg1;
- (id)dateRange;
- (id)init;
- (void)setDate:(id)arg1 formatTemplate:(long long)arg2;
- (void)setDateRange:(id)arg1 formatTemplate:(long long)arg2;
- (void)setUseUppercase:(bool)arg1;
- (bool)useUppercase;

@end
