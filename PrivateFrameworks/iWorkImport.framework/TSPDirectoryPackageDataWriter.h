/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter> {
    NSURL * _URL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)flushPendingWritesReturningError:(id*)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (struct CGDataConsumer { }*)newCGDataConsumerAtRelativePath:(id)arg1;
- (id)targetDataURLForPath:(id)arg1;
- (bool)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(bool)arg3 error:(id*)arg4;

@end
