/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {
    <TILinguisticDataSource> * _dataSource;
    NSSet * _forwardedMessageSeparators;
    NSCharacterSet * _linePaddingCharacters;
}

+ (id)dataSourceForTask;

- (id)dataSource;
- (void)dealloc;
- (id)forwardedMessageSeparators;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(bool)arg2;
- (id)linePaddingCharacters;

@end
