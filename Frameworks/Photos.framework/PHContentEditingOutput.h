/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    PHAdjustmentData * _adjustmentData;
    long long  _baseVersion;
    NSURL * _editorBundleURL;
    long long  _fullSizeRenderHeight;
    long long  _fullSizeRenderWidth;
    bool  _isSubstandardRender;
    bool  _loopingLivePhoto;
    long long  _mediaType;
    NSData * _penultimateRenderedJPEGData;
    NSURL * _penultimateRenderedVideoComplementContentURL;
    NSURL * _renderedContentURL;
    NSURL * _renderedVideoComplementContentURL;
}

@property (retain) PHAdjustmentData *adjustmentData;
@property long long baseVersion;
@property (retain) NSURL *editorBundleURL;
@property (nonatomic) long long fullSizeRenderHeight;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) bool isSubstandardRender;
@property (getter=isLoopingLivePhoto, readonly) bool loopingLivePhoto;
@property (readonly) long long mediaType;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (copy) NSURL *renderedContentURL;
@property (copy) NSURL *renderedVideoComplementContentURL;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (unsigned long long)maximumAdjustmentDataLength;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentData;
- (id)assetAdjustmentsWithEditorBundleID:(id)arg1;
- (long long)baseVersion;
- (void)clearRenderedContentURL;
- (id)description;
- (id)editorBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (long long)fullSizeRenderHeight;
- (long long)fullSizeRenderWidth;
- (id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (bool)isLoopingLivePhoto;
- (bool)isSubstandardRender;
- (long long)mediaType;
- (id)penultimateRenderedJPEGData;
- (id)penultimateRenderedVideoComplementContentURL;
- (id)renderURLWithExtensionForMediaType:(long long)arg1;
- (id)renderedContentURL;
- (id)renderedVideoComplementContentURL;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(long long)arg1;
- (void)setEditorBundleURL:(id)arg1;
- (void)setFullSizeRenderHeight:(long long)arg1;
- (void)setFullSizeRenderWidth:(long long)arg1;
- (void)setIsSubstandardRender:(bool)arg1;
- (void)setPenultimateRenderedJPEGData:(id)arg1;
- (void)setPenultimateRenderedVideoComplementContentURL:(id)arg1;
- (void)setRenderedContentURL:(id)arg1;
- (void)setRenderedJPEGData:(id)arg1;
- (void)setRenderedVideoComplementContentURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI

- (id)initWithPhotoEditSnapshot:(id)arg1;

@end
