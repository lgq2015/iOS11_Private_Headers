/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHAccount : NSObject {
    NSURL * mBaseURL;
    NSURLCredential * mCredentials;
}

- (id)baseURL;
- (id)credentials;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4;

@end
