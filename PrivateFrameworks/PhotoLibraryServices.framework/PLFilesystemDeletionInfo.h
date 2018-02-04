/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilesystemDeletionInfo : NSObject {
    NSString * _directory;
    NSArray * _fileURLs;
    NSString * _filename;
    NSURL * _objectIDURI;
    NSString * _thumbnailIdentifier;
    unsigned long long  _thumbnailIndex;
    unsigned long long  _timestamp;
    NSString * _uuid;
}

@property (readonly, retain) NSString *directory;
@property (retain) NSArray *fileURLs;
@property (readonly, retain) NSString *filename;
@property (readonly, retain) NSURL *objectIDURI;
@property (retain) NSString *thumbnailIdentifier;
@property (readonly) unsigned long long thumbnailIndex;
@property (readonly) unsigned long long timestamp;
@property (readonly, retain) NSString *uuid;

+ (id)deletionInfoWithAsset:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)directory;
- (id)fileURLs;
- (id)filename;
- (id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8;
- (id)objectIDURI;
- (void)setFileURLs:(id)arg1;
- (void)setThumbnailIdentifier:(id)arg1;
- (id)thumbnailIdentifier;
- (unsigned long long)thumbnailIndex;
- (unsigned long long)timestamp;
- (id)uuid;

@end
