/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetMetadataDonator : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSCountedSet * _locationDescriptions;
    NSMutableDictionary * _locationDescriptionsByAssetLocalIdentifiers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, retain) NSCountedSet *locationDescriptions;
@property (nonatomic, retain) NSMutableDictionary *locationDescriptionsByAssetLocalIdentifiers;

+ (id)new;
+ (id)sharedDonator;

- (void).cxx_destruct;
- (id)_init;
- (void)_notifyWhenDonationIsComplete:(id /* block */)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)backgroundQueue;
- (void)donate:(id)arg1;
- (void)donateMetadataForAsset:(id)arg1;
- (id)init;
- (id)locationDescriptions;
- (id)locationDescriptionsByAssetLocalIdentifiers;
- (void)setBackgroundQueue:(id)arg1;
- (void)setLocationDescriptions:(id)arg1;
- (void)setLocationDescriptionsByAssetLocalIdentifiers:(id)arg1;

@end