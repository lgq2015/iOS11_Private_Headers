/* made by EzioChiu.
 */

@protocol CNPropertyCellDelegate <NSObject>

@required

- (CNContactViewCache *)contactViewCache;
- (id)defaultValueForPropertyCell:(CNPropertyCell *)arg1;
- (void)propertyCell:(CNPropertyCell *)arg1 didUpdateItem:(CNPropertyGroupItem *)arg2 withNewLabel:(NSString *)arg3;
- (void)propertyCell:(CNPropertyCell *)arg1 didUpdateItem:(CNPropertyGroupItem *)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(CNPropertyCell *)arg1 performActionForItem:(CNPropertyGroupItem *)arg2 withTransportType:(long long)arg3;
- (void)propertyCellDidChangeLayout:(CNPropertyCell *)arg1;

@optional

- (<CNUIUserActionListDataSource> *)sharedActionsDataSource;

@end
