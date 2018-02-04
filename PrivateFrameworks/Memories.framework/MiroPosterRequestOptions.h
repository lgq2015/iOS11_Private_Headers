/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPosterRequestOptions : NSObject {
    bool  _clearOldPosters;
    UIImage * _overrideKeyAssetImage;
    bool  _returnJPEGEncodedImage;
    bool  _saveGeneratedImageToDisk;
}

@property (nonatomic) bool clearOldPosters;
@property (nonatomic, retain) UIImage *overrideKeyAssetImage;
@property (nonatomic) bool returnJPEGEncodedImage;
@property (nonatomic) bool saveGeneratedImageToDisk;

- (void).cxx_destruct;
- (bool)clearOldPosters;
- (id)init;
- (id)overrideKeyAssetImage;
- (bool)returnJPEGEncodedImage;
- (bool)saveGeneratedImageToDisk;
- (void)setClearOldPosters:(bool)arg1;
- (void)setOverrideKeyAssetImage:(id)arg1;
- (void)setReturnJPEGEncodedImage:(bool)arg1;
- (void)setSaveGeneratedImageToDisk:(bool)arg1;

@end
