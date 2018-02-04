/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVReconnaissanceSession : NSObject {
    id /* block */  _callback;
    MRAVRoutingDiscoverySession * _discoverySession;
    id  _discoverySessionCallbackToken;
    unsigned int  _endpointFeatures;
    NSMutableSet * _matchingDevicesFound;
    NSSet * _matchingOutputDeviceUIDsSet;
    bool  _searchInProgress;
    NSTimer * _timeoutTimer;
    MRAVEndpoint * _unanimousEndpoint;
    bool  _useWeakMatching;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic, retain) id discoverySessionCallbackToken;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, retain) NSMutableSet *matchingDevicesFound;
@property (nonatomic, readonly) NSArray *matchingOutputDeviceUIDs;
@property (nonatomic, retain) NSSet *matchingOutputDeviceUIDsSet;
@property (nonatomic) bool searchInProgress;
@property (nonatomic, retain) NSTimer *timeoutTimer;
@property (nonatomic, retain) MRAVEndpoint *unanimousEndpoint;
@property (nonatomic) bool useWeakMatching;

- (void)_concludeSearch;
- (void)_discoverySessionEndpointsChangedCallback:(id)arg1;
- (void)_endSearch;
- (void)_timeoutTimerFired:(id)arg1;
- (void)beginSearchWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id /* block */)callback;
- (void)cancelSearch;
- (void)dealloc;
- (id)discoverySession;
- (id)discoverySessionCallbackToken;
- (unsigned int)endpointFeatures;
- (id)initWithOutputDeviceUIDs:(id)arg1 features:(unsigned int)arg2;
- (id)matchingDevicesFound;
- (id)matchingOutputDeviceUIDs;
- (id)matchingOutputDeviceUIDsSet;
- (bool)searchInProgress;
- (void)setCallback:(id /* block */)arg1;
- (void)setDiscoverySession:(id)arg1;
- (void)setDiscoverySessionCallbackToken:(id)arg1;
- (void)setMatchingDevicesFound:(id)arg1;
- (void)setMatchingOutputDeviceUIDsSet:(id)arg1;
- (void)setSearchInProgress:(bool)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setUnanimousEndpoint:(id)arg1;
- (void)setUseWeakMatching:(bool)arg1;
- (id)timeoutTimer;
- (id)unanimousEndpoint;
- (bool)useWeakMatching;

@end
