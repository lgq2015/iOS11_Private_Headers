/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditPersistenceManager : NSObject

- (id)_allConverterClasses;
- (id)_allImporterClasses;
- (Class)_latestExporterClass;
- (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
- (id)dataFromPhotoEditModel:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4;
- (id)debugDescriptionForAdjustmentData:(id)arg1;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 importProperties:(id)arg5;

@end
