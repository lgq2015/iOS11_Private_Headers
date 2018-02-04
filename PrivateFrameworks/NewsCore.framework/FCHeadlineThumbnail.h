/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadlineThumbnail : NSObject {
    FCAssetHandle * _thumbnailAssetHandle;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic, retain) FCAssetHandle *thumbnailAssetHandle;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

+ (id)headlineThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)setThumbnailAssetHandle:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailAssetHandle;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
