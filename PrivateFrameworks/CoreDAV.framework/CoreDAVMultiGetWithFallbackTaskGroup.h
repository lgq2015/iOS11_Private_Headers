/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable> {
    id /* block */  _getBlock;
    CoreDAVContainerMultiGetTask * _multiGetTask;
    NSMutableSet * _parsedContents;
    bool  _shouldIgnoreResponseErrors;
    NSMutableSet * _urls;
    bool  _usingMultiGet;
}

@property (nonatomic) <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *deletedURLs;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *missingURLs;
@property (nonatomic, readonly) NSSet *parsedContents;
@property (nonatomic) bool shouldIgnoreResponseErrors;
@property (readonly) Class superclass;
@property (nonatomic) <CoreDAVTaskManager> *taskManager;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (void)_configureAndSubmitTask:(id)arg1;
- (void)_fetchOneItem;
- (void)_switchToSingleGetMode;
- (id)deletedURLs;
- (id)error;
- (id)initWithURLs:(id)arg1 multiGetBlock:(id /* block */)arg2 getBlock:(id /* block */)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)missingURLs;
- (id)parsedContents;
- (void)setShouldIgnoreResponseErrors:(bool)arg1;
- (bool)shouldIgnoreResponseErrors;
- (void)startTaskGroup;

@end
