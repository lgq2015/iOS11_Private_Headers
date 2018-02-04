/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLXPCData : NSData {
    NSObject<OS_xpc_object> * _data;
}

- (const void*)bytes;
- (void)dealloc;
- (id)debugDescription;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithXPCData:(id)arg1;
- (unsigned long long)length;

@end
