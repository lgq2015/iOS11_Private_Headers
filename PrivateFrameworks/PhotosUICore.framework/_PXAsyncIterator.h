/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXAsyncIterator : NSObject <PXAsyncIterator> {
    id /* block */  _completion;
    unsigned long long  _count;
    id /* block */  _handler;
    unsigned long long  _index;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long index;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_executeNextRun;
- (id /* block */)completion;
- (unsigned long long)count;
- (id /* block */)handler;
- (unsigned long long)index;
- (id)init;
- (id)initWithCount:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)next;
- (void)setCompletion:(id /* block */)arg1;
- (void)stop;

@end
