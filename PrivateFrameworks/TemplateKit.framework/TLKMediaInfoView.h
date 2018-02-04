/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKMediaInfoView : TLKView {
    NSArray * _contents;
    TLKContentsContainerView * _contentsContainer;
    TLKImage * _image;
    TLKImageView * _imageView;
}

@property (retain) NSArray *contents;
@property (retain) TLKContentsContainerView *contentsContainer;
@property (retain) TLKImage *image;
@property (retain) TLKImageView *imageView;

- (void).cxx_destruct;
- (id)contents;
- (id)contentsContainer;
- (id)detailLabelStrings;
- (id)image;
- (id)imageView;
- (bool)imageViewIsHidden;
- (id)init;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)setContents:(id)arg1;
- (void)setContentsContainer:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)titleLabelStrings;

@end
