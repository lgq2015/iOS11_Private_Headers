/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibrarySystemFilters : NSObject {
    MPMediaLibraryView * _libraryView;
    bool  _shouldExcludePurchaseHistoryContent;
}

+ (id)sharedSystemFilters;

- (void).cxx_destruct;
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;
- (id)_init;
- (void)_updateFilters;
- (bool)shouldExcludePurchaseHistoryContentForLibrary:(id)arg1;

@end
