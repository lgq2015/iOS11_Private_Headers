/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXScoreInterpreterCtx : NSObject {
    NSDictionary * inputScores;
    NSString * intentType;
    double  stack;
    int  stackLen;
    NSMutableDictionary * subscores;
}

- (void).cxx_destruct;
- (id)initWithInputScores:(id)arg1 subscoreKeys:(id)arg2 intentType:(id)arg3;

@end
