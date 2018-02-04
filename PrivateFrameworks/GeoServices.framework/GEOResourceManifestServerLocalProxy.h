/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerLocalProxy : NSObject <GEODataStateCapturing, GEOResourceFiltersManagerDelegate, GEOResourceManifestServerProxy, NSURLSessionDataDelegate> {
    GEOActiveTileGroup * _activeTileGroup;
    NSString * _authToken;
    NSLock * _authTokenLock;
    GEOResourceManifestConfiguration * _configuration;
    long long  _currentManifestUpdateType;
    NSProgress * _currentUpdateProgress;
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    GEOResourceFiltersManager * _filtersManager;
    int  _httpResponseStatusCode;
    double  _lastManifestRequestStartTime;
    double  _lastManifestRetryTimestamp;
    NSError * _lastResourceManifestLoadError;
    double  _lastTileGroupRetryTimestamp;
    unsigned long long  _manifestRetryCount;
    NSMutableArray * _manifestUpdateCompletionHandlers;
    NSTimer * _manifestUpdateTimer;
    <NSObject> * _newActiveTileGroupTransaction;
    GEOResourceManifestDownload * _resourceManifest;
    NSMutableData * _responseData;
    NSString * _responseETag;
    NSURLSession * _session;
    bool  _started;
    unsigned long long  _stateCaptureHandle;
    NSURLSessionTask * _task;
    NSURLSessionTaskMetrics * _taskMetrics;
    _GEOResourceManifestServerLocalProxyMigrationState * _tileGroupMigrationState;
    NSArray * _tileGroupMigrators;
    unsigned long long  _tileGroupRetryCount;
    NSTimer * _tileGroupUpdateTimer;
    NSProgress * _updateProgress;
    bool  _wantsManifestUpdateOnReachabilityChange;
    bool  _wantsTileGroupUpdateOnReachabilityChange;
}

@property (nonatomic, retain) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_cancelMigrationTasks;
- (void)_cancelSession;
- (void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 migrationTasks:(id)arg4 flushTileCache:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)_cleanupSession;
- (void)_considerChangingActiveTileGroup;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(bool)arg2 ignoreIdentifier:(bool)arg3;
- (id)_idealTileGroupToUse;
- (void)_loadFromDisk;
- (id)_manifestURL;
- (void)_networkDefaultsDidChange:(id)arg1;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_startOpportunisticMigrationToTileGroup:(id)arg1 inResourceManifest:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4;
- (void)_startServer;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_updateManifest;
- (void)_updateManifest:(id /* block */)arg1;
- (bool)_updateManifestIfNecessary:(id /* block */)arg1;
- (void)_updateTimerFired:(id)arg1;
- (bool)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2;
- (bool)_writeManifestToDisk:(id)arg1 error:(id*)arg2;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (id)activeTileGroup;
- (id)authToken;
- (void)cancelCurrentManifestUpdate;
- (id)captureStateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)closeConnection;
- (id)configuration;
- (void)createMigratorsWithAdditionalMigrationTaskClasses:(id)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)filtersManagerDidChangeActiveFilters:(id)arg1;
- (void)forceUpdate:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getResourceManifestWithHandler:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2 additionalMigrationTaskClasses:(id)arg3;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverOperationQueue;
- (id)serverQueue;
- (void)setActiveTileGroup:(id)arg1;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIfNecessary:(id /* block */)arg1;
- (id)updateProgress;

@end
