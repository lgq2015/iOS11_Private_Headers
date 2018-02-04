/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2SessionPool : NSObject <C2SessionDelegate> {
    struct dispatch_queue_s { } * _cleanUp_queue;
    unsigned char  _cleanUp_running;
    NSMutableDictionary * _sessionConfigurationNameToPinnedSession;
    NSMutableDictionary * _sessionConfigurationNameToUnpinnedSession;
    unsigned char  _testBehavior_disableAutomaticCleanup;
}

@property (nonatomic) struct dispatch_queue_s { }*cleanUp_queue;
@property (nonatomic) unsigned char cleanUp_running;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *sessionConfigurationNameToPinnedSession;
@property (nonatomic, retain) NSMutableDictionary *sessionConfigurationNameToUnpinnedSession;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char testBehavior_disableAutomaticCleanup;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (unsigned char)_cleanUp_job;
- (void)_cleanUp_schedule;
- (void)_unsafe_removeSession:(id)arg1;
- (struct dispatch_queue_s { }*)cleanUp_queue;
- (unsigned char)cleanUp_running;
- (id)createDataTaskWithRequestIdentifer:(id)arg1 request:(id)arg2 options:(id)arg3 delegate:(id)arg4 sessionHandle:(id*)arg5;
- (void)dealloc;
- (void)ensureCleanUpRunning;
- (id)init;
- (void)removeSession:(id)arg1;
- (id)sessionConfigurationNameToPinnedSession;
- (id)sessionConfigurationNameToUnpinnedSession;
- (void)setCleanUp_queue:(struct dispatch_queue_s { }*)arg1;
- (void)setCleanUp_running:(unsigned char)arg1;
- (void)setSessionConfigurationNameToPinnedSession:(id)arg1;
- (void)setSessionConfigurationNameToUnpinnedSession:(id)arg1;
- (void)setTestBehavior_disableAutomaticCleanup:(unsigned char)arg1;
- (unsigned char)testBehavior_cleanUp;
- (unsigned char)testBehavior_disableAutomaticCleanup;

@end
