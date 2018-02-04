/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUPasswordPickerViewController : UINavigationController {
    id /* block */  _completionHandler;
    bool  _forUserNamesOnly;
    NSArray * _hintStrings;
    long long  _minimumNumberOfCredentialsToShowLikelyMatchesSection;
    NSString * _prompt;
    bool  _shouldDismissOnCompletion;
}

@property (nonatomic, readonly) bool forUserNamesOnly;
@property (nonatomic, readonly, copy) NSArray *hintStrings;
@property (nonatomic, readonly) long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic, readonly, copy) NSString *prompt;
@property (nonatomic) bool shouldDismissOnCompletion;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_cancel;
- (void)_pickSavedPassword:(id)arg1;
- (void)dealloc;
- (bool)forUserNamesOnly;
- (id)hintStrings;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 hintStrings:(id)arg3 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg4 shouldDismissOnCompletion:(bool)arg5 completionHandler:(id /* block */)arg6;
- (long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
- (id)prompt;
- (void)setShouldDismissOnCompletion:(bool)arg1;
- (bool)shouldDismissOnCompletion;

@end
