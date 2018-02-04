/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSidecarFile : PLManagedObject <PLPTPTransferableSidecarFile>

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, readonly, retain) NSDate *captureDate;
@property (nonatomic, retain) NSDate *captureDate;
@property (nonatomic, readonly, retain) NSNumber *compressedSize;
@property (nonatomic, retain) NSNumber *compressedSize;
@property unsigned long long compressedSizeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSURL *fileURL;
@property (nonatomic, readonly, retain) NSString *filename;
@property (nonatomic, retain) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *index;
@property short indexValue;
@property (nonatomic, readonly, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic, readonly) long long ptpTrashedState;
@property (nonatomic) long long ptpTrashedState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (unsigned long long)compressedSizeValue;
- (id)fileURL;
- (short)indexValue;
- (void)setCompressedSizeValue:(unsigned long long)arg1;
- (void)setIndexValue:(short)arg1;

@end
