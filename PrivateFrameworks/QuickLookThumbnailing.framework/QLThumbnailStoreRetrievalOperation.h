/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    QLThumbnailAddition * _addition;
    bool  _allowsThumbnailGeneration;
    NSURL * _destinationURL;
    NSURL * _documentURL;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    bool  _generateThumbnailsAtBackgroundPriority;
    NSObject<OS_os_activity> * _generationActivity;
    NSObject<OS_os_activity> * _retrievalActivity;
    <QLThumbnailGenerationRequest><NSXPCProxyCreating> * _thumbnailRequest;
    bool  _thumbnailWasJustAutomaticallyGenerated;
}

@property (readonly) QLThumbnailAddition *addition;
@property bool allowsThumbnailGeneration;
@property (retain) NSError *error;
@property (getter=isExecuting, nonatomic) bool executing;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) GSAddition *genStoreAddition;
@property bool generateThumbnailsAtBackgroundPriority;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (readonly) bool thumbnailWasAutomaticallyGenerated;
@property (readonly) bool thumbnailWasJustAutomaticallyGenerated;

+ (bool)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;

- (void).cxx_destruct;
- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (bool)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (void)_generateThumbnail;
- (id)addition;
- (void)afterThumbnailIsPutInGenstore;
- (bool)allowsThumbnailGeneration;
- (void)cancel;
- (id)description;
- (id)error;
- (id)genStoreAddition;
- (bool)generateThumbnailsAtBackgroundPriority;
- (id)init;
- (id)initWithDocumentAtURL:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (id)issueSandboxExtension;
- (void)main;
- (id)serializedQuickLookMetadataDictionary;
- (void)setAllowsThumbnailGeneration:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGenerateThumbnailsAtBackgroundPriority:(bool)arg1;
- (void)start;
- (id)thumbnailImagesDictionary;
- (bool)thumbnailWasAutomaticallyGenerated;
- (bool)thumbnailWasJustAutomaticallyGenerated;

@end
