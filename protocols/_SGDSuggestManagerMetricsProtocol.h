/* made by EzioChiu.
 */

@protocol _SGDSuggestManagerMetricsProtocol

@required

- (void)logEventInteractionForEventWithExternalIdentifier:(NSString *)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithUniqueKey:(NSString *)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(SGRecordId *)arg2 contactIdentifier:(NSString *)arg3 bundleId:(NSString *)arg4;
- (void)logMetricAutocompleteUserSelectedRecordId:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricContactCreated:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(SGRecordId *)arg2 contactIdentifier:(NSString *)arg3 bundleId:(NSString *)arg4;
- (void)logMetricContactSearchResultSelected:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(NSString *)arg1;
- (void)logMetricSuggestedContactDetailShown:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricSuggestedContactDetailUsed:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;

@end
