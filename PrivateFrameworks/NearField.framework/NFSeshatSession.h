/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSeshatSession : NFSession <NFSeshatSessionCallbacks>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isTransientError:(struct { unsigned int x1; unsigned int x2; })arg1;

- (struct { unsigned int x1; unsigned int x2; })allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id*)arg4 outWriteCount:(unsigned int*)arg5;
- (struct { unsigned int x1; unsigned int x2; })authorizeUpdate:(bool)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned int*)arg4;
- (struct { unsigned int x1; unsigned int x2; })deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned int*)arg2;
- (struct { unsigned int x1; unsigned int x2; })derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id*)arg3 outWriteCount:(unsigned int*)arg4;
- (struct { unsigned int x1; unsigned int x2; })getData:(id*)arg1 updateKUD:(char *)arg2 outWriteLimit:(unsigned int*)arg3 outWriteCount:(unsigned int*)arg4;
- (struct { unsigned int x1; unsigned int x2; })getHash:(id*)arg1;
- (struct { unsigned int x1; unsigned int x2; })obliterate;
- (struct { unsigned int x1; unsigned int x2; })resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned int*)arg3;

@end
