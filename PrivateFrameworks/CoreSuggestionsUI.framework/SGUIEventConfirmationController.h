/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIEventConfirmationController : SGUISuggestionConfirmationController <EKEventEditViewDelegate, EKEventViewDelegate, EKEventViewDelegatePrivate> {
    id /* block */  _finished;
    SGRealtimeEvent * _realtimeEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventsSuggestionsService;
+ (void)confirmSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)rejectSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)confirmSuggestion:(id)arg1 withPresentationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;

@end
