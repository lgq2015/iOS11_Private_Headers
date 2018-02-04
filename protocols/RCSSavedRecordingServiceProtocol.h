/* made by EzioChiu.
 */

@protocol RCSSavedRecordingServiceProtocol <NSObject>

@required

- (oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)disableOrphanHandlingWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)enableOrphanHandlingWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(NSURL *)arg1;
- (oneway void)endAccessSessionWithToken:(RCSSavedRecordingAccessToken *)arg1;
- (oneway void)fetchCompositionAVURLsBeingExported:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (oneway void)fetchCompositionAVURLsBeingModified:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (oneway void)importRecordingWithSourceAudioURL:(void *)arg1 name:(void *)arg2 date:(void *)arg3 importCompletionBlock:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (oneway void)prepareToCaptureToCompositionAVURL:(void *)arg1 accessRequestHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RCSSavedRecordingAccessToken *, NSError *, void*
- (oneway void)prepareToExportCompositionAVURL:(void *)arg1 cacheWaveform:(void *)arg2 accessRequestHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RCSSavedRecordingAccessToken *, NSError *, void*
- (oneway void)prepareToPreviewCompositionAVURL:(void *)arg1 accessRequestHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RCSSavedRecordingAccessToken *, NSError *, void*
- (oneway void)prepareToTrimCompositionAVURL:(void *)arg1 accessRequestHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RCSSavedRecordingAccessToken *, NSError *, void*
- (oneway void)reloadExistingSearchMetadataWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)removeAllUserDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)updateSearchMetadataWithRecordingURIsToInsert:(void *)arg1 recordingURIsToUpdate:(void *)arg2 recordingURIsToDelete:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
