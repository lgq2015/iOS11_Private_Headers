/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeOfDayLabel : NTKTimeIntervalLabel {
    NSString * _amSymbol;
    NSString * _ampmLiteral;
    NSCalendar * _cal;
    NSDate * _date;
    bool  _hideSuffix;
    bool  _is24HourMode;
    NSDate * _midday;
    NSDate * _midnight;
    NSString * _pmSymbol;
    double  _startOfDayTime;
    double  _startOfTomorrowTime;
    bool  _usePrefix;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool hideSuffix;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (bool)_isMorning:(id)arg1;
- (void)_localeChanged;
- (id)_middayOf:(id)arg1;
- (id)_midnightOf:(id)arg1;
- (void)cacheDateInformation:(id)arg1;
- (id)date;
- (void)dealloc;
- (bool)hideSuffix;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2;
- (id)prefix;
- (void)setDate:(id)arg1;
- (void)setHideSuffix:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (id)suffix;
- (double)timeIntervalForDate:(id)arg1 sinceDate:(id)arg2 consideringDSTDifferenceForTimeZone:(id)arg3;
- (id)timeZone;

@end
