/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelObject : NSObject <NSCopying> {
    MPIdentifierSet * _identifiers;
    NSMutableSet * _initializedProperties;
    MPModelObject * _originalObject;
    bool  _wasFullyInitialized;
}

@property (nonatomic, readonly, copy) MPIdentifierSet *identifiers;
@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; } libraryAddStatusObserverConfiguration;
@property (nonatomic, readonly) long long libraryRemovalSupportedOptions;
@property (nonatomic, readonly) MPIdentifierSet *originalIdentifierSet;
@property (nonatomic, readonly) NSString *syncInfoContainerIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)initialize;
+ (void)performWithoutEnforcement:(id /* block */)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (void).cxx_destruct;
- (void)appendIdentifiersToDescription:(id)arg1;
- (id)contentItemCollectionInfo;
- (id)copyWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithType:(long long)arg1;
- (bool)hasLoadedValueForKey:(id)arg1;
- (bool)hasLoadedValuesForProperties:(id)arg1;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)originalIdentifierSet;
- (id)storeItemMetadataRequestItemIdentifier;
- (bool)storeItemMetadataRequestNeedsPersonalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredPlaybackProperties;

- (id)_radioStationMatchMetadata;
- (bool)_shouldMatchArtist;
- (id)mpc_protoContainerRepresentation;
- (id)mpc_protoItemRepresentation;
- (id)mpc_radioContentReference;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;
- (id)radioStationMatchContext;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (id)syncInfoContainerIdentifier;

@end
