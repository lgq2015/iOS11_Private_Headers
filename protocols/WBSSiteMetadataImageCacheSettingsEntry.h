/* made by EzioChiu.
 */

@protocol WBSSiteMetadataImageCacheSettingsEntry <NSObject>

@required

- (long long)databaseID;
- (id)initWithSQLiteRow:(WBSSQLiteRow *)arg1;
- (void)setDatabaseID:(long long)arg1;

@end
