/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManagerClient : CallDBManager {
    NSXPCConnection * _helperConnection;
    id  _syncHelperReadyNotificationRef;
}

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (void)createHelperConnection;
- (void)createPermanent;
- (void)createTemporary;
- (void)handlePermanentCreated;
- (id)helperConnection;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char*)arg1;
- (void)pokeSyncHelperToInitDB;
- (void)setHelperConnection:(id)arg1;
- (void)setSyncHelperReadyNotificationRef:(id)arg1;
- (id)syncHelperReadyNotificationRef;
- (id)tempDBLocation:(unsigned char*)arg1;
- (bool)validatePermDatabase;
- (bool)validateTempDatabase;
- (bool)willMoveCallsFromTempDatabase;

@end
