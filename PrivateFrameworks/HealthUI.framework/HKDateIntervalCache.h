/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateIntervalCache : NSObject {
    NSArray * _cachedDates;
    NSCalendar * _currentCalendarOverride;
    unsigned long long  _dateAnchorUnit;
    HKValueRange * _dateRange;
    NSDateComponents * _dateSpacingComponents;
    bool  _datesInvalidated;
    NSDate * _maxAnchorDate;
    NSDate * _minAnchorDate;
    NSDateComponents * _minorDateSpacingComponents;
    double  _previousTimeInterval;
    NSDateComponents * _referenceSpacingComponents;
}

@property (nonatomic) unsigned long long dateAnchorUnit;
@property (nonatomic, readonly) NSArray *datePoints;
@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic, retain) NSDateComponents *dateSpacingComponents;
@property (nonatomic, retain) NSDateComponents *minorDateSpacingComponents;
@property (nonatomic, retain) NSDateComponents *referenceSpacingComponents;

- (void).cxx_destruct;
- (id)_currentCalendar;
- (id)_firstDateAfter:(id)arg1 matchingComponents:(id)arg2 calendar:(id)arg3;
- (id)_generateCachedDates;
- (void)_invalidateCachedDates;
- (id)_maxAnchorDateFromDate:(id)arg1;
- (id)_minAnchorDateFromDate:(id)arg1;
- (unsigned long long)_minimumCalendarUnitForComponents:(id)arg1;
- (id)_nextDateForDate:(id)arg1 components:(id)arg2 calendar:(id)arg3;
- (void)_setCurrentCalendar:(id)arg1;
- (void)_updateAnchorDates;
- (unsigned long long)dateAnchorUnit;
- (id)datePoints;
- (id)dateRange;
- (id)dateSpacingComponents;
- (id)init;
- (id)minorDateSpacingComponents;
- (id)referenceSpacingComponents;
- (void)setDateAnchorUnit:(unsigned long long)arg1;
- (bool)setDateRange:(id)arg1;
- (void)setDateSpacingComponents:(id)arg1;
- (void)setMinorDateSpacingComponents:(id)arg1;
- (void)setReferenceSpacingComponents:(id)arg1;

@end
