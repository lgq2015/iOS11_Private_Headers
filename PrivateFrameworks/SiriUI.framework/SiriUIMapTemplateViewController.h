/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController <SiriUIMapTemplateViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIMapTemplateViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SiriUIMapTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUIMapTemplateView *view;

- (void)loadView;
- (void)mapTemplateView:(id)arg1 didModifyPlacemark:(id)arg2;
- (void)mapTemplateViewDidSelectMap:(id)arg1;
- (void)prepareForDismissal;
- (Class)templateViewClass;

@end
