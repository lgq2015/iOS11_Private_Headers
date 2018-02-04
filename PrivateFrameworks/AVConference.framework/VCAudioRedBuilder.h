/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRedBuilder : NSObject {
    bool  _includeSequenceOffset;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
    }  _latestPrimaryPayload;
    unsigned int  _maxDelay;
    unsigned int  _numPayloads;
    char * _payloadBufferHistory;
    int  _payloadBufferHistoryIndex;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
    }  _payloadHistory;
    unsigned int  _payloadHistoryCount;
    unsigned char  _redPayloadBufferToSend;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
    }  _redPayloadToSend;
    int  _redPayloadType;
    unsigned int  _sampleRate;
    NSPointerArray * _selectedRedPayloads;
}

@property (nonatomic) unsigned int maxDelay;
@property (nonatomic) unsigned int numPayloads;
@property (nonatomic, readonly) int redPayloadType;

- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1 redPayloads:(id)arg2;
- (void)dealloc;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)getPrimaryPayloadWithBuffer:(char *)arg1 length:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 numPayloads:(unsigned int)arg3 maxDelay:(unsigned int)arg4 includeSequenceOffset:(bool)arg5;
- (bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1 forTimestamp:(unsigned int)arg2;
- (unsigned int)maxDelay;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)nearestRedPayloadForTimestamp:(unsigned int)arg1;
- (unsigned int)numPayloads;
- (id)payloadHistoryDescription;
- (id)redPayloadDescription:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1;
- (int)redPayloadType;
- (bool)redundantPayloads:(id)arg1 containsPointer:(void*)arg2;
- (id)redundantPayloadsDescription:(id)arg1;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1;
- (void)setMaxDelay:(unsigned int)arg1;
- (void)setNumPayloads:(unsigned int)arg1;
- (unsigned int)timestampOffsetFor20msBlocks:(int)arg1;
- (void)updatePayloadHistory:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; }*)arg1;

@end
