/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedEntry : PLManagedObject

@property (nonatomic, readonly) NSURL *URIRepresentation;
@property (nonatomic, retain) NSString *entryAlbumGUID;
@property (nonatomic, retain) NSDate *entryDate;
@property (nonatomic, retain) NSString *entryInvitationRecordGUID;
@property (nonatomic, readonly) long long entryPriority;
@property (nonatomic, retain) NSNumber *entryPriorityNumber;
@property (nonatomic, readonly) long long entryType;
@property (nonatomic, retain) NSNumber *entryTypeNumber;

+ (id)allEntriesInLibrary:(id)arg1;
+ (id)allEntriesInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)entriesSortDescriptorsAscending:(bool)arg1;
+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;
+ (id)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3;
+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(long long)arg2;
+ (id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(long long)arg4;

- (id)URIRepresentation;
- (long long)entryPriority;
- (long long)entryType;
- (bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
