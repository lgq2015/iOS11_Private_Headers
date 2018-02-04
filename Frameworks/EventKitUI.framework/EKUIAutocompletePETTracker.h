/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAutocompletePETTracker : NSObject {
    unsigned long long  _finalNumberOfAutocompleteResults;
    bool  _hasTrackedAutocompleteQuery;
    bool  _hasTrackedAutocompleteResultsShown;
    bool  _hasTrackedNLResultShown;
    bool  _hasTrackedZKWQuery;
    bool  _hasTrackedZKWResultShown;
    EKCalendar * _initialCalendar;
    NSDate * _initialEndDate;
    bool  _initialIsAllDay;
    NSDate * _initialStartDate;
    NSTimeZone * _initialTimeZone;
}

@property unsigned long long finalNumberOfAutocompleteResults;
@property (retain) EKCalendar *initialCalendar;
@property (retain) NSDate *initialEndDate;
@property bool initialIsAllDay;
@property (retain) NSDate *initialStartDate;
@property (retain) NSTimeZone *initialTimeZone;

+ (id)_autocompleteCompleteWinTracker;
+ (id)_autocompleteEngagementEventTracker;
+ (id)_autocompleteQueryEventTracker;
+ (id)_autocompleteSelectionTypeTracker;
+ (id)_autocompleteStatsTracker;
+ (id)_eventTrackerForProperty:(unsigned long long)arg1;
+ (bool)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1;
+ (id)_nlShownTracker;
+ (bool)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2;
+ (bool)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3;
+ (id)_zkwQueryEventTracker;

- (void).cxx_destruct;
- (bool)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2;
- (unsigned long long)finalNumberOfAutocompleteResults;
- (id)initialCalendar;
- (id)initialEndDate;
- (bool)initialIsAllDay;
- (id)initialStartDate;
- (id)initialTimeZone;
- (void)setFinalNumberOfAutocompleteResults:(unsigned long long)arg1;
- (void)setInitialCalendar:(id)arg1;
- (void)setInitialEndDate:(id)arg1;
- (void)setInitialIsAllDay:(bool)arg1;
- (void)setInitialStartDate:(id)arg1;
- (void)setInitialTimeZone:(id)arg1;
- (void)trackAutocompleteEventsOnSaveWithEvent:(id)arg1 selectedResult:(id)arg2 selectedIndex:(unsigned long long)arg3 isZKW:(bool)arg4;
- (void)trackAutocompleteQuery;
- (void)trackAutocompleteResultsShown;
- (void)trackNLResultShown;
- (void)trackZKWQuery;
- (void)trackZKWResultShown;

@end
