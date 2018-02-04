/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITextTemplateViewController : SiriUITemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SiriUITextTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUITextTemplateView *view;

- (void)_textTemplateViewDisclosed:(id)arg1;
- (bool)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;
- (void)loadView;

@end
