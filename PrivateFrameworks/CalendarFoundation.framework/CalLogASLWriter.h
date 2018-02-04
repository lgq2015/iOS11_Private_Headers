/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogASLWriter : CalLogWriter {
    struct __asl_object_s { } * log_client;
}

+ (id)aslNamespaces;

- (void)_configureASLClient;
- (void)_configureASLNamespaces;
- (char *)aslLevelForLogLevel:(int)arg1;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;

@end
