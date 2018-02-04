/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCProgress : NSProgress {
    BOOL  _group;
    NSArray * _parentFileIDs;
    NSMutableDictionary * _progressByAliasContainerID;
    bool  _published;
    BRCAccountSession * _session;
}

@property (nonatomic, readonly) bool isPublished;
@property (nonatomic, readonly) NSArray *parentFileIDs;

+ (id)_progressForDocument:(id)arg1 group:(BOOL)arg2 sizeInfo:(id)arg3;
+ (id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;
+ (id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;

- (void).cxx_destruct;
- (void)addAliasItem:(id)arg1;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithGroup:(BOOL)arg1 parentFileIDs:(id)arg2 session:(id)arg3;
- (bool)isPublished;
- (id)parentFileIDs;
- (void)setCompletedUnitCount:(long long)arg1;

@end
