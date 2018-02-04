/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable> {
    <SUInstallationConstraintObserverDelegate> * _delegate;
    SUDownload * _download;
    bool  _queue_invalidated;
    NSMapTable * _queue_observerBlockTokens;
    unsigned long long  _queue_tokenCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUInstallationConstraintObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) SUDownload *download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasAnyBlockObservers;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)_removeToken:(id)arg1;
- (void)dealloc;
- (id)download;
- (id)init;
- (id)initWithDownload:(id)arg1;
- (id)initWithDownload:(id)arg1 queue:(id)arg2 constraints:(id)arg3;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (id)registerObserverBlock:(id /* block */)arg1;

@end
