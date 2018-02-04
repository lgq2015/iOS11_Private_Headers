/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADServer : NSObject <CalActivatable, ClientConnectionDelegate, NSXPCListenerDelegate> {
    NSXPCListener * _NSXPCListener;
    bool  _active;
    int  _backgroundTaskCount;
    BirthdayCalendarManager * _birthdayManager;
    unsigned long long  _birthdayManagerGeneration;
    NSMutableSet * _clientConnections;
    NSLock * _connectionLock;
    CDBDataProtectionObserver * _dataProtectionObserver;
    LocalAttachmentCleanUpSupport * _localAttachmentCleanupManager;
    NSArray * _modules;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSArray * _signalSensors;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) CDBDataProtectionObserver *dataProtectionObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *modules;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_deactivateAndExitWithStatus:(int)arg1;
- (void)_dumpState;
- (void)_exitWithStatus:(int)arg1;
- (void)_finishInitializationWithDataAvailable;
- (void)_handleXPCConnection:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)_registerForIdentityOrphanCleanup;
- (void)_registerForIdleChangeTrackingClientCleanup;
- (void)_registerForNotifications;
- (void)_registerMaintenanceActivities;
- (void)_setUpSignalHandlers;
- (void)_startBirthdayManager;
- (void)_stopBirthdayManager;
- (void)_tearDownSignalHandlers;
- (bool)_trimAndExtendOccurrenceCache;
- (void)_updateOccurrenceCacheTimeZone;
- (void)activate;
- (void)clientConnectionDied:(id)arg1;
- (id)dataProtectionObserver;
- (void)deactivate;
- (void)dealloc;
- (void)identityOrphanCleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*)arg1;
- (void)idleChangeTrackingClientCleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*)arg1;
- (id)init;
- (id)initWithModules:(id)arg1;
- (bool)isActive;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)modules;
- (void)setActive:(bool)arg1;
- (void)setDataProtectionObserver:(id)arg1;
- (void)setModules:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
