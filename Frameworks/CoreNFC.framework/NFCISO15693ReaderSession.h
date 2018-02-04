/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCISO15693ReaderSession : NFCReaderSession

+ (bool)readingAvailable;

- (void)didDetectTags:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)restartPolling;

@end
