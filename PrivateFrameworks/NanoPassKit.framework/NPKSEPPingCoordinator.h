/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKSEPPingCoordinator : NSObject {
    unsigned int  _connect;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned int  _servicesIterator;
}

@property (nonatomic) unsigned int connect;
@property (nonatomic) struct IONotificationPort { }*notificationPort;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) unsigned int servicesIterator;

- (void).cxx_destruct;
- (bool)_connectToSEP;
- (void)_handleSEPMatchWithIterator:(unsigned int)arg1;
- (unsigned int)connect;
- (void)dealloc;
- (id)init;
- (struct IONotificationPort { }*)notificationPort;
- (id)notificationQueue;
- (void)pingSEP;
- (unsigned int)servicesIterator;
- (void)setConnect:(unsigned int)arg1;
- (void)setNotificationPort:(struct IONotificationPort { }*)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setServicesIterator:(unsigned int)arg1;

@end
