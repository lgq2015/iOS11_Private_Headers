/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol> {
    GKGame * _game;
    GKUIRemoteViewController * _remoteViewControllerWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (nonatomic) GKUIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)game;
- (void)messageFromExtension:(id)arg1;
- (id)remoteViewController;
- (void)setGame:(id)arg1;
- (void)setRemoteViewController:(id)arg1;

@end
