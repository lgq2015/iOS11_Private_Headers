/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAcknowledgeDeletionsWorkerJob : PHAAssetProcessingJob

- (void)_deleteStateRecordsForLocalUUIDs:(id)arg1;
- (void)_deleteStateRecordsForSuccessfulResults;
- (void)finish;
- (void)prepare;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;

@end
