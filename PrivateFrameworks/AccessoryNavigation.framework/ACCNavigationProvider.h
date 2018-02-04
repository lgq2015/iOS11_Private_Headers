/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
 */

@interface ACCNavigationProvider : NSObject {
    NSMutableDictionary * _accessories;
    <ACCNavigationProviderProtocol> * _delegate;
    NSString * _providerUID;
    <ACCNavigationXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic) <ACCNavigationProviderProtocol> *delegate;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCNavigationXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (id)accessories;
- (id)accessoryForUID:(id)arg1;
- (void)accessoryNavigationAttached:(id)arg1 componentList:(id)arg2;
- (void)accessoryNavigationDetached:(id)arg1;
- (void)accessoryNavigationStartRouteGuidance:(id)arg1 componentIdList:(id)arg2;
- (void)accessoryNavigationStopRouteGuidance:(id)arg1 componentIdList:(id)arg2;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (void)detachAllAccessories;
- (id)initWithDelegate:(id)arg1;
- (id)providerUID;
- (id)remoteObject;
- (void)routeGuidance:(id)arg1 laneGuidanceInfo:(id)arg2 componentIdList:(id)arg3;
- (void)routeGuidance:(id)arg1 maneuverUpdateInfo:(id)arg2 componentIdList:(id)arg3;
- (void)routeGuidance:(id)arg1 updateInfo:(id)arg2 componentIdList:(id)arg3;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
