/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHRequestOperation : TSHOperation {
    NSString * mEtag;
}

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (id)etag;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (id)request;
- (void)setEtag:(id)arg1;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end
