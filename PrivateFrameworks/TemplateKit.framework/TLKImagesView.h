/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImagesView : TLKView <NUIContainerStackViewDelegate> {
    NSMutableArray * _imageViews;
    NSArray * _images;
    NUIContainerStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *imageViews;
@property (retain) NSArray *images;
@property (retain) NUIContainerStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)imageViews;
- (id)images;
- (id)init;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)setImageViews:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)styleDidChange:(unsigned long long)arg1;
- (void)updateWithImages:(id)arg1;

@end
