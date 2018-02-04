/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject <NSCopying> {
    MPModelPlaylist * _playlist;
    MPModelObject * _representativeModelObject;
    MPSectionedCollection * _songResults;
    id /* block */  _storeImportAllowedHandler;
}

@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelObject *representativeModelObject;
@property (nonatomic, retain) MPSectionedCollection *songResults;
@property (nonatomic, copy) id /* block */ storeImportAllowedHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playlist;
- (id)representativeModelObject;
- (void)setPlaylist:(id)arg1;
- (void)setRepresentativeModelObject:(id)arg1;
- (void)setSongResults:(id)arg1;
- (void)setStoreImportAllowedHandler:(id /* block */)arg1;
- (id)songResults;
- (id /* block */)storeImportAllowedHandler;

@end
