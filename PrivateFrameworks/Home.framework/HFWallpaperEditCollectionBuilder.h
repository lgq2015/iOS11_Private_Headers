/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperEditCollectionBuilder : NSObject {
    <HFHomeKitObject><HMApplicationData> * _hkObject;
    bool  _hkObjectNewlyCreated;
    NAFuture * _initialEditCollectionFuture;
    long long  _namedWallpaperCollectionType;
    HFWallpaperEditCollection * _updatedEditCollection;
}

@property (nonatomic, retain) <HFHomeKitObject><HMApplicationData> *hkObject;
@property (nonatomic) bool hkObjectNewlyCreated;
@property (nonatomic, retain) NAFuture *initialEditCollectionFuture;
@property (nonatomic) long long namedWallpaperCollectionType;
@property (nonatomic, retain) HFWallpaperEditCollection *updatedEditCollection;

- (void).cxx_destruct;
- (id)commitWallpaper;
- (id)description;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;
- (id)hkObject;
- (bool)hkObjectNewlyCreated;
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2;
- (id)initialEditCollectionFuture;
- (long long)namedWallpaperCollectionType;
- (void)setHkObject:(id)arg1;
- (void)setHkObjectNewlyCreated:(bool)arg1;
- (void)setInitialEditCollectionFuture:(id)arg1;
- (void)setNamedWallpaperCollectionType:(long long)arg1;
- (void)setUpdatedEditCollection:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2;
- (id)updatedEditCollection;
- (id)wallpaperEditCollectionFuture;

@end
