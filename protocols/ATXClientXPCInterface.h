/* made by EzioChiu.
 */

@protocol ATXClientXPCInterface

@required

- (void)generateNewAppPredictionsForConsumerSubType:(void *)arg1 intent:(void *)arg2 candidateBundleIdentifiers:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned char, INIntent *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getAppPredictorAssetMappingDescriptionWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)sendFeedbackForConsumerType:(void *)arg1 consumerSubType:(void *)arg2 atxResponse:(void *)arg3 aprResponse:(void *)arg4 engagementType:(void *)arg5 engagedBundleId:(void *)arg6 bundleIdsShown:(void *)arg7 reply:(void *)arg8; // needs 8 arg types, found 13: unsigned long long, unsigned char, ATXResponse *, APRAppPreferenceResponse *, unsigned long long, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end