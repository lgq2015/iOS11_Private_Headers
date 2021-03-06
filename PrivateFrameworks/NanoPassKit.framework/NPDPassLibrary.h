/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPDPassLibrary : NSObject <PDXPCServiceExportedInterface> {
    NSXPCConnection * _connection;
    <NPDPassLibraryDelegate> * _delegate;
    NPKPassLibraryFilter * _filter;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _remoteProcessApplicationIdentifier;
    int  _remoteProcessIdentifier;
    bool  _serviceActive;
}

@property (nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPDPassLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPKPassLibraryFilter *filter;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *remoteProcessApplicationIdentifier;
@property (readonly) int remoteProcessIdentifier;
@property bool serviceActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)broadcastPassAdded:(id)arg1;
- (void)broadcastPassRemoved:(id)arg1;
- (void)broadcastPassUpdated:(id)arg1;
- (id)connection;
- (id)delegate;
- (id)filter;
- (id)initWithConnection:(id)arg1;
- (id)queue;
- (id)remoteProcessApplicationIdentifier;
- (int)remoteProcessIdentifier;
- (bool)serviceActive;
- (void)serviceResumed;
- (void)serviceSuspended;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceActive:(bool)arg1;

@end
