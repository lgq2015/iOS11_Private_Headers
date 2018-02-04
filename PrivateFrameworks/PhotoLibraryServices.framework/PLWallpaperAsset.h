/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWallpaperAsset : PLManagedAsset

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) NSData *imageURLData;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, retain) NSURL *thumbnailURL;
@property (nonatomic, retain) NSData *thumbnailURLData;
@property (nonatomic, retain) NSDictionary *wallpaperOptions;
@property (nonatomic, retain) NSData *wallpaperOptionsData;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withImageURL:(id)arg2 thumbnailURL:(id)arg3;

- (void)_setURL:(id)arg1 forKey:(id)arg2;
- (id)_urlForKey:(id)arg1;
- (bool)allowsWallpaperEditing;
- (void)awakeFromInsert;
- (id)image;
- (id)imageName;
- (id)imageURL;
- (id)imageWithFormat:(int)arg1;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)indexSheetImage;
- (bool)isIncludedInMoments;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (void)prepareForDeletion;
- (void)setImageURL:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setWallpaperOptions:(id)arg1;
- (id)thumbnailImage;
- (id)thumbnailURL;
- (id)wallpaperFullScreenImage;
- (id)wallpaperOptions;

@end
