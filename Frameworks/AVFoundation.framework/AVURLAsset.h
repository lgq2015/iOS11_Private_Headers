/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAsset : AVAsset <AVContentKeyRecipient> {
    AVURLAssetInternal * _URLAsset;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) bool mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic, readonly) double rc_durationInSeconds;
@property (nonatomic, readonly) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly) bool shouldMatchDataInCacheByURLPathComponentOnly;
@property (nonatomic, readonly) bool shouldMatchDataInCacheByURLWithoutQueryComponent;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)_UTTypes;
+ (id)_avfValidationPlist;
+ (id)_figFileMIMETypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_fileUTTypes;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1;
+ (id)_streamingUTTypes;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (id)instanceIdentifierMapTable;
+ (bool)isPlayableExtendedMIMEType:(id)arg1;
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;
+ (id)userInfoObjectForURLAsset:(id)arg1;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;

- (id)SHA1Digest;
- (id)URL;
- (id)_absoluteURL;
- (void)_addFigAssetNotifications;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (int)_attachToContentKeySession:(id)arg1;
- (bool)_attachedToExternalContentKeySession;
- (Class)_classForAssetTracks;
- (Class)_classForFigAssetInspectorLoader;
- (Class)_classForTrackInspectors;
- (void)_ensureAssetDownloadCache;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (void)_handleURLRequest:(id)arg1;
- (bool)_hasResourceLoaderDelegate;
- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;
- (id)_instanceIdentifier;
- (id)_managedAssetCache;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_removeFigAssetNotifications;
- (void)_removeUserInfoObject;
- (void)_setAssetInspectorLoader:(id)arg1;
- (void)_setUserInfoObject:(id)arg1;
- (bool)_shouldOptimizeAccessForLinearMoviePlayback;
- (void)_tracksDidChange;
- (id)assetCache;
- (id)cacheKey;
- (void)cancelLoading;
- (id)contentKeySession;
- (id)creationOptions;
- (void)dealloc;
- (id)description;
- (id)downloadDestinationURL;
- (unsigned long long)downloadToken;
- (void)expire;
- (void)finalize;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)lyrics;
- (bool)mayRequireContentKeysForMediaDataProcessing;
- (id)originalNetworkContentURL;
- (unsigned long long)referenceRestrictions;
- (id)resolvedURL;
- (id)resourceLoader;
- (bool)shouldMatchDataInCacheByURLPathComponentOnly;
- (bool)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)tracks;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)mpc_addDownloadCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)assetWithIdentifierURL:(id)arg1;
+ (id)emptyAsset;
+ (void)mediaserverdCrashed;
+ (id)newAssetWithIdentifierURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_preciseTimingAssetWithURL:(id)arg1;

- (double)rc_durationInSeconds;

@end
