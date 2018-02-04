/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKPersonWeightFormatter : NSObject {
    long long  _localWeightUnit;
    NSMassFormatter * _massFormatter;
}

@property (nonatomic, readonly) long long localWeightUnit;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_localeChanged:(id)arg1;
- (void)_updateRoundingIncrement;
- (void)dealloc;
- (id)init;
- (long long)localWeightUnit;
- (id)stringFromWeightInKilograms:(id)arg1;
- (id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2;

@end
