/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DATestViewController : UIViewController <CXCallObserverDelegate> {
    NSMutableArray * _allResults;
    CXCallObserver * _callObserver;
    DATestViewOperation * _currentTest;
    NSDictionary * _dataObject;
    bool  _fullScreen;
    UITapGestureRecognizer * _homeButtonRecognizer;
}

@property (nonatomic, retain) NSMutableArray *allResults;
@property (nonatomic, retain) CXCallObserver *callObserver;
@property (nonatomic, retain) DATestViewOperation *currentTest;
@property (nonatomic, retain) NSDictionary *dataObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITapGestureRecognizer *homeButtonRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allResults;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)cancelTest;
- (id)currentTest;
- (id)dataObject;
- (id)homeButtonRecognizer;
- (id)init;
- (id)initWithTest:(id)arg1;
- (id)initWithTest:(id)arg1 fullScreen:(bool)arg2;
- (bool)isFullScreen;
- (void)monitorIncomingCall;
- (bool)prefersStatusBarHidden;
- (void)setAllResults:(id)arg1;
- (void)setCallObserver:(id)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setDataObject:(id)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setHomeButtonRecognizer:(id)arg1;
- (void)viewDidLoad;

@end
