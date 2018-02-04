/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {
    unsigned long long  _errorCount;
    bool  _networkReachable;
    int  _symptomsAlternateAdviceToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedReachability;

- (void)_reachabilityChanged:(id)arg1;
- (void)_resetErrors;
- (bool)anyFailures;
- (void)dealloc;
- (id)init;
- (bool)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end
