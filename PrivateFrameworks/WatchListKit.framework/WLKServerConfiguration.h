/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKServerConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _channelsByID;
    NSMutableDictionary * _completions;
    NSXPCConnection * _connection;
    int  _didChangeNotificationToken;
    id /* block */  _fetchCompletionHandler;
    NSOperationQueue * _fetchQueue;
    bool  _isFetching;
    bool  _loaded;
    NSString * _nextEK;
    NSOperationQueue * _operationQueue;
    NSArray * _orderedChannels;
    NSDictionary * _requiredRequestKeyValuePairsDictionary;
    WLKServerConfigurationResponse * _response;
}

@property (nonatomic, readonly, copy) NSDictionary *channels;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property bool isFetching;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) NSArray *orderedChannels;
@property (nonatomic, retain) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (nonatomic, readonly, copy) NSDictionary *serverRoutesDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)APIBaseURL;
- (void)_addCompletion:(id /* block */)arg1 forEnvironment:(id)arg2;
- (id)_cacheDir;
- (id)_cachePath;
- (void)_clearCompletionsForEnvironment:(id)arg1;
- (void)_commonInit;
- (id)_completionsForEnvironment:(id)arg1;
- (id)_connection;
- (void)_fetchConfigurationCache:(id /* block */)arg1;
- (void)_fetchConfigurationInProcess:(id /* block */)arg1;
- (void)_fetchConfigurationSynchronously;
- (void)_handleLibraryDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_invalidateCache;
- (bool)_needCacheRefresh;
- (id)_operationQueue;
- (id)_prevCachePath;
- (id)_readFromDisk;
- (id)_readFromDiskPath:(id)arg1;
- (void)_reloadFromCache:(id)arg1;
- (void)_setNextEK:(id)arg1;
- (void)_synchronizeWithCache:(id)arg1 notifySelf:(bool)arg2 others:(bool)arg3;
- (void)_synchronizeWithCacheAndNotifySelf:(bool)arg1 others:(bool)arg2;
- (bool)_writeToDisk:(id)arg1;
- (id)channels;
- (void)dealloc;
- (id)dictionary;
- (id)endpointForKey:(id)arg1;
- (id)expirationDate;
- (id /* block */)fetchCompletionHandler;
- (void)fetchConfiguration:(id /* block */)arg1;
- (id)init;
- (id)initOffline;
- (bool)isFetching;
- (bool)isLoaded;
- (id)orderedChannels;
- (id)requiredRequestKeyValuePairsDictionary;
- (id)serverRouteForKey:(id)arg1;
- (id)serverRoutesDictionary;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setIsFetching:(bool)arg1;
- (void)setRequiredRequestKeyValuePairsDictionary:(id)arg1;

@end
