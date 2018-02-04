/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendCommandResultMessage : MRProtocolMessage {
    NSArray * _results;
}

@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) unsigned int sendError;

- (void)dealloc;
- (id)initWithSendError:(unsigned int)arg1 results:(id)arg2;
- (id)results;
- (unsigned int)sendError;
- (unsigned long long)type;

@end
