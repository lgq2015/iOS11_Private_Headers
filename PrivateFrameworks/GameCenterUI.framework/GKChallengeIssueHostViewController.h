/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKChallengeIssueHostViewController : GKUIRemoteViewController <GKChallengeIssueHostProtocol> {
    GKHostedChallengeIssueController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKHostedChallengeIssueController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)challengeExtension;

- (void)dealloc;
- (id)delegate;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromExtension:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
