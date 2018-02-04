/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManager : NSObject {
    unsigned char  _dataStoreType;
    DBManager * _dbManager;
    id  _deviceUnlockNotificationRef;
    bool  _deviceUnlocked;
    unsigned char  _notifyDataStoreChangeReason;
}

@property unsigned char dataStoreType;
@property (retain) DBManager *dbManager;
@property (retain) id deviceUnlockNotificationRef;
@property bool deviceUnlocked;
@property unsigned char notifyDataStoreChangeReason;

+ (id)dataStoreName;
+ (id)getDBLocationIsSandboxed:(bool)arg1 isTemporary:(bool)arg2 error:(unsigned char*)arg3;
+ (id)modelURL;

- (void).cxx_destruct;
- (void)createDataStore;
- (id)createManagedObjectContext;
- (void)createPermanent;
- (void)createTemporary;
- (unsigned char)dataStoreType;
- (id)dbManager;
- (void)dealloc;
- (id)deviceUnlockNotificationRef;
- (bool)deviceUnlocked;
- (void)handlePermanentCreated;
- (void)handleTemporaryCreated;
- (id)init;
- (void)moveCallsFromTempDatabase;
- (unsigned char)notifyDataStoreChangeReason;
- (bool)notifyDataStoreChanged;
- (id)permDBLocation:(unsigned char*)arg1;
- (void)reFetchState;
- (void)registerForNotifications;
- (void)setDataStoreType:(unsigned char)arg1;
- (void)setDbManager:(id)arg1;
- (void)setDeviceUnlockNotificationRef:(id)arg1;
- (void)setDeviceUnlocked:(bool)arg1;
- (void)setNotifyDataStoreChangeReason:(unsigned char)arg1;
- (bool)shouldCreatePermanent;
- (bool)shouldCreateTemporary;
- (id)tempDBLocation:(unsigned char*)arg1;

@end
