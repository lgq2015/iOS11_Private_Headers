/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface CKVOToken : NSObject {
    id /* block */  _block;
    long long  _index;
    NSString * _keypath;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly, copy) NSString *keypath;

- (void).cxx_destruct;
- (id /* block */)block;
- (void*)context;
- (id)description;
- (long long)index;
- (id)initWithKeyPath:(id)arg1 index:(long long)arg2 block:(id /* block */)arg3;
- (id)keypath;

@end
