/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController {
    bool  _readyToDisplay;
    NSUUID * _requestUUID;
}

@property (getter=isReadyToDisplay, nonatomic) bool readyToDisplay;
@property (nonatomic, retain) NSUUID *requestUUID;

- (void).cxx_destruct;
- (bool)__shouldRemoteViewControllerFenceOperations;
- (bool)isReadyToDisplay;
- (id)requestUUID;
- (void)setReadyToDisplay:(bool)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
