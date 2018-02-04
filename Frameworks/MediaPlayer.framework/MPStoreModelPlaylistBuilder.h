/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelPlaylistBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int trackCount : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int releaseDate : 1; 
        unsigned int lastModifiedDate : 1; 
        unsigned int artwork : 1; 
        unsigned int editorialArtwork : 1; 
        unsigned int tracksTiledArtwork : 1; 
        unsigned int hasCleanContent : 1; 
        unsigned int hasExplicitContent : 1; 
        unsigned int type : 1; 
        unsigned int libraryAdded : 1; 
        unsigned int keepLocalEnableState : 1; 
        unsigned int keepLocalManagedStatus : 1; 
        unsigned int curatorPlaylist : 1; 
        unsigned int owner : 1; 
        unsigned int publicPlaylist : 1; 
        unsigned int visiblePlaylist : 1; 
        unsigned int subscribed : 1; 
        unsigned int userEditableComponents : 1; 
        unsigned int shareURL : 1; 
        unsigned int shareShortURL : 1; 
        unsigned int descriptionText : 1; 
        unsigned int cloudVersionHash : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } curator; 
    }  _requestedPlaylistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end
