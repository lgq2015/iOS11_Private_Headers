/* made by EzioChiu.
 */

@protocol VCMomentsHistoryBufferDelegate <NSObject>

@required

- (void)historyBuffer:(VCMomentsHistoryBuffer *)arg1 didDequeueSample:(struct opaqueCMSampleBuffer { }*)arg2 timestamp:(unsigned int)arg3;

@end
