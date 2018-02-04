/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMDistanceCalculator : NSObject {
    NSObject<OS_dispatch_queue> * _calculationQueue;
    NSLocale * _locale;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calculationQueue;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) long long measurementSystem;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3;
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)calculationQueue;
- (id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)init;
- (id)initWithDefaultsSuiteName:(id)arg1;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2;
- (id)locale;
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (long long)measurementSystem;
- (void)setCalculationQueue:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMeasurementSystem:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
