/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass> {
    NSMutableArray * _hiddenZoneWithError;
    NSMutableDictionary * _perContainerIDError;
    BRCAccountSession * _session;
    NSMutableArray * _zonesStillUploading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)clientZone:(id)arg1 didFinishUploadingAllItemsWithError:(id)arg2;
- (id)description;
- (id)initWithSession:(id)arg1 appLibraries:(id)arg2;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
