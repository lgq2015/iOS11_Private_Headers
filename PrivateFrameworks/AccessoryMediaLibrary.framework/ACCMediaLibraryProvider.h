/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

@interface ACCMediaLibraryProvider : NSObject {
    NSMutableDictionary * _accessories;
    <ACCMediaLibraryProviderDelegateProtocol> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQ;
    int  _lastUpdateType;
    NSMutableDictionary * _libraries;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSString * _providerUID;
    <ACCMediaLibraryXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic) <ACCMediaLibraryProviderDelegateProtocol> *delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQ;
@property (nonatomic) int lastUpdateType;
@property (nonatomic, retain) NSMutableDictionary *libraries;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCMediaLibraryXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (void)_checkPlaylistContentToSend:(id)arg1 accessory:(id)arg2;
- (void)_notifyRemoteOfAvailableLibraries;
- (id)accessories;
- (void)accessoryMediaLibraryAllDetached;
- (void)accessoryMediaLibraryAttached:(id)arg1 windowPerLibrary:(unsigned int)arg2;
- (void)accessoryMediaLibraryDetached:(id)arg1;
- (void)accessoryMediaLibraryUpdate:(id)arg1 windowPerLibrary:(unsigned int)arg2;
- (void)confirmPlaylistContentUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3;
- (void)confirmUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 updateCount:(unsigned int)arg4;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)delegateQ;
- (void)flushUpdates:(id)arg1 accessory:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (int)lastUpdateType;
- (id)libraries;
- (void)notify:(id)arg1 stateChange:(int)arg2 enabled:(bool)arg3;
- (void)notifyAvailableLibraries:(id)arg1;
- (void)playAllSongs:(id)arg1 library:(id)arg2 startItem:(unsigned long long)arg3;
- (void)playCollection:(id)arg1 library:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 startIndex:(unsigned int)arg5;
- (void)playCollection:(id)arg1 library:(id)arg2 collection:(unsigned long long)arg3 type:(int)arg4 startItem:(unsigned long long)arg5;
- (void)playCurrentSelection:(id)arg1 library:(id)arg2;
- (void)playItems:(id)arg1 library:(id)arg2 itemList:(id)arg3 startIndex:(unsigned int)arg4;
- (id)processingQueue;
- (id)providerUID;
- (id)remoteObject;
- (void)resetUpdate:(id)arg1 accessory:(id)arg2;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQ:(id)arg1;
- (void)setLastUpdateType:(int)arg1;
- (void)setLibraries:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)startMediaLibraryUpdate:(id)arg1 library:(id)arg2 lastRevision:(id)arg3 mediaItemProperties:(unsigned long long)arg4 playlistProperties:(unsigned long long)arg5 playlistContentStyle:(int)arg6 playlistContentProperties:(unsigned long long)arg7 reqOptions:(unsigned long long)arg8;
- (void)stopAllMediaLibraryUpdate:(id)arg1;
- (void)stopMediaLibraryUpdate:(id)arg1 library:(id)arg2;
- (long long)update:(id)arg1 revision:(id)arg2 content:(id)arg3 accessory:(id)arg4;
- (long long)update:(id)arg1 revision:(id)arg2 deleteItem:(unsigned long long)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 deletePlaylist:(unsigned long long)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 item:(id)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 persistentID:(unsigned long long)arg3 type:(int)arg4 updateInfo:(id)arg5 progress:(unsigned char)arg6 accessory:(id)arg7;
- (long long)update:(id)arg1 revision:(id)arg2 playlist:(id)arg3 progress:(unsigned char)arg4 accessory:(id)arg5;
- (long long)update:(id)arg1 revision:(id)arg2 progress:(unsigned char)arg3 accessory:(id)arg4;

@end
