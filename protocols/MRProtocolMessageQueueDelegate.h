/* made by EzioChiu.
 */

@protocol MRProtocolMessageQueueDelegate <NSObject>

@required

- (unsigned long long)messageQueue:(MRProtocolMessageQueue *)arg1 processData:(NSData *)arg2 atReadPosition:(long long)arg3;

@end
