/* made by EzioChiu.
 */

@protocol HDHealthDataCollector <NSObject>

@required

- (void)collectionStartedForType:(HKObjectType *)arg1 collectionInterval:(double)arg2;
- (void)collectionStoppedForType:(HKObjectType *)arg1;
- (NSString *)dataCollectorDiagnosticDescription;
- (bool)disabled;
- (void)setDisabled:(bool)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(HKObjectType *)arg2;
- (void)updateHistoricalData;
- (void)updateHistoricalDataForcedUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateHistoricalDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (bool)shouldCollectForObserverState:(HDDataCollectionObserverState *)arg1;

@end
