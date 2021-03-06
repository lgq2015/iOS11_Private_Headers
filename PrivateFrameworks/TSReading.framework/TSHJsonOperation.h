/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHJsonOperation : TSHRequestDataOperation {
    NSObject * mJSONResultObject;
    unsigned long long  mResponseStringEncoding;
}

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)jsonResult;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end
