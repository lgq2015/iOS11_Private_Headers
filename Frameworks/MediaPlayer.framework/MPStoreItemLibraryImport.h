/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemLibraryImport : NSObject {
    bool  _addToCloudLibrary;
    NSArray * _importElements;
}

@property (nonatomic, readonly) bool addToCloudLibrary;
@property (nonatomic, readonly) NSArray *importElements;

- (void).cxx_destruct;
- (bool)addToCloudLibrary;
- (id)importElements;
- (id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(bool)arg2;

@end
