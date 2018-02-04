/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseStatementRenderer : NSObject

+ (id)defaultRenderer;

- (id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1;
- (id)commitTransactionStatement;
- (id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2;
- (id)insertStatementUsingDefaultValuesForTableName:(id)arg1;
- (id)insertStatementWithOptions:(id)arg1;
- (id)rollbackTranscationStatement;
- (id)rollbackTranscationStatementToSavepointName:(id)arg1;
- (id)savepointReleaseStatementWithName:(id)arg1;
- (id)savepointStatementWithName:(id)arg1;
- (id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2;

@end
