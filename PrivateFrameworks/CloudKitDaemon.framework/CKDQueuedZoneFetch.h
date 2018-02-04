/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedZoneFetch : CKDQueuedFetch

- (void)addRequestForZoneID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(id /* block */)arg3;

@end
