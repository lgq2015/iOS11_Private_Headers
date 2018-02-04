/* made by EzioChiu.
 */

@protocol ICLegacyAccount <NSObject>

@required

- (NSString *)accountIdentifier;
- (<ICLegacyFolder> *)defaultFolder;
- (NSString *)emailAddress;
- (NSSet *)folders;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (NSManagedObjectID *)objectID;
- (NSString *)objectIdentifier;
- (bool)supportsAttachments;

@end
