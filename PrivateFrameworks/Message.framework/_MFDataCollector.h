/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFFileCompressionQueue * _compressionQueue;
    MFBufferedDataConsumer * _consumer;
    bool  _incomplete;
    MFMailMessageLibrary * _library;
    MFLibraryMessage * _message;
    NSString * _part;
    bool  _partial;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(bool)arg4 incomplete:(bool)arg5 compressionQueue:(id)arg6;
- (id)pathForStorage;

@end
