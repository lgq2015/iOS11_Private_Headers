/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseHeterogenousCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {
    NSArray * _libraryViewConfigurations;
}

@property (nonatomic, readonly) MusicEntityCollectionViewDescriptor *entityCollectionViewDescriptor;
@property (nonatomic, readonly) NSArray *libraryViewConfigurations;

- (void).cxx_destruct;
- (id)collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)initWithLibraryViewConfigurations:(id)arg1;
- (id)libraryViewConfigurationForSection:(unsigned long long)arg1;
- (id)libraryViewConfigurations;

@end
