/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDimensionMaxCache : NSObject {
    id /* block */  _comparator;
    NSMutableDictionary * _dimensions;
    NSMutableArray * _sortedDimensions;
}

@property (nonatomic, readonly) id /* block */ comparator;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSMutableDictionary *dimensions;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) NSMutableArray *sortedDimensions;

- (void).cxx_destruct;
- (id /* block */)comparator;
- (unsigned long long)count;
- (double)dimensionForKey:(id)arg1;
- (id)dimensions;
- (id)init;
- (id)initWithComparator:(id /* block */)arg1;
- (double)max;
- (void)removeDimensionForKey:(id)arg1;
- (void)setDimension:(double)arg1 forKey:(id)arg2;
- (id)sortedDimensions;

@end
