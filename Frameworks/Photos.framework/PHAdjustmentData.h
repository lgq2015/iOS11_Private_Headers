/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAdjustmentData : NSObject <NSSecureCoding> {
    long long  _baseVersion;
    NSData * _data;
    NSString * _formatIdentifier;
    NSString * _formatVersion;
}

@property (nonatomic) long long baseVersion;
@property (readonly) NSData *data;
@property (nonatomic, copy) NSString *formatIdentifier;
@property (nonatomic, copy) NSString *formatVersion;
@property (nonatomic, readonly) bool isSloMoAdjustment;
@property (nonatomic, readonly) bool isUnderstandable;
@property (nonatomic, readonly) bool isiMovieAdjustment;
@property (getter=isOpaque, readonly) bool opaque;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)opaqueAdjustmentData;
+ (id)photoEditModelWithAdjustmentData:(id)arg1 asset:(id)arg2;
+ (bool)supportsSecureCoding;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1;

- (void).cxx_destruct;
- (bool)_hasAdjustments;
- (long long)baseVersion;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formatIdentifier;
- (id)formatVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;
- (bool)isOpaque;
- (void)setBaseVersion:(long long)arg1;
- (void)setFormatIdentifier:(id)arg1;
- (void)setFormatVersion:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (long long)_pu_baseOrientationForAsset:(id)arg1;
- (long long)pu_adjustmentWorkVersion;
- (bool)pu_isPenultimateAvailable;
- (bool)pu_loadPhotoEditModel:(id)arg1 forAsset:(id)arg2;
- (long long)pu_penultimateState;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)isSloMoAdjustment;
- (bool)isUnderstandable;
- (bool)isiMovieAdjustment;

@end