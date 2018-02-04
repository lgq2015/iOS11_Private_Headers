/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

@interface ACCMediaLibraryUpdatePlaylistContent : NSObject {
    NSMutableArray * _contentList;
    int  _contentStyle;
    NSString * _mediaLibraryUID;
    unsigned long long  _persistentID;
    NSString * _revision;
}

@property (nonatomic, retain) NSMutableArray *contentList;
@property (nonatomic) int contentStyle;
@property (nonatomic, retain) NSString *mediaLibraryUID;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic, retain) NSString *revision;

- (void).cxx_destruct;
- (void)addContentItem:(id)arg1;
- (void)addContentPersistentID:(unsigned long long)arg1;
- (id)contentList;
- (unsigned long long)contentListCount;
- (int)contentStyle;
- (id)copyContentDictList;
- (id)copyContentList;
- (id)copyDict;
- (id)debugDescription;
- (id)description;
- (id)getContentItemAtIndex:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 revision:(id)arg2 dict:(id)arg3;
- (void)iterateContentItems:(id /* block */)arg1;
- (void)iterateContentPersistentIDs:(id /* block */)arg1;
- (id)mediaLibraryUID;
- (unsigned long long)persistentID;
- (void)replaceContentItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceContentList:(id)arg1;
- (void)replaceContentPersistentID:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)revision;
- (void)setContentList:(id)arg1;
- (void)setContentStyle:(int)arg1;
- (void)setMediaLibraryUID:(id)arg1;
- (void)setPersistentID:(unsigned long long)arg1;
- (void)setRevision:(id)arg1;

@end
