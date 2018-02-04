/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2RequestManager : NSObject {
    C2SessionPool * _sessionPool;
}

@property (nonatomic, readonly) C2SessionPool *sessionPool;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id*)arg4;
- (id)init;
- (id)sessionPool;
- (id)testUtility_sessionForTask:(id)arg1;
- (id)testUtility_sessionTaskForTask:(id)arg1;

@end
