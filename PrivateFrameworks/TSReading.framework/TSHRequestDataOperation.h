/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHRequestDataOperation : TSHRequestOperation {
    NSMutableData * mData;
}

- (void)clearData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)data;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end
