/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMLocationHandler : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _effectiveLocationBundleIdentifier;
    int  _locationAuthorization;
    NSHashTable * _locationAuthorizationDelegates;
    CLLocationManager * _locationManager;
    NSThread * _myThread;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *effectiveLocationBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) int locationAuthorization;
@property (nonatomic, retain) NSHashTable *locationAuthorizationDelegates;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSThread *myThread;
@property (readonly) Class superclass;

+ (id)createLocationHandler;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)_initializeLocationProperties;
- (void)addLocationAuthorizationDelegate:(id)arg1;
- (id)clientQueue;
- (void)createLocationManager;
- (id)effectiveLocationBundleIdentifier;
- (id)init;
- (int)locationAuthorization;
- (id)locationAuthorizationDelegates;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)myThread;
- (void)setEffectiveLocationBundleIdentifier:(id)arg1;
- (void)setLocationAuthorization:(int)arg1;
- (void)setLocationAuthorizationDelegates:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMyThread:(id)arg1;

@end
