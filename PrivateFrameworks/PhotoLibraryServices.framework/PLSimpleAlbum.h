/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {
    NSOrderedSet * _assets;
    PLManagedAsset * _keyAsset;
    PLManagedAsset * _secondaryKeyAsset;
    PLManagedAsset * _tertiaryKeyAsset;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

- (long long)_countOfAssetType:(short)arg1;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 assets:(id)arg2;
- (bool)isEmpty;
- (id)keyAsset;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (unsigned long long)photosCount;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)uuid;
- (unsigned long long)videosCount;

@end
