/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXFeedbackStateBuilder : NSObject {
    int  _appCount;
    NSMutableData * _data;
    bool  _finished;
}

- (void).cxx_destruct;
- (id)finish;
- (id)init;
- (id)initWithABGroup:(id)arg1 assetVersion:(long long)arg2;
- (void)recordApp:(id)arg1 totalScore:(double)arg2 scoreInputs:(double*)arg3;

@end
