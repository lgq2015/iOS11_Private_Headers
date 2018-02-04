/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBackgroundLayoutController : NSObject {
    double  _batchProcessingTime;
    <TPBackgroundLayoutControllerDelegate> * _delegate;
    TPDocumentRoot * _documentRoot;
    double  _fullDelay;
    TSUDelayTimer * _interruptTimer;
    bool  _isTornDown;
    TPBGLayoutState * _protectedState;
    NSObject<OS_dispatch_queue> * _queue;
    double  _shortDelay;
}

@property (getter=isBackgroundLayoutSuspended, nonatomic, readonly) bool backgroundLayoutSuspended;
@property <TPBackgroundLayoutControllerDelegate> *delegate;
@property TPDocumentRoot *documentRoot;
@property (nonatomic, readonly) bool isBackgroundLayoutPending;

- (void).cxx_destruct;
- (id)delegate;
- (id)documentRoot;
- (id)initWithDocumentRoot:(id)arg1 delegate:(id)arg2;
- (void)interruptAndScheduleAfterDelay;
- (bool)isBackgroundLayoutPending;
- (bool)isBackgroundLayoutSuspended;
- (void)p_performBackgroundLayout;
- (void)p_scheduleTimerAfterDelay:(double)arg1;
- (void)resume;
- (void)scheduleNow;
- (void)setDelegate:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)suspend;
- (void)teardown;

@end
