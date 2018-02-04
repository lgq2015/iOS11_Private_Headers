/* made by EzioChiu.
 */

@protocol MSCLAttachmentPropertiesTableViewSectionDelegate <NSObject>

@required

- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 artistLengthChanged:(long long)arg2;
- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 titleLengthChanged:(long long)arg2;

@optional

- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 reloadCellSizeForRowAtIndex:(long long)arg2;
- (void)tableViewSection:(MSCLAttachmentPropertiesTableViewSection *)arg1 reloadTagSuggestionsForRowAtIndex:(long long)arg2;

@end
