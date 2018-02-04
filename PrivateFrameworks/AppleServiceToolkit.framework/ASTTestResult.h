/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTTestResult : ASTSealablePayload {
    NSNumber * _allowCellularSizeThreshold;
    NSDictionary * _data;
    NSDictionary * _dictionary;
    NSArray * _files;
    NSDictionary * _predicates;
    NSNumber * _statusCode;
    double  _testDuration;
    NSNumber * _testId;
}

@property (nonatomic, retain) NSNumber *allowCellularSizeThreshold;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSDictionary *predicates;
@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic) double testDuration;
@property (nonatomic, readonly) NSNumber *testId;

+ (id)resultWithTestId:(id)arg1 parameters:(id)arg2;

- (void).cxx_destruct;
- (id)allowCellularSizeThreshold;
- (id)data;
- (id)dictionary;
- (id)files;
- (id)generatePayload;
- (id)init;
- (id)initWithTestId:(id)arg1 parameters:(id)arg2;
- (id)predicates;
- (bool)sealWithFileSigner:(id /* block */)arg1 error:(id*)arg2;
- (void)sealWithPayload:(id)arg1 signature:(id)arg2;
- (void)sealWithSealableFiles:(id)arg1;
- (void)setAllowCellularSizeThreshold:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setPredicates:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setTestDuration:(double)arg1;
- (id)statusCode;
- (double)testDuration;
- (id)testId;

@end
