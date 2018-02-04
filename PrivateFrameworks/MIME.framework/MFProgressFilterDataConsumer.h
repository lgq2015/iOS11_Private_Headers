/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {
    unsigned long long  _currentBytes;
    unsigned long long  _expectedSize;
    id /* block */  _progressBlock;
}

@property (readonly) unsigned long long expectedSize;
@property (nonatomic, copy) id /* block */ progressBlock;

- (long long)appendData:(id)arg1;
- (void)dealloc;
- (unsigned long long)expectedSize;
- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned long long)arg2;
- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned long long)arg2;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;

@end
