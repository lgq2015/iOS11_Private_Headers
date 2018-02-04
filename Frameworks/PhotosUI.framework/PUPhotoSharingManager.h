/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoSharingManager : NSObject <PLPublishingAgentDelegate> {
    long long  _appSuspensionCount;
    unsigned long long  _backgroundTaskIdentifier;
    long long  _networkPromptCount;
    NSMutableArray * _publishingAgents;
    NSTimer * _publishingProgressTimer;
    PLProgressView * _publishingProgressView;
    long long  _videoRemakingCount;
}

@property (nonatomic, readonly) PLProgressView *publishingProgressView;
@property (getter=isRemaking, nonatomic) bool remaking;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addPublishingAgentIfNeeded:(id)arg1;
- (void)_cleanUpPublishingProgressView;
- (id)_currentPublishingAgent;
- (void)_removePublishingAgent:(id)arg1;
- (void)_schedulePublishingProgressViewUpdate;
- (void)_setDelaysAppSuspend:(bool)arg1;
- (void)_setFlag:(bool)arg1 forReferenceCounter:(long long*)arg2 performIfChanged:(id /* block */)arg3;
- (void)_setNetworkPromptShowing:(bool)arg1;
- (void)_updatePublishingProgressView:(id)arg1;
- (void)cancelPublishing;
- (void)dealloc;
- (bool)isRemaking;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(bool)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (id)publishingProgressView;
- (void)setRemaking:(bool)arg1;

@end