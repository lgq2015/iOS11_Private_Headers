/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKArchiveCreator : NSObject {
    struct archive { } * _archive;
    NSURL * _archiveURL;
    NSFileHandle * _fileHandle;
}

@property (nonatomic, readonly, copy) NSURL *archiveURL;
@property (nonatomic, readonly) NSFileHandle *fileHandle;

- (void).cxx_destruct;
- (void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2;
- (void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2;
- (bool)archiveIsValid;
- (id)archiveURL;
- (void)closeArchive;
- (void)dealloc;
- (id)fileHandle;
- (id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2;
- (id)initWithURL:(id)arg1 archiveType:(long long)arg2;
- (id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3;

@end
