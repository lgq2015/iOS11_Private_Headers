/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncStatistics : NSObject {
    unsigned long long  _syncedAttachmentCount;
    unsigned long long  _syncedChatCount;
    unsigned long long  _syncedMessageCount;
    unsigned long long  _syncedRecordCount;
    unsigned long long  _totalAttachmentCount;
    unsigned long long  _totalChatCount;
    unsigned long long  _totalMessageCount;
    unsigned long long  _totalRecordCount;
}

@property (nonatomic, readonly) double percentSynced;
@property (nonatomic) unsigned long long syncedAttachmentCount;
@property (nonatomic) unsigned long long syncedChatCount;
@property (nonatomic) unsigned long long syncedMessageCount;
@property (nonatomic) unsigned long long syncedRecordCount;
@property (nonatomic) unsigned long long totalAttachmentCount;
@property (nonatomic) unsigned long long totalChatCount;
@property (nonatomic) unsigned long long totalMessageCount;
@property (nonatomic) unsigned long long totalRecordCount;

+ (id)_createSyncStatisticsDictionary:(long long)arg1 messageSyncCount:(long long)arg2 chatCount:(long long)arg3 chatSyncCount:(long long)arg4 attachmentCount:(long long)arg5 attachmentSyncCount:(long long)arg6;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)arg1 syncType:(unsigned long long)arg2 count:(double)arg3 max:(double)arg4;
+ (double)calculatePercentageOfTotal:(double)arg1 count:(double)arg2;
+ (id)percentStringFromDouble:(double)arg1;
+ (id)percentStringFromTotal:(double)arg1 count:(double)arg2;

- (id)_statsString:(id)arg1 count:(long long)arg2 total:(long long)arg3;
- (id)_syncStatisticsDictionary;
- (id)description;
- (id)initWithStatisticsDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)percentSynced;
- (void)setSyncedAttachmentCount:(unsigned long long)arg1;
- (void)setSyncedChatCount:(unsigned long long)arg1;
- (void)setSyncedMessageCount:(unsigned long long)arg1;
- (void)setSyncedRecordCount:(unsigned long long)arg1;
- (void)setTotalAttachmentCount:(unsigned long long)arg1;
- (void)setTotalChatCount:(unsigned long long)arg1;
- (void)setTotalMessageCount:(unsigned long long)arg1;
- (void)setTotalRecordCount:(unsigned long long)arg1;
- (unsigned long long)syncedAttachmentCount;
- (unsigned long long)syncedChatCount;
- (unsigned long long)syncedMessageCount;
- (unsigned long long)syncedRecordCount;
- (unsigned long long)totalAttachmentCount;
- (unsigned long long)totalChatCount;
- (unsigned long long)totalMessageCount;
- (unsigned long long)totalRecordCount;

@end
