/* made by EzioChiu.
 */

@protocol CADObjectInterface

@required

- (void)CADDatabaseDeleteObjectsWithObjectIDs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADObject:(void *)arg1 getDataPropertyWithName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)CADObject:(void *)arg1 getDatePropertyWithName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDate *, void*
- (void)CADObject:(void *)arg1 getNumberPropertyWithName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSNumber *, void*
- (void)CADObject:(void *)arg1 getPropertiesWithNames:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADObject:(void *)arg1 getPropertyWithName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSObject<NSSecureCoding> *, void*
- (void)CADObject:(void *)arg1 getRelatedObjectWithRelationName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADObject:(void *)arg1 getRelatedObjectsWithRelationName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSSet *, void*
- (void)CADObject:(void *)arg1 getStringPropertyWithName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, void*
- (void)CADObject:(void *)arg1 setAttributes:(void *)arg2 andRelations:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CADObjectID *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADObjectExists:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADObjectIsManaged:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADObjectsExist:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*

@end
