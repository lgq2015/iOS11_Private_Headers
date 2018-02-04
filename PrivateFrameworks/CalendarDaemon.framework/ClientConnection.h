/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface ClientConnection : NSObject {
    bool  _allowedEntityTypesValid;
    CADOperationProxy * _cadOperationProxy;
    NSMutableSet * _canceledRequests;
    NSObject<OS_dispatch_queue> * _canceledRequestsLock;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; } * _database;
    CADDatabaseInitializationOptions * _databaseInitializationOptions;
    NSObject<OS_dispatch_queue> * _dbQueue;
    <ClientConnectionDelegate> * _delegate;
    long long  _eventAccess;
    ClientIdentity * _identity;
    bool  _initializationOptionsSet;
    NSMutableDictionary * _insertedObjects;
    NSSet * _managedStoreRowIDs;
    NSOperationQueue * _operations;
    long long  _reminderAccess;
    NSSet * _restrictedCalendarRowIDs;
    NSSet * _restrictedStoreRowIDs;
    NSLock * _restrictionsLock;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) CADOperationProxy *cadOperationProxy;
@property (nonatomic, readonly) NSString *changeTrackingID;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*database;
@property (nonatomic, retain) CADDatabaseInitializationOptions *databaseInitializationOptions;
@property (nonatomic) <ClientConnectionDelegate> *delegate;
@property (nonatomic, readonly) ClientIdentity *identity;
@property (readonly) bool initializationOptionsSet;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_databaseChanged;
- (bool)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg1;
- (void)_loadAccessPermissionsIfNeeded;
- (id)_restrictedStoreRowIDs;
- (bool)_shouldUseMCToBlacklist;
- (void)addOperation:(id)arg1;
- (id)cadOperationProxy;
- (id)changeTrackingID;
- (void)clearCachedAuthorizationStatus;
- (void)clearInsertedObjects;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*)database;
- (id)databaseInitializationOptions;
- (void)dealloc;
- (id)delegate;
- (void)dumpState;
- (bool)eventAccessGranted;
- (bool)hasTCCAccessToEntityWithObjectID:(id)arg1;
- (id)identity;
- (id)initWithXPCConnection:(id)arg1;
- (bool)initializationOptionsSet;
- (void)insertObject:(void*)arg1 key:(id)arg2;
- (id)insertedObjects;
- (bool)isCalendarItemManaged:(void*)arg1;
- (bool)isCalendarItemRestricted:(void*)arg1;
- (bool)isCalendarManaged:(void*)arg1;
- (bool)isCalendarRestricted:(void*)arg1;
- (bool)isObjectWithObjectIDAJunkEvent:(id)arg1;
- (bool)isStoreManaged:(void*)arg1;
- (bool)isStoreRestricted:(void*)arg1;
- (id)managedStoreRowIDs;
- (void*)objectForKey:(id)arg1;
- (id)operations;
- (bool)reminderAccessGranted;
- (id)restrictedCalendarRowIDs;
- (id)restrictedCalendarRowIDsWithValidator:(id)arg1;
- (id)restrictedStoreRowIDs;
- (void)setDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*)arg1;
- (void)setDatabaseInitializationOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
