/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoFilterThumbnailRenderer : NSObject {
    bool  _allowDepthEffects;
    PLEditSource * _editSource;
}

@property (nonatomic, readonly) PLEditSource *editSource;

- (void).cxx_destruct;
- (id)editSource;
- (id)initWithEditSource:(id)arg1;
- (void)requestThumbnailsForModel:(id)arg1 withFilters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 singleCompletion:(id /* block */)arg4;

@end
