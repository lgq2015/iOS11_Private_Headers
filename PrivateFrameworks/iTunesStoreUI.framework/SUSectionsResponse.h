/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSectionsResponse : NSObject {
    bool  _cacheable;
    SUClientInterface * _clientInterface;
    UIImage * _moreListImage;
    UIImage * _moreListSelectedImage;
    NSMutableDictionary * _rawResponseDictionary;
    long long  _responseType;
    NSMutableDictionary * _sectionsCache;
    NSNumber * _shouldResetUserOrdering;
}

@property (nonatomic, readonly) NSArray *allSections;
@property (getter=isCacheable, nonatomic) bool cacheable;
@property (nonatomic, retain) UIImage *moreListImage;
@property (nonatomic, readonly) SSItemImageCollection *moreListImageCollection;
@property (nonatomic, retain) UIImage *moreListSelectedImage;
@property (nonatomic, readonly) NSString *moreListTitle;
@property (nonatomic, readonly, copy) NSDictionary *rawResponseDictionary;
@property (nonatomic, readonly) long long responseType;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSDictionary *sectionsDictionary;
@property (nonatomic) bool shouldResetUserOrdering;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) NSString *versionString;

+ (id)lastCachedVersionIdentifier;
+ (id)sectionsCacheDirectory;
+ (void)setLastCachedVersionIdentifier:(id)arg1;

- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;
- (void)_dropImageKeysFromArray:(id)arg1;
- (void)_dropImageKeysFromDictionary:(id)arg1;
- (bool)_loadArtworkFromCacheDirectory:(id)arg1;
- (void)_loadButtonArtworkForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3;
- (id)_newSectionsFromDictionary:(id)arg1;
- (id)_newVariantStringForButton:(id)arg1;
- (void)_writeButtonImagesForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (id)allSections;
- (void)dealloc;
- (void)dropEmbeddedImages;
- (id)init;
- (id)initWithClientInterface:(id)arg1 cacheDirectory:(id)arg2;
- (id)initWithClientInterface:(id)arg1 sectionsDictionary:(id)arg2 responseType:(long long)arg3;
- (bool)isCacheable;
- (id)moreListImage;
- (id)moreListImageCollection;
- (id)moreListSelectedImage;
- (id)moreListTitle;
- (id)rawResponseDictionary;
- (long long)responseType;
- (id)sections;
- (id)sectionsDictionary;
- (void)setCacheable:(bool)arg1;
- (void)setMoreListImage:(id)arg1;
- (void)setMoreListSelectedImage:(id)arg1;
- (void)setShouldResetUserOrdering:(bool)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (bool)shouldResetUserOrdering;
- (id)storeFrontIdentifier;
- (id)versionString;
- (bool)writeToCacheDirectory:(id)arg1 error:(id*)arg2;

@end
