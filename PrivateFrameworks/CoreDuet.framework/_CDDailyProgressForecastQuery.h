/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDDailyProgressForecastQuery : NSObject {
    CDAttribute * _attribute;
    bool  _attributeEncodesProgress;
    bool  _considerAlternateDayPattern;
    bool  _considerDailyPattern;
    bool  _considerWeeklyPattern;
    double  _lookBackDuration;
    double  _temporalResolution;
}

@property (retain) CDAttribute *attribute;
@property bool attributeEncodesProgress;
@property bool considerAlternateDayPattern;
@property bool considerDailyPattern;
@property bool considerWeeklyPattern;
@property double lookBackDuration;
@property double temporalResolution;

- (void).cxx_destruct;
- (id)aggregateForecastsToHaveMinAvgVar:(id)arg1;
- (id)attribute;
- (bool)attributeEncodesProgress;
- (bool)considerAlternateDayPattern;
- (bool)considerDailyPattern;
- (bool)considerWeeklyPattern;
- (id)forecast;
- (id)forecastDay:(id)arg1;
- (id)forecastUsingDailyProgressDict:(id)arg1 andKeys:(id)arg2;
- (id)getDailyProgressForHistory:(id)arg1 usingReferenceDate:(id)arg2;
- (id)initWithNumericAttribute:(id)arg1;
- (double)lookBackDuration;
- (void)setAttribute:(id)arg1;
- (void)setAttributeEncodesProgress:(bool)arg1;
- (void)setConsiderAlternateDayPattern:(bool)arg1;
- (void)setConsiderDailyPattern:(bool)arg1;
- (void)setConsiderWeeklyPattern:(bool)arg1;
- (void)setLookBackDuration:(double)arg1;
- (void)setTemporalResolution:(double)arg1;
- (unsigned long long)slotsPerDay;
- (double)temporalResolution;

@end
