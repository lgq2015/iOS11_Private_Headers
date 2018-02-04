/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRuntimeTestSuite : IMRuntimeTest {
    IMRuntimeTest * _currentTest;
    NSMutableArray * _runningTests;
    double  _testStartDelay;
    NSMutableArray * _tests;
    NSTimer * _timer;
}

@property (retain) IMRuntimeTest *currentTest;
@property (retain) NSMutableArray *runningTests;
@property double testStartDelay;
@property (retain) NSArray *tests;
@property NSTimer *timer;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_startNextTest;
- (void)_timerExpired:(id)arg1;
- (void)addTest:(id)arg1;
- (id)currentTest;
- (void)currentTestDidFinish;
- (id)init;
- (void)removeTest:(id)arg1;
- (id)runningTests;
- (void)setCurrentTest:(id)arg1;
- (void)setRunningTests:(id)arg1;
- (void)setTestStartDelay:(double)arg1;
- (void)setTests:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)startTest;
- (double)testStartDelay;
- (id)tests;
- (id)timer;

@end
