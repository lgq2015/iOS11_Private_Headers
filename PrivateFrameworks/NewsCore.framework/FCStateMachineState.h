/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCStateMachineState : NSObject {
    id /* block */  _canTryBlock;
    id /* block */  _didEnterBlock;
    id /* block */  _didExitBlock;
    NSString * _name;
    id /* block */  _willEnterBlock;
    id /* block */  _willExitBlock;
}

@property (nonatomic, copy) id /* block */ canTryBlock;
@property (nonatomic, copy) id /* block */ didEnterBlock;
@property (nonatomic, copy) id /* block */ didExitBlock;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) id /* block */ willEnterBlock;
@property (nonatomic, copy) id /* block */ willExitBlock;

- (void).cxx_destruct;
- (bool)canTry:(id)arg1 withOwner:(id)arg2;
- (id /* block */)canTryBlock;
- (id)description;
- (id)didEnter:(id)arg1 withOwner:(id)arg2;
- (id /* block */)didEnterBlock;
- (id)didExit:(id)arg1 withOwner:(id)arg2;
- (id /* block */)didExitBlock;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)onCanTry:(id /* block */)arg1;
- (id)onDidEnter:(id /* block */)arg1;
- (id)onDidExit:(id /* block */)arg1;
- (id)onWillEnter:(id /* block */)arg1;
- (id)onWillExit:(id /* block */)arg1;
- (void)setCanTryBlock:(id /* block */)arg1;
- (void)setDidEnterBlock:(id /* block */)arg1;
- (void)setDidExitBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setWillEnterBlock:(id /* block */)arg1;
- (void)setWillExitBlock:(id /* block */)arg1;
- (void)willEnter:(id)arg1 withOwner:(id)arg2;
- (id /* block */)willEnterBlock;
- (void)willExit:(id)arg1 withOwner:(id)arg2;
- (id /* block */)willExitBlock;

@end
