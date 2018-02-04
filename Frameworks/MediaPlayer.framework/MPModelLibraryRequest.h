/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryRequest : MPModelRequest <MPCModelPlaybackRequesting, MPCModelRequestRTCReporting, MPModelRequestDetailedKeepLocalStatusRequesting> {
    NSArray * _allowedItemIdentifiers;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contentRange;
    unsigned long long  _filteringOptions;
    MPMediaQuery * _legacyMediaQuery;
    MPMediaLibrary * _mediaLibrary;
    NSArray * _scopedContainers;
    bool  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic, copy) NSArray *allowedItemIdentifiers;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } contentRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long filteringOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPMediaQuery *legacyMediaQuery;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, copy) NSArray *scopedContainers;
@property (nonatomic) bool shouldExcludeNonShuffleItems;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDetailedKeepLocalRequestableResponse;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)allowedItemIdentifiers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contentRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filteringOptions;
- (id)initWithCoder:(id)arg1;
- (id)itemTranslationContext;
- (id)legacyMediaQuery;
- (id)mediaLibrary;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)scopedContainers;
- (id)sectionTranslationContext;
- (void)setAllowedItemIdentifiers:(id)arg1;
- (void)setContentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFilteringOptions:(unsigned long long)arg1;
- (void)setLegacyMediaQuery:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setScopedContainers:(id)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(bool)arg1;
- (bool)wantsDetailedKeepLocalRequestableResponse;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)rtcReportingPlayQueueSourceIdentifier;
- (void)setShouldExcludeNonShuffleItems:(bool)arg1;
- (bool)shouldExcludeNonShuffleItems;

@end
