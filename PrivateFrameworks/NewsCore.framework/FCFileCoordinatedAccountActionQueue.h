/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedAccountActionQueue : NSObject {
    FCFileCoordinatedDictionary * _fileCoordinatedDictionary;
}

@property (nonatomic, retain) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void).cxx_destruct;
- (void)enqueueActionWithType:(long long)arg1 completion:(id /* block */)arg2;
- (id)fileCoordinatedDictionary;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)peekAtActionTypesWithCompletion:(id /* block */)arg1;
- (void)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (void)readLocalDataHintWithAccessor:(id /* block */)arg1;
- (void)setFileCoordinatedDictionary:(id)arg1;

@end
