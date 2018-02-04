/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIAuthenticationManager : NSObject {
    UIAlertController * _alertController;
    NSMutableArray * _authenticationChallenges;
    id  _delegate;
    bool  _showingAuthenticationPanel;
}

@property id delegate;
@property (getter=isShowingAuthenticationPanel, nonatomic, readonly) bool showingAuthenticationPanel;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_didResolveChallenge;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(bool)arg2;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)authenticationChallenge;
- (void)cancelAuthentication;
- (id)delegate;
- (bool)isShowingAuthenticationPanel;
- (void)removeAuthenticationChallenge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowingAuthentication:(bool)arg1;

@end
