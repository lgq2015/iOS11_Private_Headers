/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMUnitTestRunner : NSObject <XCTestObservation> {
    <IMUnitTestRunnerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultPathToXCTestFramework;
@property (nonatomic) <IMUnitTestRunnerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dateFormatter;
- (id)defaultPathToXCTestFramework;
- (id)delegate;
- (id)descriptionFromResult:(id)arg1;
- (id)loadTestBundle:(id)arg1 error:(id*)arg2;
- (bool)loadXCTestFramework;
- (id)logFileHandle;
- (id)pathToPluginBundle:(id)arg1;
- (id)runTestsInBundleAtPath:(id)arg1 error:(id*)arg2;
- (id)runTestsInBundleNamed:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testLogWithFormat:(id)arg1;
- (void)testLogWithFormat:(id)arg1 arguments:(char *)arg2;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuiteWillStart:(id)arg1;
- (void)writeOutputToStdout:(id)arg1;

@end
