/* made by EzioChiu.
 */

@protocol PLPhotoAnalysisJobServiceProtocol

@required

- (void)scheduleAssetForOnDemandAnalysisWithUUID:(void *)arg1 workerType:(void *)arg2 workerFlags:(void *)arg3 context:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, short, int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setJobProcessingConstraintsWithValues:(void *)arg1 mask:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
