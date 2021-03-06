/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalStreamTaskWork : NSObject {
    bool  _hasBeenCalledBack;
    NSError * _recvdError;
    const char * _static_description;
    double  _timeout;
    double  _timeoutTime;
}

- (const char *)_static_description;
- (id)description;
- (id)initWithDescription:(const char *)arg1;

@end
