/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLImageItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedOutputClasses;
+ (id)animatableContentTypes;
+ (id)scaledImageFromImageSource:(struct CGImageSource { }*)arg1 toFitInSize:(double)arg2 scale:(double)arg3;
+ (id)scaledImageFromImageURL:(id)arg1 toFitInSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

- (id)_contentsFromCGImageSource:(struct CGImageSource { }*)arg1 context:(id)arg2 scale:(double)arg3;
- (double)_maximumDimension;
- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3;

@end
