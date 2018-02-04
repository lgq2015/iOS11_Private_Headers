/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelRadioStation : MPModelObject {
    bool  _allowsItemLiking;
    id /* block */  _artworkCatalogBlock;
    bool  _beats1;
    NSString * _editorNotes;
    bool  _hasExplicitContent;
    NSString * _name;
    NSString * _shortEditorNotes;
}

@property (nonatomic) bool allowsItemLiking;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (getter=isBeats1, nonatomic) bool beats1;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *shortEditorNotes;

+ (id)__MPModelPropertyRadioStationAllowsItemLiking__PROPERTY;
+ (id)__MPModelPropertyRadioStationArtwork__PROPERTY;
+ (id)__MPModelPropertyRadioStationBeats1__PROPERTY;
+ (id)__MPModelPropertyRadioStationEditorNotes__PROPERTY;
+ (id)__MPModelPropertyRadioStationHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyRadioStationName__PROPERTY;
+ (id)__MPModelPropertyRadioStationShortEditorNotes__PROPERTY;
+ (id)__allowsItemLiking__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__beats1__KEY;
+ (id)__editorNotes__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__name__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsItemLiking;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)contentItemCollectionInfo;
- (id)descriptionWithType:(long long)arg1;
- (id)editorNotes;
- (bool)hasExplicitContent;
- (bool)isBeats1;
- (id)name;
- (void)setAllowsItemLiking:(bool)arg1;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setBeats1:(bool)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setHasExplicitContent:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setShortEditorNotes:(id)arg1;
- (id)shortEditorNotes;

@end
