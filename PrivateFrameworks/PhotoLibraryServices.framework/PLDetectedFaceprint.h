/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDetectedFaceprint : PLManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) PLDetectedFace *face;
@property (nonatomic) int faceprintVersion;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

@end
