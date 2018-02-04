/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelGenre : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    NSDate * _libraryAddedDate;
    NSString * _name;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, copy) NSString *name;

+ (id)__MPModelPropertyGenreArtwork__PROPERTY;
+ (id)__MPModelPropertyGenreLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyGenreName__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__name__KEY;
+ (id)kindWithAlbumKind:(id)arg1;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)descriptionWithType:(long long)arg1;
- (id)libraryAddedDate;
- (id)name;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setName:(id)arg1;

@end
