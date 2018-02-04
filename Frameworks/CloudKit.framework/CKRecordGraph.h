/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordGraph : NSObject {
    NSMutableArray * _nodes;
    NSArray * _sortedRecords;
}

@property (nonatomic, retain) NSMutableArray *nodes;
@property (nonatomic, retain) NSArray *sortedRecords;

+ (id)topologicallySortRecords:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (bool)addRecords:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)init;
- (id)nodes;
- (id)recordsByTopologicalSortWithError:(id*)arg1;
- (void)setNodes:(id)arg1;
- (void)setSortedRecords:(id)arg1;
- (id)sortedRecords;

@end
