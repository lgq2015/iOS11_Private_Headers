/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetRecordingStateMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int state;

- (id)initWithRecordingState:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned long long)type;

@end
