/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {
    NSObject<OS_nw_dictionary> * activeConnectionRequests;
    NSObject<OS_nw_dictionary> * activeConnections;
    NSObject<OS_nw_parameters> * clientParameters;
    NSObject<OS_nw_listener> * listener;
    unsigned short  localPortHBO;
    NSObject<OS_nw_dictionary> * pendingConnectionRequests;
    id /* block */  serviceAvailableBlock;
    NSObject<OS_dispatch_queue> * serviceConnectorQueue;
    unsigned long long  serviceConnectorSequenceNumber;
    unsigned int  state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
