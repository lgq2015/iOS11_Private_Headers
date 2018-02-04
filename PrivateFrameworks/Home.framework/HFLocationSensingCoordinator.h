/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver> {
    NSUserDefaults * _defaults;
    <HFLocationSensingCoordinatorDelegate> * _delegate;
    HFLocationManagerDispatcher * _locationDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic) <HFLocationSensingCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeSensingEnabled;
@property (nonatomic, retain) HFLocationManagerDispatcher *locationDispatcher;
@property (nonatomic, readonly) NAFuture *locationSensingAvailableFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaults;
- (id)delegate;
- (bool)homeSensingEnabled;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)locationDispatcher;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)locationSensingAvailableFuture;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDefaults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeSensingEnabled:(bool)arg1;
- (void)setLocationDispatcher:(id)arg1;

@end
