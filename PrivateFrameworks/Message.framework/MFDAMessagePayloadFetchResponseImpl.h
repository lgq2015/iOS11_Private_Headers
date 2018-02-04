/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    NSData * data;
    bool  streaming;
    bool  streamingDone;
}

- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 streaming:(bool)arg2 streamingDone:(bool)arg3;
- (bool)streaming;
- (bool)streamingDone;

@end
