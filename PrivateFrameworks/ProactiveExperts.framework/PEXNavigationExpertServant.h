/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXNavigationExpertServant : PEXServant <GEONavigationListenerDelegate> {
    NSString * _destinationName;
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    GEONavigationListener * _navigationListener;
    int  _navigationState;
    double  _remainingDistanceToDestination;
    double  _remainingTimeToDestination;
    NSObject<OS_dispatch_semaphore> * _stateSemaphore;
    NSString * _streetName;
    NSObject<OS_dispatch_semaphore> * _streetSemaphore;
    NSObject<OS_dispatch_semaphore> * _summarySemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeNavigationListener;
- (void)_makeNavRequests;
- (void)_stopListeningToNavigationUpdate;
- (bool)_waitForState;
- (bool)_waitForStreet;
- (bool)_waitForSummary;
- (void)_warmUpFormatters;
- (void)dealloc;
- (id)init;
- (unsigned char)loadNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(struct { double x1; double x2; })arg2;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;

@end
