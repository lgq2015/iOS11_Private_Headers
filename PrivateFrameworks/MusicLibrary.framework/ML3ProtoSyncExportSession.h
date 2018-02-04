/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ProtoSyncExportSession : ML3ExportSession {
    NSString * _libraryUUID;
    double  _sessionStartTime;
    struct { 
        int trackAdds; 
        int trackUpdates; 
        int trackDeletes; 
        int playlistAdds; 
        int playlistDeletes; 
        unsigned int totalSize; 
    }  _stats;
    MSVStreamWriter * _streamWriter;
    int  _syncType;
}

- (void).cxx_destruct;
- (id)_writSyncPackageToStream:(id)arg1;
- (id)begin:(unsigned int)arg1;
- (id)end;
- (id)exportPlaylistAdded:(unsigned long long)arg1;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportTrackAdded:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrackUpdated:(unsigned long long)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2 syncType:(int)arg3;

@end
