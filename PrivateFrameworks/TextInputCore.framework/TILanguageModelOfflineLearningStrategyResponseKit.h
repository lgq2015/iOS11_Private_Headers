/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy> {
    TILanguageModelOfflineLearningTask * _learningTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) TILanguageModelOfflineLearningTask *learningTask;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didFinishLearning;
- (id)filterMessages:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2;
- (bool)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
- (id)learningTask;
- (id)messagesClusteredByRecipient:(id)arg1;

@end
