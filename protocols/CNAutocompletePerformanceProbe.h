/* made by EzioChiu.
 */

@protocol CNAutocompletePerformanceProbe <CNAutocompleteProbe>

@required

- (void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(bool)arg4;
- (void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end
