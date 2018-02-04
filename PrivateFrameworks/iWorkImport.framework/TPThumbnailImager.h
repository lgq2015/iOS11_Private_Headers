/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPThumbnailImager : TSDImager <TSKSearchCanvasDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)canvasDidValidateLayouts:(id)arg1;
- (void)canvasWillLayout:(id)arg1;
- (struct CGImage { }*)newImage;

@end
