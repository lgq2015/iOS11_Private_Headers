/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3DatabaseConnectionSubPool : NSObject {
    NSMutableSet * _availableConnections;
    NSMutableSet * _busyConnections;
    NSObject<OS_dispatch_queue> * _checkinQueue;
    NSObject<OS_dispatch_queue> * _checkoutQueue;
    unsigned long long  _connectionsJournalingMode;
    int  _connectionsProfilingLevel;
    NSString * _databasePath;
    int  _homeSharingCachesClearedNotifyToken;
    unsigned long long  _maxConcurrentConnections;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _useDistantConnections;
    bool  _useReadOnlyConnections;
    NSObject<OS_dispatch_semaphore> * _waitingSemaphore;
    int  _willDeleteDatabaseNotifyToken;
}

@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) int connectionsProfilingLevel;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) unsigned long long maxConcurrentConnections;
@property (nonatomic) bool useDistantConnections;
@property (nonatomic) bool useReadOnlyConnections;

- (void).cxx_destruct;
- (void)_handleDatabaseDeletion;
- (void)checkInConnection:(id)arg1;
- (id)checkoutConnection:(bool*)arg1;
- (void)closeConnectionsAndWaitForBusyConnections:(bool)arg1;
- (unsigned long long)connectionsJournalingMode;
- (int)connectionsProfilingLevel;
- (id)databasePath;
- (void)dealloc;
- (void)handleDiagnostic:(id)arg1;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned long long)arg2;
- (unsigned long long)maxConcurrentConnections;
- (void)setConnectionsJournalingMode:(unsigned long long)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (void)setUseDistantConnections:(bool)arg1;
- (void)setUseReadOnlyConnections:(bool)arg1;
- (bool)useDistantConnections;
- (bool)useReadOnlyConnections;

@end
