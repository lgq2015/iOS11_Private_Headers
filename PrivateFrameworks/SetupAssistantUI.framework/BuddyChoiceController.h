/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BuddyChoiceController : BFFSplashController <BFFFlowItem> {
    NSArray * _choices;
    <BFFFlowItemDelegate> * _delegate;
}

@property (nonatomic, copy) NSArray *choices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BFFFlowItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cloudConfigSkipKey;

- (void).cxx_destruct;
- (void)_tappedChoice:(id)arg1;
- (id)choices;
- (id)delegate;
- (void)didSelectChoice:(id)arg1;
- (void)setChoices:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
