/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKWorkoutDurationNumberFormatter : NSObject <HKNumberFormatter> {
    bool  _allowMillisecondPrecision;
}

@property (nonatomic) bool allowMillisecondPrecision;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowMillisecondPrecision;
- (bool)returnsUnitWithValueForDisplay;
- (void)setAllowMillisecondPrecision:(bool)arg1;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end