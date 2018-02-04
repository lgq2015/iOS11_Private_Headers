/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface> {
    NSXPCConnection * _connection;
    <CLLocationSmootherDelegate> * _delegate;
    CLLocationSmoother * _locationManagerSmoother;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLLocationSmootherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CLLocationSmoother *locationManagerSmoother;
@property (readonly) Class superclass;

- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (id)delegate;
- (void)didSmoothLocations:(id)arg1 ofType:(id)arg2;
- (id)initWithCLLocationSmoother:(id)arg1;
- (id)locationManagerSmoother;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManagerSmoother:(id)arg1;

@end
