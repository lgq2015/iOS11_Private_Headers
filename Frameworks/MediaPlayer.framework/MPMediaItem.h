/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItem : MPMediaEntity

@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly) unsigned long long albumArtistPersistentID;
@property (nonatomic, readonly) unsigned long long albumPersistentID;
@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) unsigned long long albumTrackCount;
@property (nonatomic, readonly) unsigned long long albumTrackNumber;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) unsigned long long artistPersistentID;
@property (nonatomic, readonly) MPMediaItemArtwork *artwork;
@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic, readonly) unsigned long long beatsPerMinute;
@property (nonatomic, readonly) double bookmarkTime;
@property (nonatomic, readonly) NSArray *chapters;
@property (getter=isCloudItem, nonatomic, readonly) bool cloudItem;
@property (nonatomic, readonly) NSString *comments;
@property (getter=isCompilation, nonatomic, readonly) bool compilation;
@property (nonatomic, readonly) NSString *composer;
@property (nonatomic, readonly) unsigned long long composerPersistentID;
@property (nonatomic, copy) NSDate *dateAccessed;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) unsigned long long discCount;
@property (nonatomic, readonly) unsigned long long discNumber;
@property (nonatomic, readonly) NSString *effectiveAlbumArtist;
@property (nonatomic, readonly) double effectiveStopTime;
@property (getter=isExplicitItem, nonatomic, readonly) bool explicitItem;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genrePersistentID;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic, readonly) bool isITunesU;
@property (nonatomic, readonly) bool isRental;
@property (nonatomic, readonly) bool isUsableAsRepresentativeItem;
@property (getter=wlk_jsPropertyStrings, nonatomic, readonly) NSSet *jsPropertyStrings;
@property (nonatomic, copy) NSDate *lastPlayedDate;
@property (nonatomic, copy) NSDate *lastSkippedDate;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (getter=wlk_mediaTypeString, nonatomic, readonly, copy) NSString *mediaTypeString;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned long long playCount;
@property (nonatomic) unsigned long long playCountSinceSync;
@property (getter=wlk_playState, nonatomic, readonly, copy) NSString *playState;
@property (nonatomic, readonly) double playbackDuration;
@property (nonatomic, readonly) NSString *playbackStoreID;
@property (nonatomic, readonly) unsigned long long podcastPersistentID;
@property (nonatomic, readonly) NSString *podcastTitle;
@property (getter=hasProtectedAsset, nonatomic, readonly) bool protectedAsset;
@property (nonatomic, readonly) unsigned long long rating;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) bool rememberBookmarkTime;
@property (nonatomic, readonly) unsigned long long skipCount;
@property (nonatomic) unsigned long long skipCountSinceSync;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double stopTime;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *userGrouping;
@property (nonatomic, readonly) unsigned long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)MPSD_mediaItemPropertiesForDownloadability;
+ (void)_createFilterableDictionary;
+ (bool)_isValidItemProperty:(id)arg1;
+ (id)artworkCatalogCacheProperties;
+ (bool)canFilterByProperty:(id)arg1;
+ (id)dynamicProperties;
+ (id)fallbackTitlePropertyForGroupingType:(long long)arg1;
+ (id)persistentIDPropertyForGroupingType:(long long)arg1;
+ (id)screenshotArtworkCatalogCacheProperties;
+ (id)titlePropertyForGroupingType:(long long)arg1;

- (bool)MPSD_isDownloadInProgress;
- (bool)MPSD_isDownloadable;
- (id)_artworkCatalogWithArtworkType:(long long)arg1;
- (id)_bestStoreURL;
- (id)_directStoreURL;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkURL;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (id)albumTitle;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (id)artwork;
- (id)artworkCatalog;
- (id)assetURL;
- (unsigned long long)beatsPerMinute;
- (double)bookmarkTime;
- (id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)chapterOfType:(long long)arg1 atTime:(double)arg2;
- (id)chapters;
- (id)chaptersOfType:(long long)arg1;
- (void)clearLocationProperties;
- (id)comments;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (unsigned long long)countOfChaptersOfType:(long long)arg1;
- (id)dateAccessed;
- (id)dateAdded;
- (void)didReceiveMemoryWarning;
- (bool)didSkipWithPlayedToTime:(double)arg1;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)effectiveAlbumArtist;
- (double)effectiveStopTime;
- (void)encodeWithCoder:(id)arg1;
- (bool)existsInLibrary;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (bool)hasBeenPlayed;
- (bool)hasProtectedAsset;
- (unsigned long long)hash;
- (void)incrementPlayCount;
- (void)incrementPlayCountForPlayingToEnd;
- (bool)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (bool)isCloudItem;
- (bool)isCompilation;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitItem;
- (bool)isITunesU;
- (bool)isRental;
- (bool)isUsableAsRepresentativeItem;
- (Class)itemArrayCoderPIDDataCodingClass;
- (id)lastPlayedDate;
- (id)lastSkippedDate;
- (id)lyrics;
- (void)markNominalAmountHasBeenPlayed;
- (unsigned long long)mediaType;
- (id)multiverseIdentifier;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(bool)arg2;
- (unsigned long long)playCount;
- (unsigned long long)playCountSinceSync;
- (double)playbackDuration;
- (id)playbackStoreID;
- (unsigned long long)podcastPersistentID;
- (id)podcastTitle;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)predicateForProperty:(id)arg1;
- (unsigned long long)rating;
- (id)releaseDate;
- (bool)rememberBookmarkTime;
- (id)representativeItem;
- (id)screenshotArtworkCatalog;
- (void)setDateAccessed:(id)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastSkippedDate:(id)arg1;
- (void)setPlayCount:(unsigned long long)arg1;
- (void)setPlayCountSinceSync:(unsigned long long)arg1;
- (void)setRating:(unsigned long long)arg1;
- (void)setSkipCount:(unsigned long long)arg1;
- (void)setSkipCountSinceSync:(unsigned long long)arg1;
- (unsigned long long)skipCount;
- (unsigned long long)skipCountSinceSync;
- (double)startTime;
- (double)stopTime;
- (id)title;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)arg1;
- (id)userGrouping;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (unsigned long long)year;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (id)playingInfoFromAsset:(id)arg1 withDefaultTitle:(id)arg2;
+ (id)playingInfoFromAsset:(id)arg1 withDefaultTitle:(id)arg2 playbackDuration:(double)arg3 elapsedTime:(double)arg4;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id)customPropertyHandlersCollection;
+ (void)registerSupportedCustomPropertiesWithHandlersCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (id)MPU_contentItemIdentifierCollectionProperties;

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

- (id)MPU_containerLibraryLinkURL;
- (id)MPU_directStoreURL;
- (id)MPU_libraryLinkArtist;
- (id)MPU_libraryLinkKind;
- (id)MPU_libraryLinkPlaylistName;

// Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI

- (id)albumImageWithFallbackForSize:(struct CGSize { double x1; double x2; })arg1 doubleLineRow:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI

+ (id)wlk_JSgenericProperties;
+ (id)wlk_JSmovieProperties;
+ (id)wlk_JStvShowProperties;
+ (id)wlk_mediaItemForPersistentIdentifier:(id)arg1;
+ (id)wlk_mediaItemForStoreIdentifier:(id)arg1;

- (id)wlk_jsPropertyStrings;
- (id)wlk_mediaTypeString;
- (id)wlk_playState;
- (id)wlk_stringIdentifierForProperty:(id)arg1;
- (id)wlk_stringIdentifierForSeason;

@end
