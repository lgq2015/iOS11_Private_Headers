/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartDateAnchorRule : NSObject {
    unsigned long long  _calendarUnit;
    long long  _roundingValue;
}

@property (nonatomic) unsigned long long calendarUnit;
@property (nonatomic) long long roundingValue;

- (id)_anchorDiffComponents;
- (bool)_componentsSuccessful:(id)arg1;
- (id)_floorDate:(id)arg1;
- (unsigned long long)calendarUnit;
- (id)generateAnchorFromDate:(id)arg1;
- (long long)roundingValue;
- (void)setCalendarUnit:(unsigned long long)arg1;
- (void)setRoundingValue:(long long)arg1;

@end
