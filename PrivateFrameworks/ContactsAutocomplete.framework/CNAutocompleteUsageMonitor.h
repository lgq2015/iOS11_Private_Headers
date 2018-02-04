/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteUsageMonitor : NSObject {
    <CNAutocompleteProbeProvider> * _probeProvider;
}

@property (nonatomic, readonly) <CNAutocompleteProbeProvider> *probeProvider;

+ (void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2;
+ (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(bool)arg4;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProbeProvider:(id)arg1;
- (id)probeProvider;
- (void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3;
- (void)userSawNumberOfResults:(unsigned long long)arg1 forBatch:(unsigned long long)arg2 includingNumberOfSuggestions:(unsigned long long)arg3 forRequest:(id)arg4;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(bool)arg4;

@end
