/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImage : NSObject {
    NSArray * _durations;
    UIImage * _image;
}

@property (nonatomic, copy) NSArray *durations;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(id /* block */)arg2;
+ (bool)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* block */)arg3 frameProcessor:(id /* block */)arg4;
+ (bool)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(id /* block */)arg3 frameProcessor:(id /* block */)arg4;
+ (id)animatedImageWithASTCData:(id)arg1;
+ (id)animatedImageWithContentsOfASTCURL:(id)arg1;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)filenameExtension;
+ (bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(id /* block */)arg3;
+ (bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(id /* block */)arg3 frameProcessor:(id /* block */)arg4;
+ (bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* block */)arg3;
+ (bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* block */)arg3 frameProcessor:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (id)description;
- (id)durations;
- (id)frames;
- (id)image;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (double)scale;
- (void)setDurations:(id)arg1;
- (void)setImage:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)writeToASTCURL:(id)arg1;
- (bool)writeToCPBitmapURL:(id)arg1;

@end