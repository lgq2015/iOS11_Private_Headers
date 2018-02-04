/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPlayableContentQueueTableViewController : UITableViewController {
    MCDPlayableContentPlaybackManager * _contentManager;
}

@property (nonatomic, retain) MCDPlayableContentPlaybackManager *contentManager;

- (void).cxx_destruct;
- (id)contentManager;
- (id)initWithContentManager:(id)arg1;
- (void)setContentManager:(id)arg1;
- (void)viewDidLoad;

@end
