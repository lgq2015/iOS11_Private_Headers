/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudStreamShareJob : PLCloudSharingJob {
    NSString * _albumCloudGUID;
    NSString * _albumName;
    NSString * _commentText;
    NSArray * _mediaSources;
    NSArray * _recipientsInfo;
}

@property (nonatomic, retain) NSString *albumCloudGUID;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSString *commentText;
@property (nonatomic, retain) NSArray *mediaSources;
@property (nonatomic, retain) NSArray *recipientsInfo;

+ (void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4;
+ (void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3;

- (void)addInfosForRecipients:(id)arg1;
- (id)albumCloudGUID;
- (id)albumName;
- (id)commentText;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDaemonOperation;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)mediaSources;
- (id)recipientsInfo;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumCloudGUID:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setMediaSources:(id)arg1;
- (void)setRecipientsInfo:(id)arg1;
- (bool)shouldArchiveXPCToDisk;

@end
