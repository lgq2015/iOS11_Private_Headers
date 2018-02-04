/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICFauxFlamesImageDataContainer : NSObject {
    void * _bytes;
    unsigned long long  _length;
}

@property (nonatomic, readonly) void*bytes;
@property (nonatomic, readonly) unsigned long long length;

- (void*)bytes;
- (void)dealloc;
- (id)initWithPath:(id)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;

@end
