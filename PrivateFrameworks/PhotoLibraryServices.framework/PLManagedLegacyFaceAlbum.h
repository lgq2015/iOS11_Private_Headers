/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedLegacyFaceAlbum : PLManagedAlbum

@property (nonatomic) short keyAssetFaceIdentifier;
@property (nonatomic) int keyAssetFaceThumbnailIndex;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

@end
