/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHLogger : NSObject <CHLoggerProtocol> {
    struct os_log_s { } * _logHandle;
}

- (id)initWithDomain:(const char *)arg1;
- (struct os_log_s { }*)logHandle;

@end
