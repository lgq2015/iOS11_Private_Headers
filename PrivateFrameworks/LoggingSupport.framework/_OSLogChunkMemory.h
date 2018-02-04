/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogChunkMemory : _OSLogChunkStore {
    id /* block */  _deallocator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBytes:(const void*)arg1 size:(unsigned long long)arg2 deallocator:(id /* block */)arg3;

@end
