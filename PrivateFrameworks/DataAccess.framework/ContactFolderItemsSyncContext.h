/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ContactFolderItemsSyncContext : NSObject {
    int  _abGroupChangeId;
    int  _abPersonChangeId;
}

@property (nonatomic) int abGroupChangeId;
@property (nonatomic) int abPersonChangeId;

- (int)abGroupChangeId;
- (int)abPersonChangeId;
- (void)setAbGroupChangeId:(int)arg1;
- (void)setAbPersonChangeId:(int)arg1;

@end
