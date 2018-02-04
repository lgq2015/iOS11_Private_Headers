/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate> {
    <BLTBulletinDistributorSubscriberDeviceDelegate> * _deviceDelegate;
    NSXPCListener * _listener;
    BLTBulletinDistributorSubscriberList * _subscribers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BLTBulletinDistributorSubscriberDeviceDelegate> *deviceDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) BLTBulletinDistributorSubscriberList *subscribers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadPingSubscriberBundles:(id)arg1;
- (id)deviceDelegate;
- (id)initWithDeviceDelegate:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDeviceDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (id)subscribers;

@end
