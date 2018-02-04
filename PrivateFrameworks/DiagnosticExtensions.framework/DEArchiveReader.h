/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEArchiveReader : NSObject {
    struct archive { } * _archive;
}

- (void)closeArchive;
- (id)initWithURL:(id)arg1;
- (id)listContainedPaths;

@end
