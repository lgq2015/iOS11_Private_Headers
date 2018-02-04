/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSServiceListener : NSObject <NSXPCListenerDelegate, VSServiceConnectionHandlerDelegate> {
    NSMutableSet * _connectionHandlers;
    NSArray * _entitlementNames;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
}

@property (nonatomic, retain) NSMutableSet *connectionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entitlementNames;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, retain) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnectionHandler:(id)arg1;
- (void)_removeConnectionHandler:(id)arg1;
- (void)connectionHandlerDidFinish:(id)arg1;
- (id)connectionHandlers;
- (id)entitlementNames;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setConnectionHandlers:(id)arg1;
- (void)setEntitlementNames:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end
