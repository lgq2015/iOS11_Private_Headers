/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAFolder : NSObject {
    long long  _dataclass;
    NSString * _folderID;
    NSString * _folderName;
    bool  _hasRemoteChanges;
    bool  _isDefault;
    NSString * _parentFolderID;
}

@property (nonatomic) long long dataclass;
@property (nonatomic, copy) NSString *folderID;
@property (nonatomic, copy) NSString *folderName;
@property (nonatomic) bool hasRemoteChanges;
@property (nonatomic) bool isDefault;
@property (nonatomic, copy) NSString *parentFolderID;

- (void).cxx_destruct;
- (long long)dataclass;
- (id)description;
- (id)folderID;
- (id)folderName;
- (bool)hasRemoteChanges;
- (unsigned long long)hash;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)mailboxID;
- (id)parentFolderID;
- (id)parentMailboxID;
- (void)setDataclass:(long long)arg1;
- (void)setFolderID:(id)arg1;
- (void)setFolderName:(id)arg1;
- (void)setHasRemoteChanges:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setParentFolderID:(id)arg1;

@end
