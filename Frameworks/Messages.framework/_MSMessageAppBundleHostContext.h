/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageAppBundleHostContext : NSObject <_MSMessageComposeHostImplProtocol> {
    <_MSMessageComposeExtensionProtocol> * _appContext;
    <_MSMessageComposeHostProtocol> * _delegate;
}

@property (nonatomic, retain) <_MSMessageComposeExtensionProtocol> *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MSMessageComposeHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestPresentationStyleExpanded:(bool)arg1;
- (void)_requestResize;
- (void)_stageAppItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_stageMediaItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_stageRichLink:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateSnapshotForNextLaunch:(id)arg1;
- (id)appContext;
- (id)delegate;
- (id)initWithAppContext:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
