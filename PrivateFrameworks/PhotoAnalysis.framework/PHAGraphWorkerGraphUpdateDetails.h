/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphWorkerGraphUpdateDetails : NSObject {
    PHFetchOptions * _fetchOptions;
    NSArray * _momentLibraryChanges;
    NSMutableSet * _momentsToAdd;
    NSMutableSet * _momentsToDelete;
    NSMutableSet * _momentsToInvalidateOnly;
    NSMutableSet * _momentsToUpdate;
}

@property (retain) PHFetchOptions *fetchOptions;
@property (readonly) bool hasAnyChanges;
@property (readonly) bool hasMomentsToAdd;
@property (readonly) bool hasMomentsToDelete;
@property (readonly) bool hasMomentsToUpdate;
@property (readonly) NSArray *momentLibraryChanges;
@property (retain) NSMutableSet *momentsToAdd;
@property (retain) NSMutableSet *momentsToDelete;
@property (retain) NSMutableSet *momentsToInvalidateOnly;
@property (retain) NSMutableSet *momentsToUpdate;

- (void).cxx_destruct;
- (id)fetchOptions;
- (bool)hasAnyChanges;
- (bool)hasMomentsToAdd;
- (bool)hasMomentsToDelete;
- (bool)hasMomentsToUpdate;
- (id)initWithMomentLibraryChanges:(id)arg1 fetchOptions:(id)arg2;
- (id)momentIdentiferToFlagsMapForMoments:(id)arg1 assetFlags:(id)arg2;
- (id)momentLibraryChanges;
- (id)momentsToAdd;
- (id)momentsToDelete;
- (id)momentsToInvalidateOnly;
- (id)momentsToUpdate;
- (void)processMomentLibraryChanges;
- (void)setFetchOptions:(id)arg1;
- (void)setMomentsToAdd:(id)arg1;
- (void)setMomentsToDelete:(id)arg1;
- (void)setMomentsToInvalidateOnly:(id)arg1;
- (void)setMomentsToUpdate:(id)arg1;

@end
