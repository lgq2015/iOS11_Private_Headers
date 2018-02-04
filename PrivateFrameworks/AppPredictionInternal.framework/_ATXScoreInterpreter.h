/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXScoreInterpreter : NSObject {
    id  _subscoreKeys;
    NSDictionary * _varPrograms;
}

- (void).cxx_destruct;
- (void)_compileRoot:(id)arg1;
- (double)_evalVariable:(id)arg1 withCtx:(id)arg2;
- (id)evaluateWithInputScores:(id)arg1 intentType:(id)arg2;
- (id)initWithParseRoot:(id)arg1;

@end
