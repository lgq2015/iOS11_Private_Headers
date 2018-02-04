/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMAttributedStringRenderer : NSObject {
    FMAttributedStringRendererOptions * _options;
}

@property (nonatomic, readonly) FMAttributedStringRendererOptions *options;

- (void).cxx_destruct;
- (id)_imageFromTextStorage:(id)arg1 width:(double)arg2 showExclusionPaths:(bool)arg3;
- (struct CGSize { double x1; double x2; })_sizeFromTextStorage:(id)arg1;
- (id)_textStorageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2 showExclusionPaths:(bool)arg3 options:(id)arg4;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)options;

@end
