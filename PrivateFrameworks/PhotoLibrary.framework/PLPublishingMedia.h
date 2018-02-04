/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPublishingMedia : NSObject {
    id  _asset;
    NSURL * _assetURL;
    double  _duration;
    bool  _isHDVideo;
    bool  _isVideo;
    NSString * _pathForVideoFile;
}

@property (nonatomic, retain) id asset;
@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic) double duration;
@property (nonatomic) bool isHDVideo;
@property (nonatomic) bool isVideo;
@property (nonatomic, retain) NSString *pathForVideoFile;

+ (bool)isValidPublishingMedia:(id)arg1;

- (id)asset;
- (id)assetURL;
- (void)dealloc;
- (double)duration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAVURLAsset:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHDVideo;
- (bool)isVideo;
- (id)pathForVideoFile;
- (void)setAsset:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIsHDVideo:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setPathForVideoFile:(id)arg1;

@end
