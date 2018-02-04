/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFileManager : NSObject {
    NSFileManager * _fileManager;
}

@property (nonatomic, readonly) NSFileManager *fileManager;

- (void).cxx_destruct;
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3;
- (id)fileManager;
- (id)init;
- (id)initWithFileManager:(id)arg1;

@end
