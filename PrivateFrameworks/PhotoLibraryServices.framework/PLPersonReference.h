/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersonReference : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic, retain) PLPerson *person;
@property (nonatomic, retain) NSData *personData;
@property (nonatomic, retain) NSString *personUUID;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;

@end
