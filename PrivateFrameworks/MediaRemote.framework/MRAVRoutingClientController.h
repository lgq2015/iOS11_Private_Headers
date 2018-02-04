/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVRoutingClientController : NSObject {
    NSMutableDictionary * _cachedRoutesForCategories;
    struct MRMediaRemoteService { } * _mediaRemoteService;
    NSMutableDictionary * _pendingCompletionHandlersForCategories;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) struct MRMediaRemoteService { }*mediaRemoteService;

- (void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithMediaRemoteService:(struct MRMediaRemoteService { }*)arg1;
- (struct MRMediaRemoteService { }*)mediaRemoteService;

@end
