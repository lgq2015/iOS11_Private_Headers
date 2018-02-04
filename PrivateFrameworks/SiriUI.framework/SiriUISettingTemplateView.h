/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {
    UILabel * _textLabel;
}

@property (nonatomic) <SiriUISettingTemplateModel> *dataSource;

- (void).cxx_destruct;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;

@end
