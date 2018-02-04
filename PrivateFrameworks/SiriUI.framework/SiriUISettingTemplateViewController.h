/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISettingTemplateViewController : SiriUIBaseTemplateViewController

@property (nonatomic, retain) <SiriUISettingTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUISettingTemplateView *view;

- (Class)templateViewClass;

@end
