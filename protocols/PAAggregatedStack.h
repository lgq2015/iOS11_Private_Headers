/* made by EzioChiu.
 */

@protocol PAAggregatedStack <NSObject>

@required

- (void)addSampleThread:(PASampleThreadData *)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(bool)arg3;
- (long long)compare:(id)arg1;
- (int)count;
- (void)printToOutputStream:(PAOutputStream *)arg1;

@end