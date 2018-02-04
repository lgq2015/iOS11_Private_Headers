/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHInfoOperation : TSHListPropertiesOperation

- (id)contentLength;
- (id)created;
- (void)dealloc;
- (id)etag;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (bool)isCollection;
- (id)modified;
- (id)objectForKey:(id)arg1;

@end
