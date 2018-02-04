/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSContext : JSContext {
    NSHashTable * _collectedProxies;
    bool  _didTimeOut;
    double  _executionTimeLimit;
    NSMutableDictionary * _functions;
    NSMutableArray * _stateStack;
}

@property (readonly) bool didTimeOut;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) double executionTimeLimit;

+ (void)execute:(id /* block */)arg1;
+ (bool)validateValuesAreNumbers:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)addProxy:(id)arg1;
- (void)clearExecutionTimeLimit;
- (id)currentState;
- (bool)didTimeOut;
- (id)error;
- (double)executionTimeLimit;
- (id)functionForKey:(id)arg1;
- (id)init;
- (void)popState;
- (void)pushState:(id)arg1;
- (void)resetAllProxies;
- (void)setDidTimeOut:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setException:(id)arg1;
- (void)setExecutionTimeLimit:(double)arg1;
- (void)setFunction:(id)arg1 forKey:(id)arg2;
- (void)setupBuiltInFunctions;

@end
