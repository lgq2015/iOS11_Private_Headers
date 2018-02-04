/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASReachabilityManager : NSObject {
    NSOperationQueue * _queryOperationQueue;
    NSString * _serviceIdentifier;
    ASReachabilityStatusCache * _statusCache;
}

@property (nonatomic, readonly) NSString *serviceIdentifier;

+ (id)sharedInstanceForServiceIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_addDestinationsToQuery:(id)arg1 updateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_initWithServiceIdentifer:(id)arg1;
- (id)init;
- (long long)numberOfScheduledQueries;
- (void)queryDestinations:(id)arg1 updateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)serviceIdentifier;

@end
