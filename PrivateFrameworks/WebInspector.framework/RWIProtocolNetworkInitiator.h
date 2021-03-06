/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (nonatomic) double lineNumber;
@property (nonatomic, copy) NSArray *stackTrace;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *url;

- (id)initWithType:(long long)arg1;
- (double)lineNumber;
- (void)setLineNumber:(double)arg1;
- (void)setStackTrace:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)stackTrace;
- (long long)type;
- (id)url;

@end
