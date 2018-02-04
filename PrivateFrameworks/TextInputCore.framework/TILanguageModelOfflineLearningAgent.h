/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningAgent : NSObject {
    TILanguageModelOfflineLearningTask * _currentLearningTask;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, retain) TILanguageModelOfflineLearningTask *currentLearningTask;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)contactRecordsForRecipients:(id)arg1;
+ (void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2;
+ (id)sharedLearningAgent;

- (bool)continueLearningTaskWithStrategy:(id)arg1;
- (id)currentLearningTask;
- (void)dealloc;
- (id)dispatchQueue;
- (void)handleRemovalOfLearnedModels;
- (id)init;
- (void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2;
- (void)performTaskInBackground:(id /* block */)arg1;
- (void)setCurrentLearningTask:(id)arg1;

@end
