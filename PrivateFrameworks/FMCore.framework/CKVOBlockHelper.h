/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface CKVOBlockHelper : NSObject {
    long long  _nextIdentifier;
    id  _observedObject;
    NSMutableDictionary * _tokensByContext;
}

@property (nonatomic) long long nextIdentifier;
@property (nonatomic, readonly) id observedObject;
@property (nonatomic, readonly) NSMutableDictionary *tokensByContext;

- (void).cxx_destruct;
- (id)allKVOObservers;
- (void)dealloc;
- (id)debugDescription;
- (void)dump;
- (id)initWithObject:(id)arg1;
- (id)insertNewTokenForKeyPath:(id)arg1 block:(id /* block */)arg2;
- (long long)nextIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (void)removeHandlerForKey:(id)arg1;
- (void)setNextIdentifier:(long long)arg1;
- (id)tokensByContext;

@end
