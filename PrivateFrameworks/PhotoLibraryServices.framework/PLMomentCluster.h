/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentCluster : NSObject {
    CLLocation * __approximateLocation;
    NSDate * __endingDate;
    NSCountedSet * __mergeTags;
    NSMutableArray * __mutableNodes;
    NSMutableSet * __nodesWithLocation;
    NSObject<NSCopying> * __objectID;
    NSCountedSet * __splitTags;
    NSDate * __startingDate;
    NSString * __title;
    bool  __usedLocationsOfInterest;
    short  _generationType;
}

@property (setter=_setMergeTags:, nonatomic, retain) NSCountedSet *_mergeTags;
@property (setter=_setNodes:, nonatomic, copy) NSMutableArray *_mutableNodes;
@property (nonatomic, readonly) NSMutableSet *_nodesWithLocation;
@property (setter=_setSplitTags:, nonatomic, retain) NSCountedSet *_splitTags;
@property (nonatomic, readonly) CLLocation *approximateLocation;
@property (setter=_setEndingDate:, nonatomic, retain) NSDate *endingDate;
@property (nonatomic) short generationType;
@property (nonatomic, readonly, copy) NSArray *nodes;
@property (nonatomic, readonly) NSObject<NSCopying> *objectID;
@property (setter=_setStartingDate:, nonatomic, retain) NSDate *startingDate;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool usedLocationsOfInterest;

+ (double)nameOccurrenceCutoff;

- (void)_correctStartAndEndDates;
- (id)_mergeTags;
- (id)_mutableNodes;
- (id)_nodesWithLocation;
- (void)_setEndingDate:(id)arg1;
- (void)_setMergeTags:(id)arg1;
- (void)_setNodes:(id)arg1;
- (void)_setSplitTags:(id)arg1;
- (void)_setStartingDate:(id)arg1;
- (id)_splitTags;
- (void)addNode:(id)arg1;
- (void)addNodes:(id)arg1;
- (void)addNodesFromCluster:(id)arg1;
- (id)approximateLocation;
- (void)commonPLMomentClusterInitialization;
- (void)dealloc;
- (id)description;
- (id)endingDate;
- (unsigned long long)expandFromNode:(id)arg1 withNeighbors:(id)arg2 inClustering:(id)arg3 minimumNumberOfPoints:(unsigned long long)arg4;
- (short)generationType;
- (bool)hasMerges;
- (bool)hasSplits;
- (id)init;
- (id)initWithMoment:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (bool)isTagged;
- (id)mergeTagAboveCutoff:(double)arg1;
- (id)mergeTags;
- (id)nodes;
- (id)objectID;
- (void)removeNode:(id)arg1 nilCluster:(bool)arg2;
- (void)removeNodes:(id)arg1;
- (void)removeNodesFromCluster:(id)arg1;
- (void)setGenerationType:(short)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsedLocationsOfInterest:(bool)arg1;
- (id)splitTags;
- (id)startingDate;
- (id)title;
- (bool)usedLocationsOfInterest;

@end
