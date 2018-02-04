/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface _CKDispatchQueueBlock : NSObject {
    id /* block */  _block;
    unsigned long long  _fifo;
    NSString * _key;
    long long  _priority;
}

@property (nonatomic, copy) id /* block */ block;
@property (setter=setFIFO:, nonatomic) unsigned long long fifo;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancel;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)fifo;
- (id)initWithBlock:(id /* block */)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4;
- (id)key;
- (long long)priority;
- (void)setBlock:(id /* block */)arg1;
- (void)setFIFO:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setPriority:(long long)arg1;

@end
