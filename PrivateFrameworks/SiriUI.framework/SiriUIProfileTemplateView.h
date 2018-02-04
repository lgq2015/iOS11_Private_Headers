/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView> {
    UIImageView * _imageView;
}

@property (nonatomic) <SiriUIProfileTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (readonly) Class superclass;
@property (nonatomic) <SiriUITemplatedView> *templatedSuperview;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithDataSource:(id)arg1;
- (void)layoutImage;
- (long long)layoutStyle;
- (void)reloadData;
- (void)setImageView:(id)arg1;

@end
