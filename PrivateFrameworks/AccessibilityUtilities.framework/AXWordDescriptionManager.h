/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXWordDescriptionManager : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSString * languageDialectCode;
}

@property (nonatomic, retain) NSString *languageDialectCode;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)descriptionForWord:(id)arg1;
- (id)languageCode;
- (id)languageDialectCode;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (void)setLanguageDialectCode:(id)arg1;

@end
