/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaTVEpisodeMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor> {
    LPImage * _artwork;
    LPArtworkMetadata * _artworkMetadata;
    NSString * _episodeName;
    NSString * _genre;
    NSString * _seasonName;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) LPImage *artwork;
@property (nonatomic, copy) LPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) NSString *episodeName;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSString *seasonName;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)episodeName;
- (id)genre;
- (id)initWithCoder:(id)arg1;
- (void)populateLinkMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)seasonName;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setEpisodeName:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setSeasonName:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;
- (id)storeIdentifierForTransformer:(id)arg1;

@end
