/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImageMediaObject : CKImageMediaObject

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;

- (id)animatedImageForWidth:(double)arg1;
- (id)generateThumbnailsForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id /* block */)imageEdgeEnhancementBlockIfNecessary;
- (bool)needsAnimation;
- (id)notificationCenter;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 orientation:(BOOL)arg3;

@end
