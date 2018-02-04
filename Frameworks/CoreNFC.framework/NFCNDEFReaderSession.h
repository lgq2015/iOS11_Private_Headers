/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCNDEFReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    NSArray * _foundTags;
    bool  _invalidateAfterFirstRead;
    NFTimer * _presenceCheckTimer;
    unsigned long long  _tagsRead;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)readingAvailable;

- (id)_getNDEFMessageFromMessageData:(id)arg1;
- (id)_getPayloadsFromNDEFRecords:(id)arg1;
- (id)_getURLsFromNDEFMessage:(id)arg1;
- (void)_refreshFoundTags;
- (bool)_validateRecords:(id)arg1 fromOriginal:(id)arg2;
- (void)dealloc;
- (void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2;
- (void)didTerminate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 invalidateAfterFirstRead:(bool)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;

@end
