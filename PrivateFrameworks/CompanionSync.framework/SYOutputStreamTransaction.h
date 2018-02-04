/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction> {
    NSURL * _fileURL;
    NSDictionary * _metadata;
    NSProgress * _progress;
    struct NSOutputStream { Class x1; } * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fileURL;
- (id)finalizeOutput:(id*)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)metadata;
- (id)outputStream;
- (bool)prepare:(id*)arg1;
- (id)progress;
- (long long)type;

@end
