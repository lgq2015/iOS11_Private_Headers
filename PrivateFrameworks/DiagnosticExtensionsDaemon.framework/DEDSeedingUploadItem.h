/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDSeedingUploadItem : DEDAttachmentItem {
    unsigned long long  _bytesUploaded;
    bool  _completed;
    NSString * _extensionID;
}

@property unsigned long long bytesUploaded;
@property bool completed;
@property (retain) NSString *extensionID;

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)bytesUploaded;
- (bool)completed;
- (id)description;
- (id)extensionID;
- (id)promiseFilename;
- (id)publicDescription;
- (void)setBytesUploaded:(unsigned long long)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setExtensionID:(id)arg1;

@end
