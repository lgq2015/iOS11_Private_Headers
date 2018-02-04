/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView> {
    <SiriUITemplateModel> * _dataSource;
    <SiriUITemplatedView> * _templatedSuperview;
}

@property (nonatomic) <SiriUITemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SiriUITemplatedView> *templatedSuperview;

- (void).cxx_destruct;
- (id)dataSource;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)reloadData;
- (void)removeFromTemplatedSuperview;
- (void)setDataSource:(id)arg1;
- (void)setTemplatedSuperview:(id)arg1;
- (id)templatedSuperview;

@end
