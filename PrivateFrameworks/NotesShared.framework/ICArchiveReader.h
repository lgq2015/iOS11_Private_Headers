/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICArchiveReader : NSObject {
    struct archive { } * _archive;
    NSString * _destinationPath;
    NSString * _sourcePath;
}

@property (nonatomic, retain) NSString *destinationPath;
@property (nonatomic, retain) NSString *sourcePath;

- (void).cxx_destruct;
- (id)destinationPath;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (bool)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id*)arg3 error:(id*)arg4;
- (void)setDestinationPath:(id)arg1;
- (void)setSourcePath:(id)arg1;
- (id)sourcePath;
- (bool)unarchiveResultURLs:(id*)arg1 error:(id*)arg2;
- (bool)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3;

@end
