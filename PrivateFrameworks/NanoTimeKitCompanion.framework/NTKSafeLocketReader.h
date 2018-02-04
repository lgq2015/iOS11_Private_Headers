/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSafeLocketReader : NSObject {
    NSString * _defaultPhotoPath;
    <NTKSafeLocketReaderDelegate> * _delegate;
    bool  _isPhotoLibraryAvailable;
    NPTOLocket * _locket;
}

@property (nonatomic) <NTKSafeLocketReaderDelegate> *delegate;
@property (nonatomic, readonly) bool firstUnlockHasOccurred;
@property (nonatomic, readonly) NPTOLocket *locket;
@property (nonatomic, readonly) unsigned long long numberOfLoadedPhotos;
@property (nonatomic, readonly) unsigned long long numberOfTotalPhotos;

- (void).cxx_destruct;
- (id)delegate;
- (bool)firstUnlockHasOccurred;
- (unsigned long long)indexOfPhotoWithIdentifier:(id)arg1;
- (id)initWithDefaultPhotoPath:(id)arg1;
- (long long)keyAssetIndex;
- (void)loadPhotoAtIndex:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (id)locket;
- (unsigned long long)numberOfLoadedPhotos;
- (unsigned long long)numberOfTotalPhotos;
- (id)remoteCollectionIdentifier;
- (void)setDelegate:(id)arg1;
- (id)subtitle;
- (id)title;

@end
