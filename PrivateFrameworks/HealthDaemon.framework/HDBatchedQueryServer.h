/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBatchedQueryServer : HDQueryServer {
    id /* block */  _unitTest_queryServerObjectEnumerationHandler;
    id /* block */  _unitTest_queryServerWillSendBatchHandler;
}

@property (nonatomic, copy) id /* block */ unitTest_queryServerObjectEnumerationHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerWillSendBatchHandler;

- (void).cxx_destruct;
- (long long)batchObjectsWithEnumerator:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (long long)batchObjectsWithEnumerator:(id)arg1 includeDeletedObjects:(bool)arg2 error:(id*)arg3 batchHandler:(id /* block */)arg4;
- (void)setUnitTest_queryServerObjectEnumerationHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerWillSendBatchHandler:(id /* block */)arg1;
- (id /* block */)unitTest_queryServerObjectEnumerationHandler;
- (id /* block */)unitTest_queryServerWillSendBatchHandler;

@end
