/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface BRObservableFile : NSObject <NSObservable> {
    NSString * _key;
    _BRObservableFilePresenter * _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) _BRObservableFilePresenter *presenter;
@property (readonly) Class superclass;

+ (void)_applicationDidBecomeActive:(id)arg1;
+ (void)_applicationWillResignActive:(id)arg1;
+ (void)_deregisterInstance:(id)arg1;
+ (void)_registerForApplicationLifecycleNotifications;
+ (void)_registerInstance:(id)arg1;
+ (id)observerForKey:(id)arg1 onFileURL:(id)arg2;

- (void).cxx_destruct;
- (void)_presenterDidChange;
- (id)addObserverBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 fileURL:(id)arg2;
- (id)key;
- (id)presenter;
- (void)setKey:(id)arg1;
- (void)setPresenter:(id)arg1;

@end
